#ifndef __WHITE_SPACE_PARSER__HH__
#define __WHITE_SPACE_PARSER__HH__

/* -------------------------------------------------------------------------- */
#include "point_parser.hh"

#include <fstream>
#include <istream>
#include <optional>

/**
  * Documentation TODO
  */

class WhiteSpaceParser: public PointParser{

  /* ------------------------------------------------------------------------ */
  /* Constructors/Destructors                                                 */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  WhiteSpaceParser(std::ifstream& input) : PointParser(input);

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  void begin(std::istream& input);
  //! Documentation TODO
  std::optional<Point> readNext();

};

/* -------------------------------------------------------------------------- */
#endif //__WHITE_SPACE_PARSER__HH__
