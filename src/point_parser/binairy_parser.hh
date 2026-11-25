#ifndef __BINAIRY_PARSER__HH__
#define __BINAIRY_PARSER__HH__

/* -------------------------------------------------------------------------- */
#include "point_parser.hh"

#include <fstream>
#include <istream>
#include <optional>

/**
  * Documentation TODO
  */

class BinairyParser: public PointParser{

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  void begin(std::istream& input);
  //! Documentation TODO
  BinairyParserParser(std::ifstream& input) : PointParser(input);
  //! Documentation TODO
  std::optional<Point> readNext();

};

/* -------------------------------------------------------------------------- */
#endif //__BINAIRY_PARSER__HH__
