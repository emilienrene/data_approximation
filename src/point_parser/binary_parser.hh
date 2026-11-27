#ifndef __BINARY_PARSER__HH__
#define __BINARY_PARSER__HH__

/* -------------------------------------------------------------------------- */
#include "point_parser.hh"

#include <fstream>
#include <istream>
#include <optional>

/**
  * Documentation TODO
  */

class BinaryParser: public PointParser{

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  void begin(std::istream& input);
  //! Documentation TODO
  BinaryParser(std::ifstream& input) : PointParser(input);
  //! Documentation TODO
  std::optional<Point> readNext();

};

/* -------------------------------------------------------------------------- */
#endif //__BINARY_PARSER__HH__
