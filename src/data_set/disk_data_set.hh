#ifndef __DISK_DATA_SET__HH__
#define __DISK_DATA_SET__HH__

/* -------------------------------------------------------------------------- */
#include "../streamable/streamable.hh"
#include "../types/data_point.hh"
#include "../types/interval.hh"
#include "data_set.hh"

#include <cstddef>
#include <string>
#include <vector>

/**
  * Documentation TODO
  */

class DiskDataSet: public DataSet, public Streamable{

  /* ------------------------------------------------------------------------ */
  /* Constructors/Destructors                                                 */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  DiskDataSet(std::string filePath, Interval bounds);
  //! Documentation TODO
  ~DiskDataSet();

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

private:

  //! Documentation TODO
  std::vector<DataPoint> chunk_streamer();


  /* ------------------------------------------------------------------------ */
  /* Members                                                                  */
  /* ------------------------------------------------------------------------ */

private:

  //!Documentation TODO
  Interval bounds;
  //!Documentation TODO
  std::string dataFilePath;

};

/* -------------------------------------------------------------------------- */
#endif //__DISK_DATA_SET__HH__
