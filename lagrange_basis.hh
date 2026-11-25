#ifndef __LAGRANGE_BASIS__HH__
#define __LAGRANGE_BASIS__HH__

/* -------------------------------------------------------------------------- */
#include "basis.hh"

/**
  * Documentation TODO
  */

class LagrangeBasis: public Basis{

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  std::vector<double> evaluate_basis(double x);

};

/* -------------------------------------------------------------------------- */
#endif //__LAGRANGE_BASIS__HH__
