#ifndef __SECOND_ORDER_DERIVATIVE_ENDS__HH__
#define __SECOND_ORDER_DERIVATIVE_ENDS__HH__

/* -------------------------------------------------------------------------- */
#include "../../types/data_point.hh"
#include "cubic_splines.hh"

#include <vector>

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
