// *** THIS FILE IS GENERATED - DO NOT EDIT ***
// See extension_helper_generator.py for modifications

/***************************************************************************
 *
 * Copyright (c) 2015-2024 The Khronos Group Inc.
 * Copyright (c) 2015-2024 Valve Corporation
 * Copyright (c) 2015-2024 LunarG, Inc.
 * Copyright (c) 2015-2024 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ****************************************************************************/

// NOLINTBEGIN

#include "vk_extension_helper.h"

static const vvl::unordered_set<std::string> kInstanceExtensionNames = {
    VK_KHR_SURFACE_EXTENSION_NAME,
    VK_KHR_DISPLAY_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_XLIB_KHR
    VK_KHR_XLIB_SURFACE_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    VK_KHR_XCB_SURFACE_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    VK_KHR_WAYLAND_SURFACE_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    VK_KHR_ANDROID_SURFACE_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VK_KHR_WIN32_SURFACE_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME,
    VK_KHR_DEVICE_GROUP_CREATION_EXTENSION_NAME,
    VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME,
    VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_EXTENSION_NAME,
    VK_KHR_EXTERNAL_FENCE_CAPABILITIES_EXTENSION_NAME,
    VK_KHR_GET_SURFACE_CAPABILITIES_2_EXTENSION_NAME,
    VK_KHR_GET_DISPLAY_PROPERTIES_2_EXTENSION_NAME,
    VK_KHR_SURFACE_PROTECTED_CAPABILITIES_EXTENSION_NAME,
    VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME,
    VK_EXT_DEBUG_REPORT_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_GGP
    VK_GGP_STREAM_DESCRIPTOR_SURFACE_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_GGP
    VK_NV_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME,
    VK_EXT_VALIDATION_FLAGS_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_VI_NN
    VK_NN_VI_SURFACE_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_VI_NN
    VK_EXT_DIRECT_MODE_DISPLAY_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    VK_EXT_ACQUIRE_XLIB_DISPLAY_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_XLIB_XRANDR_EXT
    VK_EXT_DISPLAY_SURFACE_COUNTER_EXTENSION_NAME,
    VK_EXT_SWAPCHAIN_COLOR_SPACE_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_IOS_MVK
    VK_MVK_IOS_SURFACE_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
    VK_MVK_MACOS_SURFACE_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_MACOS_MVK
    VK_EXT_DEBUG_UTILS_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_FUCHSIA
    VK_FUCHSIA_IMAGEPIPE_SURFACE_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_METAL_EXT
    VK_EXT_METAL_SURFACE_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_METAL_EXT
    VK_EXT_VALIDATION_FEATURES_EXTENSION_NAME,
    VK_EXT_HEADLESS_SURFACE_EXTENSION_NAME,
    VK_EXT_SURFACE_MAINTENANCE_1_EXTENSION_NAME,
    VK_EXT_ACQUIRE_DRM_DISPLAY_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    VK_EXT_DIRECTFB_SURFACE_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    VK_QNX_SCREEN_SURFACE_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    VK_GOOGLE_SURFACELESS_QUERY_EXTENSION_NAME,
    VK_LUNARG_DIRECT_DRIVER_LOADING_EXTENSION_NAME,
    VK_EXT_LAYER_SETTINGS_EXTENSION_NAME,
};
static const vvl::unordered_set<std::string> kDeviceExtensionNames = {
    VK_KHR_SWAPCHAIN_EXTENSION_NAME,
    VK_KHR_DISPLAY_SWAPCHAIN_EXTENSION_NAME,
    VK_KHR_SAMPLER_MIRROR_CLAMP_TO_EDGE_EXTENSION_NAME,
    VK_KHR_VIDEO_QUEUE_EXTENSION_NAME,
    VK_KHR_VIDEO_DECODE_QUEUE_EXTENSION_NAME,
    VK_KHR_VIDEO_ENCODE_H264_EXTENSION_NAME,
    VK_KHR_VIDEO_ENCODE_H265_EXTENSION_NAME,
    VK_KHR_VIDEO_DECODE_H264_EXTENSION_NAME,
    VK_KHR_DYNAMIC_RENDERING_EXTENSION_NAME,
    VK_KHR_MULTIVIEW_EXTENSION_NAME,
    VK_KHR_DEVICE_GROUP_EXTENSION_NAME,
    VK_KHR_SHADER_DRAW_PARAMETERS_EXTENSION_NAME,
    VK_KHR_MAINTENANCE_1_EXTENSION_NAME,
    VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VK_KHR_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VK_KHR_WIN32_KEYED_MUTEX_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VK_KHR_EXTERNAL_SEMAPHORE_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VK_KHR_EXTERNAL_SEMAPHORE_WIN32_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME,
    VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME,
    VK_KHR_SHADER_FLOAT16_INT8_EXTENSION_NAME,
    VK_KHR_16BIT_STORAGE_EXTENSION_NAME,
    VK_KHR_INCREMENTAL_PRESENT_EXTENSION_NAME,
    VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME,
    VK_KHR_IMAGELESS_FRAMEBUFFER_EXTENSION_NAME,
    VK_KHR_CREATE_RENDERPASS_2_EXTENSION_NAME,
    VK_KHR_SHARED_PRESENTABLE_IMAGE_EXTENSION_NAME,
    VK_KHR_EXTERNAL_FENCE_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VK_KHR_EXTERNAL_FENCE_WIN32_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VK_KHR_EXTERNAL_FENCE_FD_EXTENSION_NAME,
    VK_KHR_PERFORMANCE_QUERY_EXTENSION_NAME,
    VK_KHR_MAINTENANCE_2_EXTENSION_NAME,
    VK_KHR_VARIABLE_POINTERS_EXTENSION_NAME,
    VK_KHR_DEDICATED_ALLOCATION_EXTENSION_NAME,
    VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_EXTENSION_NAME,
    VK_KHR_RELAXED_BLOCK_LAYOUT_EXTENSION_NAME,
    VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME,
    VK_KHR_IMAGE_FORMAT_LIST_EXTENSION_NAME,
    VK_KHR_SAMPLER_YCBCR_CONVERSION_EXTENSION_NAME,
    VK_KHR_BIND_MEMORY_2_EXTENSION_NAME,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_KHR_PORTABILITY_SUBSET_EXTENSION_NAME,
#endif  // VK_ENABLE_BETA_EXTENSIONS
    VK_KHR_MAINTENANCE_3_EXTENSION_NAME,
    VK_KHR_DRAW_INDIRECT_COUNT_EXTENSION_NAME,
    VK_KHR_SHADER_SUBGROUP_EXTENDED_TYPES_EXTENSION_NAME,
    VK_KHR_8BIT_STORAGE_EXTENSION_NAME,
    VK_KHR_SHADER_ATOMIC_INT64_EXTENSION_NAME,
    VK_KHR_SHADER_CLOCK_EXTENSION_NAME,
    VK_KHR_VIDEO_DECODE_H265_EXTENSION_NAME,
    VK_KHR_GLOBAL_PRIORITY_EXTENSION_NAME,
    VK_KHR_DRIVER_PROPERTIES_EXTENSION_NAME,
    VK_KHR_SHADER_FLOAT_CONTROLS_EXTENSION_NAME,
    VK_KHR_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME,
    VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_EXTENSION_NAME,
    VK_KHR_TIMELINE_SEMAPHORE_EXTENSION_NAME,
    VK_KHR_VULKAN_MEMORY_MODEL_EXTENSION_NAME,
    VK_KHR_SHADER_TERMINATE_INVOCATION_EXTENSION_NAME,
    VK_KHR_FRAGMENT_SHADING_RATE_EXTENSION_NAME,
    VK_KHR_SPIRV_1_4_EXTENSION_NAME,
    VK_KHR_SEPARATE_DEPTH_STENCIL_LAYOUTS_EXTENSION_NAME,
    VK_KHR_PRESENT_WAIT_EXTENSION_NAME,
    VK_KHR_UNIFORM_BUFFER_STANDARD_LAYOUT_EXTENSION_NAME,
    VK_KHR_BUFFER_DEVICE_ADDRESS_EXTENSION_NAME,
    VK_KHR_DEFERRED_HOST_OPERATIONS_EXTENSION_NAME,
    VK_KHR_PIPELINE_EXECUTABLE_PROPERTIES_EXTENSION_NAME,
    VK_KHR_MAP_MEMORY_2_EXTENSION_NAME,
    VK_KHR_SHADER_INTEGER_DOT_PRODUCT_EXTENSION_NAME,
    VK_KHR_PIPELINE_LIBRARY_EXTENSION_NAME,
    VK_KHR_SHADER_NON_SEMANTIC_INFO_EXTENSION_NAME,
    VK_KHR_PRESENT_ID_EXTENSION_NAME,
    VK_KHR_VIDEO_ENCODE_QUEUE_EXTENSION_NAME,
    VK_KHR_SYNCHRONIZATION_2_EXTENSION_NAME,
    VK_KHR_FRAGMENT_SHADER_BARYCENTRIC_EXTENSION_NAME,
    VK_KHR_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_EXTENSION_NAME,
    VK_KHR_ZERO_INITIALIZE_WORKGROUP_MEMORY_EXTENSION_NAME,
    VK_KHR_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_EXTENSION_NAME,
    VK_KHR_COPY_COMMANDS_2_EXTENSION_NAME,
    VK_KHR_FORMAT_FEATURE_FLAGS_2_EXTENSION_NAME,
    VK_KHR_RAY_TRACING_MAINTENANCE_1_EXTENSION_NAME,
    VK_KHR_MAINTENANCE_4_EXTENSION_NAME,
    VK_KHR_MAINTENANCE_5_EXTENSION_NAME,
    VK_KHR_RAY_TRACING_POSITION_FETCH_EXTENSION_NAME,
    VK_KHR_COOPERATIVE_MATRIX_EXTENSION_NAME,
    VK_KHR_VIDEO_MAINTENANCE_1_EXTENSION_NAME,
    VK_KHR_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME,
    VK_KHR_CALIBRATED_TIMESTAMPS_EXTENSION_NAME,
    VK_KHR_MAINTENANCE_6_EXTENSION_NAME,
    VK_NV_GLSL_SHADER_EXTENSION_NAME,
    VK_EXT_DEPTH_RANGE_UNRESTRICTED_EXTENSION_NAME,
    VK_IMG_FILTER_CUBIC_EXTENSION_NAME,
    VK_AMD_RASTERIZATION_ORDER_EXTENSION_NAME,
    VK_AMD_SHADER_TRINARY_MINMAX_EXTENSION_NAME,
    VK_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER_EXTENSION_NAME,
    VK_EXT_DEBUG_MARKER_EXTENSION_NAME,
    VK_AMD_GCN_SHADER_EXTENSION_NAME,
    VK_NV_DEDICATED_ALLOCATION_EXTENSION_NAME,
    VK_EXT_TRANSFORM_FEEDBACK_EXTENSION_NAME,
    VK_NVX_BINARY_IMPORT_EXTENSION_NAME,
    VK_NVX_IMAGE_VIEW_HANDLE_EXTENSION_NAME,
    VK_AMD_DRAW_INDIRECT_COUNT_EXTENSION_NAME,
    VK_AMD_NEGATIVE_VIEWPORT_HEIGHT_EXTENSION_NAME,
    VK_AMD_GPU_SHADER_HALF_FLOAT_EXTENSION_NAME,
    VK_AMD_SHADER_BALLOT_EXTENSION_NAME,
    VK_AMD_TEXTURE_GATHER_BIAS_LOD_EXTENSION_NAME,
    VK_AMD_SHADER_INFO_EXTENSION_NAME,
    VK_AMD_SHADER_IMAGE_LOAD_STORE_LOD_EXTENSION_NAME,
    VK_NV_CORNER_SAMPLED_IMAGE_EXTENSION_NAME,
    VK_IMG_FORMAT_PVRTC_EXTENSION_NAME,
    VK_NV_EXTERNAL_MEMORY_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VK_NV_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME,
    VK_NV_WIN32_KEYED_MUTEX_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VK_EXT_SHADER_SUBGROUP_BALLOT_EXTENSION_NAME,
    VK_EXT_SHADER_SUBGROUP_VOTE_EXTENSION_NAME,
    VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_EXTENSION_NAME,
    VK_EXT_ASTC_DECODE_MODE_EXTENSION_NAME,
    VK_EXT_PIPELINE_ROBUSTNESS_EXTENSION_NAME,
    VK_EXT_CONDITIONAL_RENDERING_EXTENSION_NAME,
    VK_NV_CLIP_SPACE_W_SCALING_EXTENSION_NAME,
    VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME,
    VK_GOOGLE_DISPLAY_TIMING_EXTENSION_NAME,
    VK_NV_SAMPLE_MASK_OVERRIDE_COVERAGE_EXTENSION_NAME,
    VK_NV_GEOMETRY_SHADER_PASSTHROUGH_EXTENSION_NAME,
    VK_NV_VIEWPORT_ARRAY_2_EXTENSION_NAME,
    VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_EXTENSION_NAME,
    VK_NV_VIEWPORT_SWIZZLE_EXTENSION_NAME,
    VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME,
    VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME,
    VK_EXT_DEPTH_CLIP_ENABLE_EXTENSION_NAME,
    VK_EXT_HDR_METADATA_EXTENSION_NAME,
    VK_IMG_RELAXED_LINE_RASTERIZATION_EXTENSION_NAME,
    VK_EXT_EXTERNAL_MEMORY_DMA_BUF_EXTENSION_NAME,
    VK_EXT_QUEUE_FAMILY_FOREIGN_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    VK_ANDROID_EXTERNAL_MEMORY_ANDROID_HARDWARE_BUFFER_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_ANDROID_KHR
    VK_EXT_SAMPLER_FILTER_MINMAX_EXTENSION_NAME,
    VK_AMD_GPU_SHADER_INT16_EXTENSION_NAME,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_AMDX_SHADER_ENQUEUE_EXTENSION_NAME,
#endif  // VK_ENABLE_BETA_EXTENSIONS
    VK_AMD_MIXED_ATTACHMENT_SAMPLES_EXTENSION_NAME,
    VK_AMD_SHADER_FRAGMENT_MASK_EXTENSION_NAME,
    VK_EXT_INLINE_UNIFORM_BLOCK_EXTENSION_NAME,
    VK_EXT_SHADER_STENCIL_EXPORT_EXTENSION_NAME,
    VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME,
    VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME,
    VK_NV_FRAGMENT_COVERAGE_TO_COLOR_EXTENSION_NAME,
    VK_NV_FRAMEBUFFER_MIXED_SAMPLES_EXTENSION_NAME,
    VK_NV_FILL_RECTANGLE_EXTENSION_NAME,
    VK_NV_SHADER_SM_BUILTINS_EXTENSION_NAME,
    VK_EXT_POST_DEPTH_COVERAGE_EXTENSION_NAME,
    VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_EXTENSION_NAME,
    VK_EXT_VALIDATION_CACHE_EXTENSION_NAME,
    VK_EXT_DESCRIPTOR_INDEXING_EXTENSION_NAME,
    VK_EXT_SHADER_VIEWPORT_INDEX_LAYER_EXTENSION_NAME,
    VK_NV_SHADING_RATE_IMAGE_EXTENSION_NAME,
    VK_NV_RAY_TRACING_EXTENSION_NAME,
    VK_NV_REPRESENTATIVE_FRAGMENT_TEST_EXTENSION_NAME,
    VK_EXT_FILTER_CUBIC_EXTENSION_NAME,
    VK_QCOM_RENDER_PASS_SHADER_RESOLVE_EXTENSION_NAME,
    VK_EXT_GLOBAL_PRIORITY_EXTENSION_NAME,
    VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME,
    VK_AMD_BUFFER_MARKER_EXTENSION_NAME,
    VK_AMD_PIPELINE_COMPILER_CONTROL_EXTENSION_NAME,
    VK_EXT_CALIBRATED_TIMESTAMPS_EXTENSION_NAME,
    VK_AMD_SHADER_CORE_PROPERTIES_EXTENSION_NAME,
    VK_AMD_MEMORY_OVERALLOCATION_BEHAVIOR_EXTENSION_NAME,
    VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_GGP
    VK_GGP_FRAME_TOKEN_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_GGP
    VK_EXT_PIPELINE_CREATION_FEEDBACK_EXTENSION_NAME,
    VK_NV_SHADER_SUBGROUP_PARTITIONED_EXTENSION_NAME,
    VK_NV_COMPUTE_SHADER_DERIVATIVES_EXTENSION_NAME,
    VK_NV_MESH_SHADER_EXTENSION_NAME,
    VK_NV_FRAGMENT_SHADER_BARYCENTRIC_EXTENSION_NAME,
    VK_NV_SHADER_IMAGE_FOOTPRINT_EXTENSION_NAME,
    VK_NV_SCISSOR_EXCLUSIVE_EXTENSION_NAME,
    VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_EXTENSION_NAME,
    VK_INTEL_SHADER_INTEGER_FUNCTIONS_2_EXTENSION_NAME,
    VK_INTEL_PERFORMANCE_QUERY_EXTENSION_NAME,
    VK_EXT_PCI_BUS_INFO_EXTENSION_NAME,
    VK_AMD_DISPLAY_NATIVE_HDR_EXTENSION_NAME,
    VK_EXT_FRAGMENT_DENSITY_MAP_EXTENSION_NAME,
    VK_EXT_SCALAR_BLOCK_LAYOUT_EXTENSION_NAME,
    VK_GOOGLE_HLSL_FUNCTIONALITY_1_EXTENSION_NAME,
    VK_GOOGLE_DECORATE_STRING_EXTENSION_NAME,
    VK_EXT_SUBGROUP_SIZE_CONTROL_EXTENSION_NAME,
    VK_AMD_SHADER_CORE_PROPERTIES_2_EXTENSION_NAME,
    VK_AMD_DEVICE_COHERENT_MEMORY_EXTENSION_NAME,
    VK_EXT_SHADER_IMAGE_ATOMIC_INT64_EXTENSION_NAME,
    VK_EXT_MEMORY_BUDGET_EXTENSION_NAME,
    VK_EXT_MEMORY_PRIORITY_EXTENSION_NAME,
    VK_NV_DEDICATED_ALLOCATION_IMAGE_ALIASING_EXTENSION_NAME,
    VK_EXT_BUFFER_DEVICE_ADDRESS_EXTENSION_NAME,
    VK_EXT_TOOLING_INFO_EXTENSION_NAME,
    VK_EXT_SEPARATE_STENCIL_USAGE_EXTENSION_NAME,
    VK_NV_COOPERATIVE_MATRIX_EXTENSION_NAME,
    VK_NV_COVERAGE_REDUCTION_MODE_EXTENSION_NAME,
    VK_EXT_FRAGMENT_SHADER_INTERLOCK_EXTENSION_NAME,
    VK_EXT_YCBCR_IMAGE_ARRAYS_EXTENSION_NAME,
    VK_EXT_PROVOKING_VERTEX_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VK_EXT_FULL_SCREEN_EXCLUSIVE_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME,
    VK_EXT_SHADER_ATOMIC_FLOAT_EXTENSION_NAME,
    VK_EXT_HOST_QUERY_RESET_EXTENSION_NAME,
    VK_EXT_INDEX_TYPE_UINT8_EXTENSION_NAME,
    VK_EXT_EXTENDED_DYNAMIC_STATE_EXTENSION_NAME,
    VK_EXT_HOST_IMAGE_COPY_EXTENSION_NAME,
    VK_EXT_SHADER_ATOMIC_FLOAT_2_EXTENSION_NAME,
    VK_EXT_SWAPCHAIN_MAINTENANCE_1_EXTENSION_NAME,
    VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_EXTENSION_NAME,
    VK_NV_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME,
    VK_NV_INHERITED_VIEWPORT_SCISSOR_EXTENSION_NAME,
    VK_EXT_TEXEL_BUFFER_ALIGNMENT_EXTENSION_NAME,
    VK_QCOM_RENDER_PASS_TRANSFORM_EXTENSION_NAME,
    VK_EXT_DEPTH_BIAS_CONTROL_EXTENSION_NAME,
    VK_EXT_DEVICE_MEMORY_REPORT_EXTENSION_NAME,
    VK_EXT_ROBUSTNESS_2_EXTENSION_NAME,
    VK_EXT_CUSTOM_BORDER_COLOR_EXTENSION_NAME,
    VK_GOOGLE_USER_TYPE_EXTENSION_NAME,
    VK_NV_PRESENT_BARRIER_EXTENSION_NAME,
    VK_EXT_PRIVATE_DATA_EXTENSION_NAME,
    VK_EXT_PIPELINE_CREATION_CACHE_CONTROL_EXTENSION_NAME,
    VK_NV_DEVICE_DIAGNOSTICS_CONFIG_EXTENSION_NAME,
    VK_QCOM_RENDER_PASS_STORE_OPS_EXTENSION_NAME,
    VK_NV_CUDA_KERNEL_LAUNCH_EXTENSION_NAME,
    VK_NV_LOW_LATENCY_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_METAL_EXT
    VK_EXT_METAL_OBJECTS_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_METAL_EXT
    VK_EXT_DESCRIPTOR_BUFFER_EXTENSION_NAME,
    VK_EXT_GRAPHICS_PIPELINE_LIBRARY_EXTENSION_NAME,
    VK_AMD_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_EXTENSION_NAME,
    VK_NV_FRAGMENT_SHADING_RATE_ENUMS_EXTENSION_NAME,
    VK_NV_RAY_TRACING_MOTION_BLUR_EXTENSION_NAME,
    VK_EXT_YCBCR_2PLANE_444_FORMATS_EXTENSION_NAME,
    VK_EXT_FRAGMENT_DENSITY_MAP_2_EXTENSION_NAME,
    VK_QCOM_ROTATED_COPY_COMMANDS_EXTENSION_NAME,
    VK_EXT_IMAGE_ROBUSTNESS_EXTENSION_NAME,
    VK_EXT_IMAGE_COMPRESSION_CONTROL_EXTENSION_NAME,
    VK_EXT_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_EXTENSION_NAME,
    VK_EXT_4444_FORMATS_EXTENSION_NAME,
    VK_EXT_DEVICE_FAULT_EXTENSION_NAME,
    VK_ARM_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_EXTENSION_NAME,
    VK_EXT_RGBA10X6_FORMATS_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    VK_NV_ACQUIRE_WINRT_DISPLAY_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_WIN32_KHR
    VK_VALVE_MUTABLE_DESCRIPTOR_TYPE_EXTENSION_NAME,
    VK_EXT_VERTEX_INPUT_DYNAMIC_STATE_EXTENSION_NAME,
    VK_EXT_PHYSICAL_DEVICE_DRM_EXTENSION_NAME,
    VK_EXT_DEVICE_ADDRESS_BINDING_REPORT_EXTENSION_NAME,
    VK_EXT_DEPTH_CLIP_CONTROL_EXTENSION_NAME,
    VK_EXT_PRIMITIVE_TOPOLOGY_LIST_RESTART_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_FUCHSIA
    VK_FUCHSIA_EXTERNAL_MEMORY_EXTENSION_NAME,
    VK_FUCHSIA_EXTERNAL_SEMAPHORE_EXTENSION_NAME,
    VK_FUCHSIA_BUFFER_COLLECTION_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_FUCHSIA
    VK_HUAWEI_SUBPASS_SHADING_EXTENSION_NAME,
    VK_HUAWEI_INVOCATION_MASK_EXTENSION_NAME,
    VK_NV_EXTERNAL_MEMORY_RDMA_EXTENSION_NAME,
    VK_EXT_PIPELINE_PROPERTIES_EXTENSION_NAME,
    VK_EXT_FRAME_BOUNDARY_EXTENSION_NAME,
    VK_EXT_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_EXTENSION_NAME,
    VK_EXT_EXTENDED_DYNAMIC_STATE_2_EXTENSION_NAME,
    VK_EXT_COLOR_WRITE_ENABLE_EXTENSION_NAME,
    VK_EXT_PRIMITIVES_GENERATED_QUERY_EXTENSION_NAME,
    VK_EXT_GLOBAL_PRIORITY_QUERY_EXTENSION_NAME,
    VK_EXT_IMAGE_VIEW_MIN_LOD_EXTENSION_NAME,
    VK_EXT_MULTI_DRAW_EXTENSION_NAME,
    VK_EXT_IMAGE_2D_VIEW_OF_3D_EXTENSION_NAME,
    VK_EXT_SHADER_TILE_IMAGE_EXTENSION_NAME,
    VK_EXT_OPACITY_MICROMAP_EXTENSION_NAME,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    VK_NV_DISPLACEMENT_MICROMAP_EXTENSION_NAME,
#endif  // VK_ENABLE_BETA_EXTENSIONS
    VK_EXT_LOAD_STORE_OP_NONE_EXTENSION_NAME,
    VK_HUAWEI_CLUSTER_CULLING_SHADER_EXTENSION_NAME,
    VK_EXT_BORDER_COLOR_SWIZZLE_EXTENSION_NAME,
    VK_EXT_PAGEABLE_DEVICE_LOCAL_MEMORY_EXTENSION_NAME,
    VK_ARM_SHADER_CORE_PROPERTIES_EXTENSION_NAME,
    VK_ARM_SCHEDULING_CONTROLS_EXTENSION_NAME,
    VK_EXT_IMAGE_SLICED_VIEW_OF_3D_EXTENSION_NAME,
    VK_VALVE_DESCRIPTOR_SET_HOST_MAPPING_EXTENSION_NAME,
    VK_EXT_DEPTH_CLAMP_ZERO_ONE_EXTENSION_NAME,
    VK_EXT_NON_SEAMLESS_CUBE_MAP_EXTENSION_NAME,
    VK_ARM_RENDER_PASS_STRIPED_EXTENSION_NAME,
    VK_QCOM_FRAGMENT_DENSITY_MAP_OFFSET_EXTENSION_NAME,
    VK_NV_COPY_MEMORY_INDIRECT_EXTENSION_NAME,
    VK_NV_MEMORY_DECOMPRESSION_EXTENSION_NAME,
    VK_NV_DEVICE_GENERATED_COMMANDS_COMPUTE_EXTENSION_NAME,
    VK_NV_LINEAR_COLOR_ATTACHMENT_EXTENSION_NAME,
    VK_EXT_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_EXTENSION_NAME,
    VK_QCOM_IMAGE_PROCESSING_EXTENSION_NAME,
    VK_EXT_NESTED_COMMAND_BUFFER_EXTENSION_NAME,
    VK_EXT_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXTENSION_NAME,
    VK_EXT_EXTENDED_DYNAMIC_STATE_3_EXTENSION_NAME,
    VK_EXT_SUBPASS_MERGE_FEEDBACK_EXTENSION_NAME,
    VK_EXT_SHADER_MODULE_IDENTIFIER_EXTENSION_NAME,
    VK_EXT_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_EXTENSION_NAME,
    VK_NV_OPTICAL_FLOW_EXTENSION_NAME,
    VK_EXT_LEGACY_DITHERING_EXTENSION_NAME,
    VK_EXT_PIPELINE_PROTECTED_ACCESS_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    VK_ANDROID_EXTERNAL_FORMAT_RESOLVE_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_ANDROID_KHR
    VK_EXT_SHADER_OBJECT_EXTENSION_NAME,
    VK_QCOM_TILE_PROPERTIES_EXTENSION_NAME,
    VK_SEC_AMIGO_PROFILING_EXTENSION_NAME,
    VK_QCOM_MULTIVIEW_PER_VIEW_VIEWPORTS_EXTENSION_NAME,
    VK_NV_RAY_TRACING_INVOCATION_REORDER_EXTENSION_NAME,
    VK_NV_EXTENDED_SPARSE_ADDRESS_SPACE_EXTENSION_NAME,
    VK_EXT_MUTABLE_DESCRIPTOR_TYPE_EXTENSION_NAME,
    VK_ARM_SHADER_CORE_BUILTINS_EXTENSION_NAME,
    VK_EXT_PIPELINE_LIBRARY_GROUP_HANDLES_EXTENSION_NAME,
    VK_EXT_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_EXTENSION_NAME,
    VK_NV_LOW_LATENCY_2_EXTENSION_NAME,
    VK_QCOM_MULTIVIEW_PER_VIEW_RENDER_AREAS_EXTENSION_NAME,
    VK_NV_PER_STAGE_DESCRIPTOR_SET_EXTENSION_NAME,
    VK_QCOM_IMAGE_PROCESSING_2_EXTENSION_NAME,
    VK_QCOM_FILTER_CUBIC_WEIGHTS_EXTENSION_NAME,
    VK_QCOM_YCBCR_DEGAMMA_EXTENSION_NAME,
    VK_QCOM_FILTER_CUBIC_CLAMP_EXTENSION_NAME,
    VK_EXT_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_EXTENSION_NAME,
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    VK_QNX_EXTERNAL_MEMORY_SCREEN_BUFFER_EXTENSION_NAME,
#endif  // VK_USE_PLATFORM_SCREEN_QNX
    VK_MSFT_LAYERED_DRIVER_EXTENSION_NAME,
    VK_NV_DESCRIPTOR_POOL_OVERALLOCATION_EXTENSION_NAME,
    VK_KHR_ACCELERATION_STRUCTURE_EXTENSION_NAME,
    VK_KHR_RAY_TRACING_PIPELINE_EXTENSION_NAME,
    VK_KHR_RAY_QUERY_EXTENSION_NAME,
    VK_EXT_MESH_SHADER_EXTENSION_NAME,
};

bool IsInstanceExtension(const char *item) { return (kInstanceExtensionNames.find(item) != kInstanceExtensionNames.end()); }

bool IsDeviceExtension(const char *item) { return (kDeviceExtensionNames.find(item) != kDeviceExtensionNames.end()); }

// NOLINTEND