
cmake_minimum_required (VERSION 3.10)
project (GeneratedFromCodeGenerator)

add_executable(main
main.cc
data_point.cc
interval.cc
streamable.cc
spline_coefficients.cc
data_set.cc
disk_data_set.cc
r_a_m_data_set.cc
point_parser.cc
c_s_v_parser.cc
white_space_parser.cc
binairy_parser.cc
data_loader.cc
interpolator.cc
lagrange.cc
barycentric.cc
cubic_splines.cc
second_order_derivative_ends.cc
basis.cc
lagrange_basis.cc
barycentric_basis.cc
cubic_splines_basis.cc
pipeline.cc
export.cc
visualizer.cc
dump.cc
g_n_u_plot.cc)
