#ifndef __SECOND_ORDER_DERIVATIVE_ENDS__HH__
#define __SECOND_ORDER_DERIVATIVE_ENDS__HH__

/* -------------------------------------------------------------------------- */
#include "cubic_splines.hh"

/**
  * Documentation TODO
  */

class SecondOrderDerivativeEnds: public CubicSplines{

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
#endif //__SECOND_ORDER_DERIVATIVE_ENDS__HH__
