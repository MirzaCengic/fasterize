// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// rasterize_polygons
arma::mat rasterize_polygons(Rcpp::List& polygons, Rcpp::NumericVector& field_values, Rcpp::List raster_info, double background);
RcppExport SEXP fasterize_rasterize_polygons(SEXP polygonsSEXP, SEXP field_valuesSEXP, SEXP raster_infoSEXP, SEXP backgroundSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type polygons(polygonsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type field_values(field_valuesSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type raster_info(raster_infoSEXP);
    Rcpp::traits::input_parameter< double >::type background(backgroundSEXP);
    rcpp_result_gen = Rcpp::wrap(rasterize_polygons(polygons, field_values, raster_info, background));
    return rcpp_result_gen;
END_RCPP
}