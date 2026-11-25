#ifndef __C_S_V_PARSER__HH__
#define __C_S_V_PARSER__HH__

/* -------------------------------------------------------------------------- */
#include "point_parser.hh"

/**
  * Documentation TODO
  */

class CSVParser: public PointParser{

  /* ------------------------------------------------------------------------ */
  /* Constructors/Destructors                                                 */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  CSVParser(std::ifstream& input) : PointParser(input);

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
#endif //__C_S_V_PARSER__HH__
