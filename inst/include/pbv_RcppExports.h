// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_pbv_RCPPEXPORTS_H_GEN_
#define RCPP_pbv_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace pbv {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("pbv", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("pbv", "_pbv_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in pbv");
            }
        }
    }

    inline double pbv_rcpp_pnorm0(double z) {
        typedef SEXP(*Ptr_pbv_rcpp_pnorm0)(SEXP);
        static Ptr_pbv_rcpp_pnorm0 p_pbv_rcpp_pnorm0 = NULL;
        if (p_pbv_rcpp_pnorm0 == NULL) {
            validateSignature("double(*pbv_rcpp_pnorm0)(double)");
            p_pbv_rcpp_pnorm0 = (Ptr_pbv_rcpp_pnorm0)R_GetCCallable("pbv", "_pbv_pbv_rcpp_pnorm0");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_pbv_rcpp_pnorm0(Shield<SEXP>(Rcpp::wrap(z)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline Rcpp::NumericVector pbv_rcpp_pnorm(Rcpp::NumericVector x) {
        typedef SEXP(*Ptr_pbv_rcpp_pnorm)(SEXP);
        static Ptr_pbv_rcpp_pnorm p_pbv_rcpp_pnorm = NULL;
        if (p_pbv_rcpp_pnorm == NULL) {
            validateSignature("Rcpp::NumericVector(*pbv_rcpp_pnorm)(Rcpp::NumericVector)");
            p_pbv_rcpp_pnorm = (Ptr_pbv_rcpp_pnorm)R_GetCCallable("pbv", "_pbv_pbv_rcpp_pnorm");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_pbv_rcpp_pnorm(Shield<SEXP>(Rcpp::wrap(x)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::NumericVector >(rcpp_result_gen);
    }

    inline double pbv_rcpp_pbvnorm0(double h1, double hk, double r) {
        typedef SEXP(*Ptr_pbv_rcpp_pbvnorm0)(SEXP,SEXP,SEXP);
        static Ptr_pbv_rcpp_pbvnorm0 p_pbv_rcpp_pbvnorm0 = NULL;
        if (p_pbv_rcpp_pbvnorm0 == NULL) {
            validateSignature("double(*pbv_rcpp_pbvnorm0)(double,double,double)");
            p_pbv_rcpp_pbvnorm0 = (Ptr_pbv_rcpp_pbvnorm0)R_GetCCallable("pbv", "_pbv_pbv_rcpp_pbvnorm0");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_pbv_rcpp_pbvnorm0(Shield<SEXP>(Rcpp::wrap(h1)), Shield<SEXP>(Rcpp::wrap(hk)), Shield<SEXP>(Rcpp::wrap(r)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline Rcpp::NumericVector pbv_rcpp_pbvnorm(Rcpp::NumericVector x, Rcpp::NumericVector y, Rcpp::NumericVector rho) {
        typedef SEXP(*Ptr_pbv_rcpp_pbvnorm)(SEXP,SEXP,SEXP);
        static Ptr_pbv_rcpp_pbvnorm p_pbv_rcpp_pbvnorm = NULL;
        if (p_pbv_rcpp_pbvnorm == NULL) {
            validateSignature("Rcpp::NumericVector(*pbv_rcpp_pbvnorm)(Rcpp::NumericVector,Rcpp::NumericVector,Rcpp::NumericVector)");
            p_pbv_rcpp_pbvnorm = (Ptr_pbv_rcpp_pbvnorm)R_GetCCallable("pbv", "_pbv_pbv_rcpp_pbvnorm");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_pbv_rcpp_pbvnorm(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(y)), Shield<SEXP>(Rcpp::wrap(rho)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::NumericVector >(rcpp_result_gen);
    }

    inline double pbv_rcpp_dbvnorm0(double x, double y, double rho, bool use_log) {
        typedef SEXP(*Ptr_pbv_rcpp_dbvnorm0)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_pbv_rcpp_dbvnorm0 p_pbv_rcpp_dbvnorm0 = NULL;
        if (p_pbv_rcpp_dbvnorm0 == NULL) {
            validateSignature("double(*pbv_rcpp_dbvnorm0)(double,double,double,bool)");
            p_pbv_rcpp_dbvnorm0 = (Ptr_pbv_rcpp_dbvnorm0)R_GetCCallable("pbv", "_pbv_pbv_rcpp_dbvnorm0");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_pbv_rcpp_dbvnorm0(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(y)), Shield<SEXP>(Rcpp::wrap(rho)), Shield<SEXP>(Rcpp::wrap(use_log)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline Rcpp::NumericVector pbv_rcpp_dbvnorm(Rcpp::NumericVector x, Rcpp::NumericVector y, Rcpp::NumericVector rho, bool use_log) {
        typedef SEXP(*Ptr_pbv_rcpp_dbvnorm)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_pbv_rcpp_dbvnorm p_pbv_rcpp_dbvnorm = NULL;
        if (p_pbv_rcpp_dbvnorm == NULL) {
            validateSignature("Rcpp::NumericVector(*pbv_rcpp_dbvnorm)(Rcpp::NumericVector,Rcpp::NumericVector,Rcpp::NumericVector,bool)");
            p_pbv_rcpp_dbvnorm = (Ptr_pbv_rcpp_dbvnorm)R_GetCCallable("pbv", "_pbv_pbv_rcpp_dbvnorm");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_pbv_rcpp_dbvnorm(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(y)), Shield<SEXP>(Rcpp::wrap(rho)), Shield<SEXP>(Rcpp::wrap(use_log)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::NumericVector >(rcpp_result_gen);
    }

}

#endif // RCPP_pbv_RCPPEXPORTS_H_GEN_
