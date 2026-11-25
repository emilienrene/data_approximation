cmake_minimum_required(VERSION 3.10)
project(GeneratedFromCodeGenerator LANGUAGES CXX)

add_executable(main
    app/main.cc
    src/types/data_point.cc
    src/types/interval.cc
    src/streamable/streamable.cc
    src/streamable/spline_coefficients.cc
    src/data_set/data_set.cc
    src/data_set/disk_data_set.cc
    src/data_set/r_a_m_data_set.cc
    src/point_parser/point_parser.cc
    src/point_parser/c_s_v_parser.cc
    src/point_parser/white_space_parser.cc
    src/point_parser/binairy_parser.cc
    src/data_loader.cc
    src/interpolator/interpolator.cc
    src/interpolator/lagrange.cc
    src/interpolator/barycentric.cc
    src/interpolator/cubic_splines/cubic_splines.cc
    src/interpolator/cubic_splines/second_order_derivative_ends.cc
    src/basis/basis.cc
    src/basis/lagrange_basis.cc
    src/basis/barycentric_basis.cc
    src/basis/cubic_splines_basis.cc
    src/pipeline.cc
    src/export/export.cc
    src/export/visualizer/visualizer.cc
    src/export/dump.cc
    src/export/visualizer/g_n_u_plot.cc
)

target_compile_features(main PRIVATE cxx_std_17)
set_target_properties(main PROPERTIES CXX_EXTENSIONS OFF)