#ifndef __PIPELINE__HH__
#define __PIPELINE__HH__

/* -------------------------------------------------------------------------- */
#include "export/export.hh"
#include "interpolator/interpolator.hh"

#include <string>

/**
  * Documentation TODO
  */

class Pipeline{

  /* ------------------------------------------------------------------------ */
  /* Constructors/Destructors                                                 */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  Pipeline(std::string dataFilePath);

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  void execute();


  /* ------------------------------------------------------------------------ */
  /* Members                                                                  */
  /* ------------------------------------------------------------------------ */

private:

  //!Documentation TODO
  Interpolator interpolator;
  //!Documentation TODO
  Export expo;

};

/* -------------------------------------------------------------------------- */
#endif //__PIPELINE__HH__
