// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// swap_pass
List swap_pass(List listdata);
RcppExport SEXP _ASURAT_swap_pass(SEXP listdataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type listdata(listdataSEXP);
    rcpp_result_gen = Rcpp::wrap(swap_pass(listdata));
    return rcpp_result_gen;
END_RCPP
}
// bubble_sort
List bubble_sort(List listdata);
RcppExport SEXP _ASURAT_bubble_sort(SEXP listdataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type listdata(listdataSEXP);
    rcpp_result_gen = Rcpp::wrap(bubble_sort(listdata));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ASURAT_swap_pass", (DL_FUNC) &_ASURAT_swap_pass, 1},
    {"_ASURAT_bubble_sort", (DL_FUNC) &_ASURAT_bubble_sort, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_ASURAT(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
