#include "interpolator.hh"
#include "../data_set/data_set.hh"

#include <optional>
#include <utility>

/* -------------------------------------------------------------------------- */

 Interpolator::Interpolator(DataSet data) : dataSet(std::move(data)){

}



/* --------------------------------------------------------------------------- */

std::optional<double> Interpolator::compute(double x){

}



/* --------------------------------------------------------------------------- */

const DataSet& Interpolator::get_data_set(){

}



/* --------------------------------------------------------------------------- */


