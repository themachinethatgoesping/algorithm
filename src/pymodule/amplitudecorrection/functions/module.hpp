// SPDX-FileCopyrightText: 2022 - 2023 Peter Urban, Ghent University
//
// SPDX-License-Identifier: MPL-2.0

#include <pybind11/iostream.h>
#include <pybind11/pybind11.h>
#include <xtensor-python/pytensor.hpp>

#include <themachinethatgoesping/algorithms/amplitudecorrection/functions.hpp>

namespace themachinethatgoesping {
namespace algorithms {
namespace pymodule {
namespace py_amplitudecorrection {
namespace py_functions {

#define DOC_functions(ARG)                                                                         \
    DOC(themachinethatgoesping, algorithms, amplitudecorrection, functions, ARG)

void init_m_functions(pybind11::module& m)
{
    namespace py = pybind11;

    pybind11::module submodule = m.def_submodule("functions");

    submodule.doc() = "Submodule that holds functions used for amplitude corrections";

    using namespace amplitudecorrection::functions;

    // sound velocity
    submodule.def("calc_sound_velocity",
                  &calc_sound_velocity,
                  DOC_functions(calc_sound_velocity),
                  py::arg("depth_m"),
                  py::arg("temperature_c"),
                  py::arg("salinity_psu"),
                  py::arg("latitude")  = 0.0,
                  py::arg("longitude") = 0.0);

    // absorption
    submodule.def("calc_absorption_coefficient_db_m",
                  &calc_absorption_coefficient_db_m,
                  DOC_functions(calc_absorption_coefficient_db_m),
                  py::arg("frequency_hz"),
                  py::arg("depth_m"),
                  py::arg("sound_velocity_m_s"),
                  py::arg("temperature_c"),
                  py::arg("salinity_psu"),
                  py::arg("pH") = 8);

    // range correction
    submodule.def("get_sample_numbers_plus_half",
                  &get_sample_numbers_plus_half<xt::pytensor, float, int64_t>,
                  DOC_functions(get_sample_numbers_plus_half),
                  py::arg("first_sample_nr"),
                  py::arg("last_sample_nr"),
                  py::arg("step") = 1);

    submodule.def("approximate_range_factor",
                  &approximate_range_factor<float>,
                  DOC_functions(approximate_range_factor),
                  py::arg("sample_interval_s"),
                  py::arg("sound_velocity_m_s"));

    submodule.def("approximate_ranges",
                  &approximate_ranges<xt::pytensor, float, int64_t>,
                  DOC_functions(approximate_ranges),
                  py::arg("sample_interval_s"),
                  py::arg("sound_velocity_m_s"),
                  py::arg("first_sample_nr"),
                  py::arg("last_sample_nr"),
                  py::arg("step") = 1);

    submodule.def("compute_cw_range_correction",
                  &compute_cw_range_correction<xt::pytensor, float>,
                  DOC_functions(compute_cw_range_correction),
                  py::arg("ranges_m"),
                  py::arg("absorption_db_m"),
                  py::arg("tvg_factor"));

    submodule.def("apply_wci_correction",
                  &apply_wci_correction<xt::pytensor, float>,
                  DOC_functions(apply_wci_correction),
                  py::arg("wci"),
                  py::arg("per_beam_offset"),
                  py::arg("per_sample_offset"),
                  py::arg("mp_cores") = 1);
}

} // namespace py_functions
} // namespace py_amplitudecorrection
} // namespace pymodule
} // namespace algorithms
} // namespace themachinethatgoesping