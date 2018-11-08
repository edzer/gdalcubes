/*
   Copyright 2018 Marius Appel <marius.appel@uni-muenster.de>

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
#ifndef IMAGE_COLLECTION_CUBE_H
#define IMAGE_COLLECTION_CUBE_H

#include "cube.h"

/**
 * @brief A data cube that reads data from an image collection
 *
 * An image collection cube is created from a cube view and reads data from an image collection.
 * The cube view defines the shape of the cube (size, extent, etc.) and automatically derives
 * which images of the collection are relevant for which chunks. To transform images to the shape of the cube,
 * [gdalwarp](https://www.gdal.org/gdalwarp.html) is applied on each image and images that fall into the same temporal slice
 * are aggregated with an aggregation function.
 *
 * @see image_collection
 * @see cube_view
 */
class image_collection_cube : public cube {
   public:
    image_collection_cube(std::shared_ptr<image_collection> ic, cube_view v);
    image_collection_cube(std::string icfile, cube_view v);
    image_collection_cube(std::shared_ptr<image_collection> ic, std::string vfile);
    image_collection_cube(std::string icfile, std::string vfile);
    image_collection_cube(std::shared_ptr<image_collection> ic);
    image_collection_cube(std::string icfile);
    ~image_collection_cube() {}

    inline const std::shared_ptr<image_collection> collection() { return _collection; }
    inline std::shared_ptr<cube_view> view() { return std::dynamic_pointer_cast<cube_view>(_st_ref); }

    std::string to_string() override;

    std::shared_ptr<chunk_data> read_chunk(chunkid_t id) override;

    // image_collection_cube is the only class that supports changing chunk sizes from outside!
    // This is important for e.g. streaming.
    void set_chunk_size(uint32_t t, uint32_t y, uint32_t x) {
        _chunk_size = {t, y, x};
    }

    nlohmann::json make_constructible_json() override {
        if (_collection->is_temporary()) {
            throw std::string("ERROR in image_collection_cube::make_constructible_json(): image collection is temporary, please export as file using write() first.");
        }
        nlohmann::json out;
        out["cube_type"] = "image_collection";
        out["chunk_size"] = {_chunk_size[0], _chunk_size[1], _chunk_size[2]};
        out["view"] = nlohmann::json::parse(std::dynamic_pointer_cast<cube_view>(_st_ref)->write_json_string());
        out["file"] = _collection->get_filename();
        return out;
    }

    static cube_view default_view(std::shared_ptr<image_collection> ic);

   private:
    const std::shared_ptr<image_collection> _collection;

    void load_bands();

    band_collection _input_bands;
};

#endif  //IMAGE_COLLECTION_CUBE_H
