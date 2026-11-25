#ifndef __CUBIC_SPLINES__HH__
#define __CUBIC_SPLINES__HH__

/* -------------------------------------------------------------------------- */
#include "../../types/data_point.hh"
#include "../../types/interval.hh"
#include "../interpolator.hh"

#include <array>
#include <map>

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
