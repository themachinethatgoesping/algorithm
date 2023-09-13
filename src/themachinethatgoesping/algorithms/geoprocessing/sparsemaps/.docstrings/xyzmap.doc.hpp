//sourcehash: 63d857ba136a34c102869f2311854e91249a15560bdd3298490a4d3e082c0f91

/*
  This file contains docstrings for use in the Python bindings.
  Do not edit! They were automatically extracted by pybind11_mkdoc.

  This is a modified version which allows for more than 8 arguments and includes def-guard
 */

#pragma once

#ifndef __DOCSTRINGS_HPP__

#define __EXPAND(x)                                                  x
#define __COUNT(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, COUNT, ...) COUNT
#define __VA_SIZE(...)                                               __EXPAND(__COUNT(__VA_ARGS__, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1))
#define __CAT1(a, b)                                                 a##b
#define __CAT2(a, b)                                                 __CAT1(a, b)
#define __DOC1(n1)                                                   __doc_##n1
#define __DOC2(n1, n2)                                               __doc_##n1##_##n2
#define __DOC3(n1, n2, n3)                                           __doc_##n1##_##n2##_##n3
#define __DOC4(n1, n2, n3, n4)                                       __doc_##n1##_##n2##_##n3##_##n4
#define __DOC5(n1, n2, n3, n4, n5)                                   __doc_##n1##_##n2##_##n3##_##n4##_##n5
#define __DOC6(n1, n2, n3, n4, n5, n6)                               __doc_##n1##_##n2##_##n3##_##n4##_##n5##_##n6
#define __DOC7(n1, n2, n3, n4, n5, n6, n7)                           __doc_##n1##_##n2##_##n3##_##n4##_##n5##_##n6##_##n7
#define __DOC8(n1, n2, n3, n4, n5, n6, n7, n8)                                                     \
    __doc_##n1##_##n2##_##n3##_##n4##_##n5##_##n6##_##n7##_##n8
#define __DOC9(n1, n2, n3, n4, n5, n6, n7, n8, n9)                                                 \
    __doc_##n1##_##n2##_##n3##_##n4##_##n5##_##n6##_##n7##_##n8##_##n9
#define __DOC10(n1, n2, n3, n4, n5, n6, n7, n8, n9, n10)                                           \
    __doc_##n1##_##n2##_##n3##_##n4##_##n5##_##n6##_##n7##_##n8##_##n9##_##n10
#define DOC(...) __EXPAND(__EXPAND(__CAT2(__DOC, __VA_SIZE(__VA_ARGS__)))(__VA_ARGS__))

#endif // NEW_DOC_HEADER_HPP
#if defined(__GNUG__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#endif


static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_Pair3DEqual = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_Pair3DEqual_operator_call = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_Pair3DHash = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_Pair3DHash_operator_call = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_at_gridPos = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_at_gridPos_2 = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_at_gridPos_3 = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_at_gridPos_4 = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_at_xyz = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_at_xyz_2 = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_at_gridPos = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_at_gridPos_2 = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_at_xyz = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_at_xyz_2 = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_gridFraction_x = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_gridFraction_y = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_gridFraction_z = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_gridPos_x = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_gridPos_xyz = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_gridPos_y = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_gridPos_z = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_indexWeights = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_initValue = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_x = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_xbase = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_xres = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_xyz = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_xyz_2 = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_y = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_ybase = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_yres = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_z = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_zbase = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_get_zres = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_initValue = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_print_grid = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_print_setup = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_reset = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_reset_2 = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_reset_3 = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_reset_4 = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_xbase = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_xres = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_xyzMap = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_xyzMap_2 = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_ybase = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_yres = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_zbase = R"doc()doc";

static const char *__doc_themachinethatgoesping_algorithms_geoprocessing_sparsemaps_xyzMap_zres = R"doc()doc";

#if defined(__GNUG__)
#pragma GCC diagnostic pop
#endif

