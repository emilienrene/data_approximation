#ifndef __SPLINE_COEFFICIENTS__HH__
#define __SPLINE_COEFFICIENTS__HH__

/* -------------------------------------------------------------------------- */
#include "streamable.hh"

#include <string>

/**
  * Documentation TODO
  */

class SplineCoefficients: public Streamable{

  /* ------------------------------------------------------------------------ */
  /* Constructors/Destructors                                                 */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  SplineCoefficients(std::string filePath);

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  typename chunk_streamer();


  /* ------------------------------------------------------------------------ */
  /* Members                                                                  */
  /* ------------------------------------------------------------------------ */

private:

  //!Documentation TODO
  std::string filePath;

};

/* -------------------------------------------------------------------------- */
#endif //__SPLINE_COEFFICIENTS__HH__
