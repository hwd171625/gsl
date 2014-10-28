#include "gsl_gsl_math.h"
#include "gsl_gsl_cblas.h"
#include "cblas_cblas.h"
#include "cblas_error_cblas_l2.h"

void
cblas_ssyr (const enum CBLAS_ORDER order, const enum CBLAS_UPLO Uplo,
            const int N, const float alpha, const float *X, const int incX,
            float *A, const int lda)
{
#define BASE float
#include "cblas_source_syr.h"
#undef BASE
}
