#ifndef __LAGRANGE_BASIS__HH__
#define __LAGRANGE_BASIS__HH__

/* -------------------------------------------------------------------------- */
#include "basis.hh"

/**
 * This file contains the basis function for a Lagrange interpolator. The Interpolator will call Lagrange, which will use coefficients to weight at sum of basis functions, herein defined and computed for specific instances.
 */

class LagrangeBasis : public Basis
{

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:
  //! This method takes an x-coordinate as input, then returns the correct basis functions computed at that specific x-point, sorted in a vector such as [basis_1(x), basis_2(x)].
  std::vector<double> evaluate_basis(double x);
};

/* -------------------------------------------------------------------------- */
#endif //__LAGRANGE_BASIS__HH__
