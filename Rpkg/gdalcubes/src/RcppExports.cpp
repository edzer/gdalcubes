// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// libgdalcubes_version
void libgdalcubes_version();
RcppExport SEXP _gdalcubes_libgdalcubes_version() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    libgdalcubes_version();
    return R_NilValue;
END_RCPP
}
// libgdalcubes_init
void libgdalcubes_init();
RcppExport SEXP _gdalcubes_libgdalcubes_init() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    libgdalcubes_init();
    return R_NilValue;
END_RCPP
}
// libgdalcubes_cleanup
void libgdalcubes_cleanup();
RcppExport SEXP _gdalcubes_libgdalcubes_cleanup() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    libgdalcubes_cleanup();
    return R_NilValue;
END_RCPP
}
// libgdalcubes_open_image_collection
SEXP libgdalcubes_open_image_collection(std::string filename);
RcppExport SEXP _gdalcubes_libgdalcubes_open_image_collection(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_open_image_collection(filename));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_image_collection_cube
SEXP libgdalcubes_create_image_collection_cube(std::string filename, std::string view);
RcppExport SEXP _gdalcubes_libgdalcubes_create_image_collection_cube(SEXP filenameSEXP, SEXP viewSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::string >::type view(viewSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_image_collection_cube(filename, view));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_reduce_cube
SEXP libgdalcubes_create_reduce_cube(SEXP inptr, std::string reducer);
RcppExport SEXP _gdalcubes_libgdalcubes_create_reduce_cube(SEXP inptrSEXP, SEXP reducerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inptr(inptrSEXP);
    Rcpp::traits::input_parameter< std::string >::type reducer(reducerSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_reduce_cube(inptr, reducer));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_eval_reduce_cube
void libgdalcubes_eval_reduce_cube(SEXP inptr, std::string outfile, std::string of);
RcppExport SEXP _gdalcubes_libgdalcubes_eval_reduce_cube(SEXP inptrSEXP, SEXP outfileSEXP, SEXP ofSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inptr(inptrSEXP);
    Rcpp::traits::input_parameter< std::string >::type outfile(outfileSEXP);
    Rcpp::traits::input_parameter< std::string >::type of(ofSEXP);
    libgdalcubes_eval_reduce_cube(inptr, outfile, of);
    return R_NilValue;
END_RCPP
}
// libgdalcubes_create_stream_cube
SEXP libgdalcubes_create_stream_cube(SEXP inptr, std::string cmd, std::vector<int> chunk_size);
RcppExport SEXP _gdalcubes_libgdalcubes_create_stream_cube(SEXP inptrSEXP, SEXP cmdSEXP, SEXP chunk_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type inptr(inptrSEXP);
    Rcpp::traits::input_parameter< std::string >::type cmd(cmdSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type chunk_size(chunk_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_stream_cube(inptr, cmd, chunk_size));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_set_threads
void libgdalcubes_set_threads(IntegerVector n);
RcppExport SEXP _gdalcubes_libgdalcubes_set_threads(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type n(nSEXP);
    libgdalcubes_set_threads(n);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_gdalcubes_libgdalcubes_version", (DL_FUNC) &_gdalcubes_libgdalcubes_version, 0},
    {"_gdalcubes_libgdalcubes_init", (DL_FUNC) &_gdalcubes_libgdalcubes_init, 0},
    {"_gdalcubes_libgdalcubes_cleanup", (DL_FUNC) &_gdalcubes_libgdalcubes_cleanup, 0},
    {"_gdalcubes_libgdalcubes_open_image_collection", (DL_FUNC) &_gdalcubes_libgdalcubes_open_image_collection, 1},
    {"_gdalcubes_libgdalcubes_create_image_collection_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_image_collection_cube, 2},
    {"_gdalcubes_libgdalcubes_create_reduce_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_reduce_cube, 2},
    {"_gdalcubes_libgdalcubes_eval_reduce_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_eval_reduce_cube, 3},
    {"_gdalcubes_libgdalcubes_create_stream_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_stream_cube, 3},
    {"_gdalcubes_libgdalcubes_set_threads", (DL_FUNC) &_gdalcubes_libgdalcubes_set_threads, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_gdalcubes(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
