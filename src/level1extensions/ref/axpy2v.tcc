#ifndef ULMBLAS_SRC_LEVEL1EXTENSIONS_REF_AXPY2V_TCC
#define ULMBLAS_SRC_LEVEL1EXTENSIONS_REF_AXPY2V_TCC 1

namespace ulmBLAS {

template <typename IndexType, typename Alpha0, typename Alpha1,
          typename VX0, typename VX1, typename VY>
void
axpy2v_ref(IndexType      n,
           const Alpha0   &alpha0,
           const Alpha1   &alpha1,
           const VX0      *x0,
           IndexType      incX0,
           const VX1      *x1,
           IndexType      incX1,
           VY             *y,
           IndexType      incY)
{
    for (IndexType i=0; i<n; ++i) {
        y[i*incY] += alpha0*x0[i*incX0] + alpha1*x1[i*incX1];
    }
}

} // namespace ulmBLAS

#endif // ULMBLAS_SRC_LEVEL1EXTENSIONS_REF_AXPY2V_TCC 1
