#ifndef __R_A_M_DATA_SET__HH__
#define __R_A_M_DATA_SET__HH__

/* -------------------------------------------------------------------------- */
#include "../types/data_point.hh"
#include "../types/interval.hh"
#include "data_set.hh"

#include <cstddef>
#include <vector>

/**
  * Documentation TODO
  */

class RAMDataSet: public DataSet{

  /* ------------------------------------------------------------------------ */
  /* Constructors/Destructors                                                 */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  RAMDataSet(std::vector<DataPoint> data, Interval bounds);
  //! Documentation TODO
  ~RAMDataSet();

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  Interval get_sample_interval(double x);
  //! Documentation TODO
  std::size_t size();
  //! Documentation TODO
  DataPoint get_point(std::size_t index);
  //! Documentation TODO
  Interval get_bounds();


  /* ------------------------------------------------------------------------ */
  /* Members                                                                  */
  /* ------------------------------------------------------------------------ */

private:

  //!Documentation TODO
  Interval bounds;
  //!Documentation TODO
  std::vector<DataPoint> data;

};

/* -------------------------------------------------------------------------- */
#endif //__R_A_M_DATA_SET__HH__
