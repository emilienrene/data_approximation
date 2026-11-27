#include "binary_parser.hh"
#include "point_parser.hh"

#include <fstream>
#include <istream>
#include <optional>

/* -------------------------------------------------------------------------- */

void BinaryParser::begin(std::istream& input){

}



/* --------------------------------------------------------------------------- */

 BinaryParser::BinaryParser(std::ifstream& input) : PointParser(input){

}



/* --------------------------------------------------------------------------- */

std::optional<Point> BinaryParser::readNext(){

}



/* --------------------------------------------------------------------------- */


