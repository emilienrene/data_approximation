#ifndef __DATA_LOADER__HH__
#define __DATA_LOADER__HH__

/* -------------------------------------------------------------------------- */
#include "data_set/data_set.hh"
#include "point_parser/point_parser.hh"
#include "types/interval.hh"

#include <string>

/**
  * Documentation TODO
  */

class DataLoader{

  /* ------------------------------------------------------------------------ */
  /* Constructors/Destructors                                                 */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  DataLoader(std::string filePath);

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  DataSet get_data(Interval range);

private:

  //! Documentation TODO
  void external_merge_sort();
  //! Documentation TODO
  void preprocess();


  /* ------------------------------------------------------------------------ */
  /* Members                                                                  */
  /* ------------------------------------------------------------------------ */

private:

  //!Documentation TODO
  PointParser dataParser;
  //!Documentation TODO
  std::string filePath;

};

/* -------------------------------------------------------------------------- */
#endif //__DATA_LOADER__HH__
