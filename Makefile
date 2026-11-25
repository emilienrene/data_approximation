
CXXFLAGS=-g -Wall
CC_FILES     = data_point.cc interval.cc streamable.cc spline_coefficients.cc data_set.cc disk_data_set.cc r_a_m_data_set.cc point_parser.cc c_s_v_parser.cc white_space_parser.cc binairy_parser.cc data_loader.cc interpolator.cc lagrange.cc barycentric.cc cubic_splines.cc second_order_derivative_ends.cc basis.cc lagrange_basis.cc barycentric_basis.cc cubic_splines_basis.cc pipeline.cc export.cc visualizer.cc dump.cc g_n_u_plot.cc
OBJ_FILES    = data_point.o interval.o streamable.o spline_coefficients.o data_set.o disk_data_set.o r_a_m_data_set.o point_parser.o c_s_v_parser.o white_space_parser.o binairy_parser.o data_loader.o interpolator.o lagrange.o barycentric.o cubic_splines.o second_order_derivative_ends.o basis.o lagrange_basis.o barycentric_basis.o cubic_splines_basis.o pipeline.o export.o visualizer.o dump.o g_n_u_plot.o
HEADER_FILES = data_point.hh interval.hh streamable.hh spline_coefficients.hh data_set.hh disk_data_set.hh r_a_m_data_set.hh point_parser.hh c_s_v_parser.hh white_space_parser.hh binairy_parser.hh data_loader.hh interpolator.hh lagrange.hh barycentric.hh cubic_splines.hh second_order_derivative_ends.hh basis.hh lagrange_basis.hh barycentric_basis.hh cubic_splines_basis.hh pipeline.hh export.hh visualizer.hh dump.hh g_n_u_plot.hh

EXEC=main

$(EXEC): $(OBJ_FILES) main.o
	g++ -g $(OBJ_FILES) main.o -o $@

.o: $(HEADER_FILES)
	g++ -c $(CXXFLAGS) $^ -o $@

clean:
	rm -f *.o *~ $(EXEC)

