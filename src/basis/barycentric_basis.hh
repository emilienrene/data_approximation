#ifndef __BARYCENTRIC_BASIS__HH__
#define __BARYCENTRIC_BASIS__HH__

/* -------------------------------------------------------------------------- */
#include "basis.hh"

/**
  * Documentation TODO
  */

class BarycentricBasis: public Basis{

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  std::array<double> evaluate_basis(double x);

};

/* -------------------------------------------------------------------------- */
#endif //__BARYCENTRIC_BASIS__HH__
