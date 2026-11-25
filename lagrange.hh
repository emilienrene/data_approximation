#ifndef __LAGRANGE__HH__
#define __LAGRANGE__HH__

/* -------------------------------------------------------------------------- */
#include "interpolator.hh"

/**
  * Documentation TODO
  */

class Lagrange: public Interpolator{

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  DataPoint compute(double x);


  /* ------------------------------------------------------------------------ */
  /* Members                                                                  */
  /* ------------------------------------------------------------------------ */

private:

  //!Documentation TODO
  std::vector<double> coefficients;

};

/* -------------------------------------------------------------------------- */
#endif //__LAGRANGE__HH__
