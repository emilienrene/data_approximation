#include "lagrange_basis.hh"
/* -------------------------------------------------------------------------- */

template <typename T>
std::vector<T> evaluate_basis(T x)
{
    T x_0 = ;
    T x_1 = ;

    T L_0 = (x_1 - x) / (x_1 - x_0);
    T L_1 = (x - x_0) / (x_1 - x_0);

    std::vector<T> basis = {L_0, L_1}; 

    return basis
}

/* --------------------------------------------------------------------------- */
