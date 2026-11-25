#ifndef __CUBIC_SPLINES__HH__
#define __CUBIC_SPLINES__HH__

/* -------------------------------------------------------------------------- */
#include "interpolator.hh"

/**
  * Documentation TODO
  */

class CubicSplines: public Interpolator{

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
  std::map<Interval, std::array<double>[4]> coefficients;

};

/* -------------------------------------------------------------------------- */
#endif //__CUBIC_SPLINES__HH__
