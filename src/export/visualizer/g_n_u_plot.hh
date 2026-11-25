#ifndef __G_N_U_PLOT__HH__
#define __G_N_U_PLOT__HH__

/* -------------------------------------------------------------------------- */
#include "visualizer.hh"

/**
  * Documentation TODO
  */

class GNUPlot: public Visualizer{

  /* ------------------------------------------------------------------------ */
  /* Methods                                                                  */
  /* ------------------------------------------------------------------------ */

public:

  //! Documentation TODO
  void plot();
  //! Documentation TODO
  virtual InterpolatedData generate_dataset();

};

/* -------------------------------------------------------------------------- */
#endif //__G_N_U_PLOT__HH__
