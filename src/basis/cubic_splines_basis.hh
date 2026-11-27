#ifndef __CUBIC_SPLINES_BASIS__HH__
#define __CUBIC_SPLINES_BASIS__HH__

/* -------------------------------------------------------------------------- */
#include "basis.hh"

/**
 * Documentation TODO
 */

class CubicSplinesBasis : public Basis
{

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:
  //! Documentation TODO
  std::array<double> evaluate_basis(double x);
};

/* -------------------------------------------------------------------------- */
#endif //__CUBIC_SPLINES_BASIS__HH__
