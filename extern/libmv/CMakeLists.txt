# ***** BEGIN GPL LICENSE BLOCK *****
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software Foundation,
# Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
#
# The Original Code is Copyright (C) 2011, Blender Foundation
# All rights reserved.
#
# Contributor(s): Blender Foundation,
#                 Sergey Sharybin
#
# ***** END GPL LICENSE BLOCK *****

# NOTE: This file is automatically generated by bundle.sh script
#       If you're doing changes in this file, please update template
#       in that script too

set(INC
	.
	../colamd/Include
	third_party/ceres/include
)

set(INC_SYS
	../Eigen3
	third_party/ssba
	third_party/ldl/Include
	${PNG_INCLUDE_DIR}
	${ZLIB_INCLUDE_DIRS}
)

set(SRC
	libmv-capi.cpp
	libmv/image/array_nd.cc
	libmv/image/convolve.cc
	libmv/multiview/conditioning.cc
	libmv/multiview/euclidean_resection.cc
	libmv/multiview/fundamental.cc
	libmv/multiview/projection.cc
	libmv/multiview/triangulation.cc
	libmv/multiview/homography.cc
	libmv/numeric/numeric.cc
	libmv/numeric/poly.cc
	libmv/simple_pipeline/bundle.cc
	libmv/simple_pipeline/callbacks.cc
	libmv/simple_pipeline/camera_intrinsics.cc
	libmv/simple_pipeline/detect.cc
	libmv/simple_pipeline/initialize_reconstruction.cc
	libmv/simple_pipeline/intersect.cc
	libmv/simple_pipeline/modal_solver.cc
	libmv/simple_pipeline/pipeline.cc
	libmv/simple_pipeline/reconstruction.cc
	libmv/simple_pipeline/resect.cc
	libmv/simple_pipeline/rigid_registration.cc
	libmv/simple_pipeline/tracks.cc
	libmv/tracking/brute_region_tracker.cc
	libmv/tracking/esm_region_tracker.cc
	libmv/tracking/hybrid_region_tracker.cc
	libmv/tracking/klt_region_tracker.cc
	libmv/tracking/lmicklt_region_tracker.cc
	libmv/tracking/pyramid_region_tracker.cc
	libmv/tracking/retrack_region_tracker.cc
	libmv/tracking/trklt_region_tracker.cc
	libmv/tracking/track_region.cc

	third_party/fast/fast_10.c
	third_party/fast/fast_11.c
	third_party/fast/fast_12.c
	third_party/fast/fast_9.c
	third_party/fast/fast.c
	third_party/fast/nonmax.c
	third_party/gflags/gflags.cc
	third_party/gflags/gflags_completions.cc
	third_party/gflags/gflags_reporting.cc
	third_party/ldl/Source/ldl.c
	third_party/ssba/Geometry/v3d_metricbundle.cpp
	third_party/ssba/Math/v3d_optimization.cpp

	libmv-capi.h
	libmv/base/id_generator.h
	libmv/base/scoped_ptr.h
	libmv/base/vector.h
	libmv/base/vector_utils.h
	libmv/image/array_nd.h
	libmv/image/convolve.h
	libmv/image/correlation.h
	libmv/image/image.h
	libmv/image/sample.h
	libmv/image/tuple.h
	libmv/logging/logging.h
	libmv/multiview/conditioning.h
	libmv/multiview/euclidean_resection.h
	libmv/multiview/fundamental.h
	libmv/multiview/homography.h
	libmv/multiview/homography_parameterization.h
	libmv/multiview/nviewtriangulation.h
	libmv/multiview/projection.h
	libmv/multiview/resection.h
	libmv/multiview/triangulation.h
	libmv/numeric/dogleg.h
	libmv/numeric/function_derivative.h
	libmv/numeric/levenberg_marquardt.h
	libmv/numeric/numeric.h
	libmv/numeric/poly.h
	libmv/simple_pipeline/bundle.h
	libmv/simple_pipeline/callbacks.h
	libmv/simple_pipeline/camera_intrinsics.h
	libmv/simple_pipeline/detect.h
	libmv/simple_pipeline/initialize_reconstruction.h
	libmv/simple_pipeline/intersect.h
	libmv/simple_pipeline/modal_solver.h
	libmv/simple_pipeline/pipeline.h
	libmv/simple_pipeline/reconstruction.h
	libmv/simple_pipeline/resect.h
	libmv/simple_pipeline/rigid_registration.h
	libmv/simple_pipeline/tracks.h
	libmv/tracking/brute_region_tracker.h
	libmv/tracking/esm_region_tracker.h
	libmv/tracking/hybrid_region_tracker.h
	libmv/tracking/klt_region_tracker.h
	libmv/tracking/lmicklt_region_tracker.h
	libmv/tracking/pyramid_region_tracker.h
	libmv/tracking/region_tracker.h
	libmv/tracking/retrack_region_tracker.h
	libmv/tracking/track_region.h
	libmv/tracking/trklt_region_tracker.h

	third_party/fast/fast.h
	third_party/gflags/config.h
	third_party/gflags/gflags/gflags_completions.h
	third_party/gflags/gflags/gflags_declare.h
	third_party/gflags/gflags/gflags.h
	third_party/gflags/mutex.h
	third_party/gflags/util.h
	third_party/ldl/Include/ldl.h
	third_party/msinttypes/inttypes.h
	third_party/msinttypes/stdint.h
	third_party/ssba/Geometry/v3d_cameramatrix.h
	third_party/ssba/Geometry/v3d_distortion.h
	third_party/ssba/Geometry/v3d_metricbundle.h
	third_party/ssba/Math/v3d_linear.h
	third_party/ssba/Math/v3d_linear_utils.h
	third_party/ssba/Math/v3d_mathutilities.h
	third_party/ssba/Math/v3d_optimization.h
)

if(WIN32)
	list(APPEND SRC
		third_party/glog/src/logging.cc
		third_party/glog/src/raw_logging.cc
		third_party/glog/src/utilities.cc
		third_party/glog/src/vlog_is_on.cc
		third_party/glog/src/windows/port.cc

		third_party/glog/src/utilities.h
		third_party/glog/src/stacktrace_generic-inl.h
		third_party/glog/src/stacktrace.h
		third_party/glog/src/stacktrace_x86_64-inl.h
		third_party/glog/src/base/googleinit.h
		third_party/glog/src/base/mutex.h
		third_party/glog/src/base/commandlineflags.h
		third_party/glog/src/stacktrace_powerpc-inl.h
		third_party/glog/src/stacktrace_x86-inl.h
		third_party/glog/src/config.h
		third_party/glog/src/stacktrace_libunwind-inl.h
		third_party/glog/src/windows/glog/raw_logging.h
		third_party/glog/src/windows/glog/vlog_is_on.h
		third_party/glog/src/windows/glog/logging.h
		third_party/glog/src/windows/glog/log_severity.h
		third_party/glog/src/windows/port.h
		third_party/glog/src/windows/config.h
	)

	list(APPEND INC
		third_party/glog/src/windows
	)

	if(NOT MINGW)
		list(APPEND INC
			third_party/msinttypes
		)
	endif()

	if(MSVC)
		set(MSVC_OFLAGS O1 O2 Ox)
		foreach(FLAG ${MSVC_OFLAGS})
			string(REPLACE "${FLAG}" "Od" CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE}")
			string(REPLACE "${FLAG}" "Od" CMAKE_C_FLAGS_RELWITHDEBINFO "${CMAKE_C_FLAGS_RELWITHDEBINFO}")
		endforeach()
	endif()
else()
	list(APPEND SRC
		third_party/glog/src/demangle.cc
		third_party/glog/src/logging.cc
		third_party/glog/src/raw_logging.cc
		third_party/glog/src/signalhandler.cc
		third_party/glog/src/symbolize.cc
		third_party/glog/src/utilities.cc
		third_party/glog/src/vlog_is_on.cc

		third_party/glog/src/base/commandlineflags.h
		third_party/glog/src/base/googleinit.h
		third_party/glog/src/base/mutex.h
		third_party/glog/src/config_freebsd.h
		third_party/glog/src/config.h
		third_party/glog/src/config_hurd.h
		third_party/glog/src/config_linux.h
		third_party/glog/src/config_mac.h
		third_party/glog/src/demangle.h
		third_party/glog/src/glog/logging.h
		third_party/glog/src/glog/log_severity.h
		third_party/glog/src/glog/raw_logging.h
		third_party/glog/src/glog/vlog_is_on.h
		third_party/glog/src/stacktrace_generic-inl.h
		third_party/glog/src/stacktrace.h
		third_party/glog/src/stacktrace_libunwind-inl.h
		third_party/glog/src/stacktrace_powerpc-inl.h
		third_party/glog/src/stacktrace_x86_64-inl.h
		third_party/glog/src/stacktrace_x86-inl.h
		third_party/glog/src/symbolize.h
		third_party/glog/src/utilities.h
	)

	list(APPEND INC
		third_party/glog/src
	)
endif()

add_definitions(
	-DV3DLIB_ENABLE_SUITESPARSE
	-DGOOGLE_GLOG_DLL_DECL=
)

blender_add_lib(extern_libmv "${SRC}" "${INC}" "${INC_SYS}")

add_subdirectory(third_party)
