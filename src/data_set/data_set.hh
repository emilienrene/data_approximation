#ifndef __DATA_SET__HH__
#define __DATA_SET__HH__

/* -------------------------------------------------------------------------- */
#include "../types/data_point.hh"
#include "../types/interval.hh"

#include <cstddef>

/**
  * Documentation TODO
  */

class DataSet{

  /* ------------------------------------------------------------------------ */
  /* Constructors/Destructors                                                 */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  virtual ~DataSet();

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  virtual Interval get_sample_interval(double x);
  //! Documentation TODO
  virtual std::size_t size();
  //! Documentation TODO
  virtual DataPoint get_point(std::size_t index);
  //! Documentation TODO
  virtual Interval get_bounds();

};

/* -------------------------------------------------------------------------- */
#endif //__DATA_SET__HH__
