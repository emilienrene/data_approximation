#ifndef __INTERPOLATOR__HH__
#define __INTERPOLATOR__HH__

/* -------------------------------------------------------------------------- */

/**
  * Documentation TODO
  */

class Interpolator{

  /* ------------------------------------------------------------------------ */
  /* Constructors/Destructors                                                 */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  Interpolator(DataSet data) : dataSet(std::move(data));

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  virtual std::optional<double> compute(double x);
  //! Documentation TODO
  const DataSet& get_data_set();


  /* ------------------------------------------------------------------------ */
  /* Members                                                                  */
  /* ------------------------------------------------------------------------ */

protected:

  //!Documentation TODO
  DataSet dataSet;

};

/* -------------------------------------------------------------------------- */
#endif //__INTERPOLATOR__HH__
