#ifndef __BARYCENTRIC__HH__
#define __BARYCENTRIC__HH__

/* -------------------------------------------------------------------------- */
#include "interpolator.hh"

/**
  * Documentation TODO
  */

class Barycentric: public Interpolator{

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
#endif //__BARYCENTRIC__HH__
