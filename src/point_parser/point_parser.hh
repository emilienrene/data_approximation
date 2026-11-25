#ifndef __POINT_PARSER__HH__
#define __POINT_PARSER__HH__

/* -------------------------------------------------------------------------- */
#include <fstream>
#include <optional>

/**
  * Documentation TODO
  */

class PointParser{

  /* ------------------------------------------------------------------------ */
  /* Constructors/Destructors                                                 */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  PointParser(std::ifstream& input);

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  virtual void begin(std::ifstream& input);
  //! Documentation TODO
  virtual std::optional<Point> readNext();


  /* ------------------------------------------------------------------------ */
  /* Members                                                                  */
  /* ------------------------------------------------------------------------ */

protected:

  //!Documentation TODO
  std::ifstream input;

};

/* -------------------------------------------------------------------------- */
#endif //__POINT_PARSER__HH__
