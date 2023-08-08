// SPDX-FileCopyrightText: 2019-2022 Connor McLaughlin <stenzek@gmail.com>
// SPDX-License-Identifier: (GPL-3.0 OR CC-BY-NC-ND-4.0)

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// We abuse the preprocessor here to only need to specify function names once.
// Function names are prefixed so to not conflict with system symbols at runtime.
#define VULKAN_MODULE_ENTRY_POINT(name, required) extern PFN_##name ds_##name;
#define VULKAN_INSTANCE_ENTRY_POINT(name, required) extern PFN_##name ds_##name;
#define VULKAN_DEVICE_ENTRY_POINT(name, required) extern PFN_##name ds_##name;
#define VULKAN_DEFINE_NAME_PREFIX ds_
#include "entry_points.inl"
#undef VULKAN_DEFINE_NAME_PREFIX
#undef VULKAN_DEVICE_ENTRY_POINT
#undef VULKAN_INSTANCE_ENTRY_POINT
#undef VULKAN_MODULE_ENTRY_POINT

#ifdef __cplusplus
}
#endif

#define vkCreateInstance ds_vkCreateInstance
#define vkGetInstanceProcAddr ds_vkGetInstanceProcAddr
#define vkEnumerateInstanceExtensionProperties ds_vkEnumerateInstanceExtensionProperties
#define vkEnumerateInstanceLayerProperties ds_vkEnumerateInstanceLayerProperties
#define vkEnumerateInstanceVersion ds_vkEnumerateInstanceVersion

#define vkGetDeviceProcAddr ds_vkGetDeviceProcAddr
#define vkDestroyInstance ds_vkDestroyInstance
#define vkEnumeratePhysicalDevices ds_vkEnumeratePhysicalDevices
#define vkGetPhysicalDeviceFeatures ds_vkGetPhysicalDeviceFeatures
#define vkGetPhysicalDeviceFormatProperties ds_vkGetPhysicalDeviceFormatProperties
#define vkGetPhysicalDeviceImageFormatProperties ds_vkGetPhysicalDeviceImageFormatProperties
#define vkGetPhysicalDeviceProperties ds_vkGetPhysicalDeviceProperties
#define vkGetPhysicalDeviceQueueFamilyProperties ds_vkGetPhysicalDeviceQueueFamilyProperties
#define vkGetPhysicalDeviceMemoryProperties ds_vkGetPhysicalDeviceMemoryProperties
#define vkCreateDevice ds_vkCreateDevice
#define vkEnumerateDeviceExtensionProperties ds_vkEnumerateDeviceExtensionProperties
#define vkEnumerateDeviceLayerProperties ds_vkEnumerateDeviceLayerProperties
#define vkGetPhysicalDeviceSparseImageFormatProperties ds_vkGetPhysicalDeviceSparseImageFormatProperties
#define vkDestroySurfaceKHR ds_vkDestroySurfaceKHR
#define vkGetPhysicalDeviceSurfaceSupportKHR ds_vkGetPhysicalDeviceSurfaceSupportKHR
#define vkGetPhysicalDeviceSurfaceCapabilitiesKHR ds_vkGetPhysicalDeviceSurfaceCapabilitiesKHR
#define vkGetPhysicalDeviceSurfaceFormatsKHR ds_vkGetPhysicalDeviceSurfaceFormatsKHR
#define vkGetPhysicalDeviceSurfacePresentModesKHR ds_vkGetPhysicalDeviceSurfacePresentModesKHR
#define vkCreateWin32SurfaceKHR ds_vkCreateWin32SurfaceKHR
#define vkGetPhysicalDeviceWin32PresentationSupportKHR ds_vkGetPhysicalDeviceWin32PresentationSupportKHR
#define vkCreateXlibSurfaceKHR ds_vkCreateXlibSurfaceKHR
#define vkGetPhysicalDeviceXlibPresentationSupportKHR ds_vkGetPhysicalDeviceXlibPresentationSupportKHR
#define vkCreateWaylandSurfaceKHR ds_vkCreateWaylandSurfaceKHR
#define vkCreateAndroidSurfaceKHR ds_vkCreateAndroidSurfaceKHR
#define vkCreateMacOSSurfaceMVK ds_vkCreateMacOSSurfaceMVK
#define vkCreateMetalSurfaceEXT ds_vkCreateMetalSurfaceEXT

// VK_EXT_debug_utils
#define vkCmdBeginDebugUtilsLabelEXT ds_vkCmdBeginDebugUtilsLabelEXT
#define vkCmdEndDebugUtilsLabelEXT ds_vkCmdEndDebugUtilsLabelEXT
#define vkCmdInsertDebugUtilsLabelEXT ds_vkCmdInsertDebugUtilsLabelEXT
#define vkCreateDebugUtilsMessengerEXT ds_vkCreateDebugUtilsMessengerEXT
#define vkDestroyDebugUtilsMessengerEXT ds_vkDestroyDebugUtilsMessengerEXT
#define vkQueueBeginDebugUtilsLabelEXT ds_vkQueueBeginDebugUtilsLabelEXT
#define vkQueueEndDebugUtilsLabelEXT ds_vkQueueEndDebugUtilsLabelEXT
#define vkQueueInsertDebugUtilsLabelEXT ds_vkQueueInsertDebugUtilsLabelEXT
#define vkSetDebugUtilsObjectNameEXT ds_vkSetDebugUtilsObjectNameEXT
#define vkSetDebugUtilsObjectTagEXT ds_vkSetDebugUtilsObjectTagEXT
#define vkSubmitDebugUtilsMessageEXT ds_vkSubmitDebugUtilsMessageEXT

#define vkGetPhysicalDeviceSurfaceCapabilities2KHR ds_vkGetPhysicalDeviceSurfaceCapabilities2KHR
#define vkGetPhysicalDeviceDisplayPropertiesKHR ds_vkGetPhysicalDeviceDisplayPropertiesKHR
#define vkGetPhysicalDeviceDisplayPlanePropertiesKHR ds_vkGetPhysicalDeviceDisplayPlanePropertiesKHR
#define vkGetDisplayPlaneSupportedDisplaysKHR ds_vkGetDisplayPlaneSupportedDisplaysKHR
#define vkGetDisplayModePropertiesKHR ds_vkGetDisplayModePropertiesKHR
#define vkCreateDisplayModeKHR ds_vkCreateDisplayModeKHR
#define vkGetDisplayPlaneCapabilitiesKHR ds_vkGetDisplayPlaneCapabilitiesKHR
#define vkCreateDisplayPlaneSurfaceKHR ds_vkCreateDisplayPlaneSurfaceKHR

// Vulkan 1.1 functions.
#define vkGetPhysicalDeviceFeatures2 ds_vkGetPhysicalDeviceFeatures2
#define vkGetPhysicalDeviceProperties2 ds_vkGetPhysicalDeviceProperties2
#define vkGetPhysicalDeviceMemoryProperties2 ds_vkGetPhysicalDeviceMemoryProperties2

#define vkDestroyDevice ds_vkDestroyDevice
#define vkGetDeviceQueue ds_vkGetDeviceQueue
#define vkQueueSubmit ds_vkQueueSubmit
#define vkQueueWaitIdle ds_vkQueueWaitIdle
#define vkDeviceWaitIdle ds_vkDeviceWaitIdle
#define vkAllocateMemory ds_vkAllocateMemory
#define vkFreeMemory ds_vkFreeMemory
#define vkMapMemory ds_vkMapMemory
#define vkUnmapMemory ds_vkUnmapMemory
#define vkFlushMappedMemoryRanges ds_vkFlushMappedMemoryRanges
#define vkInvalidateMappedMemoryRanges ds_vkInvalidateMappedMemoryRanges
#define vkGetDeviceMemoryCommitment ds_vkGetDeviceMemoryCommitment
#define vkBindBufferMemory ds_vkBindBufferMemory
#define vkBindImageMemory ds_vkBindImageMemory
#define vkGetBufferMemoryRequirements ds_vkGetBufferMemoryRequirements
#define vkGetImageMemoryRequirements ds_vkGetImageMemoryRequirements
#define vkGetImageSparseMemoryRequirements ds_vkGetImageSparseMemoryRequirements
#define vkQueueBindSparse ds_vkQueueBindSparse
#define vkCreateFence ds_vkCreateFence
#define vkDestroyFence ds_vkDestroyFence
#define vkResetFences ds_vkResetFences
#define vkGetFenceStatus ds_vkGetFenceStatus
#define vkWaitForFences ds_vkWaitForFences
#define vkCreateSemaphore ds_vkCreateSemaphore
#define vkDestroySemaphore ds_vkDestroySemaphore
#define vkCreateEvent ds_vkCreateEvent
#define vkDestroyEvent ds_vkDestroyEvent
#define vkGetEventStatus ds_vkGetEventStatus
#define vkSetEvent ds_vkSetEvent
#define vkResetEvent ds_vkResetEvent
#define vkCreateQueryPool ds_vkCreateQueryPool
#define vkDestroyQueryPool ds_vkDestroyQueryPool
#define vkGetQueryPoolResults ds_vkGetQueryPoolResults
#define vkCreateBuffer ds_vkCreateBuffer
#define vkDestroyBuffer ds_vkDestroyBuffer
#define vkCreateBufferView ds_vkCreateBufferView
#define vkDestroyBufferView ds_vkDestroyBufferView
#define vkCreateImage ds_vkCreateImage
#define vkDestroyImage ds_vkDestroyImage
#define vkGetImageSubresourceLayout ds_vkGetImageSubresourceLayout
#define vkCreateImageView ds_vkCreateImageView
#define vkDestroyImageView ds_vkDestroyImageView
#define vkCreateShaderModule ds_vkCreateShaderModule
#define vkDestroyShaderModule ds_vkDestroyShaderModule
#define vkCreatePipelineCache ds_vkCreatePipelineCache
#define vkDestroyPipelineCache ds_vkDestroyPipelineCache
#define vkGetPipelineCacheData ds_vkGetPipelineCacheData
#define vkMergePipelineCaches ds_vkMergePipelineCaches
#define vkCreateGraphicsPipelines ds_vkCreateGraphicsPipelines
#define vkCreateComputePipelines ds_vkCreateComputePipelines
#define vkDestroyPipeline ds_vkDestroyPipeline
#define vkCreatePipelineLayout ds_vkCreatePipelineLayout
#define vkDestroyPipelineLayout ds_vkDestroyPipelineLayout
#define vkCreateSampler ds_vkCreateSampler
#define vkDestroySampler ds_vkDestroySampler
#define vkCreateDescriptorSetLayout ds_vkCreateDescriptorSetLayout
#define vkDestroyDescriptorSetLayout ds_vkDestroyDescriptorSetLayout
#define vkCreateDescriptorPool ds_vkCreateDescriptorPool
#define vkDestroyDescriptorPool ds_vkDestroyDescriptorPool
#define vkResetDescriptorPool ds_vkResetDescriptorPool
#define vkAllocateDescriptorSets ds_vkAllocateDescriptorSets
#define vkFreeDescriptorSets ds_vkFreeDescriptorSets
#define vkUpdateDescriptorSets ds_vkUpdateDescriptorSets
#define vkCreateFramebuffer ds_vkCreateFramebuffer
#define vkDestroyFramebuffer ds_vkDestroyFramebuffer
#define vkCreateRenderPass ds_vkCreateRenderPass
#define vkDestroyRenderPass ds_vkDestroyRenderPass
#define vkGetRenderAreaGranularity ds_vkGetRenderAreaGranularity
#define vkCreateCommandPool ds_vkCreateCommandPool
#define vkDestroyCommandPool ds_vkDestroyCommandPool
#define vkResetCommandPool ds_vkResetCommandPool
#define vkAllocateCommandBuffers ds_vkAllocateCommandBuffers
#define vkFreeCommandBuffers ds_vkFreeCommandBuffers
#define vkBeginCommandBuffer ds_vkBeginCommandBuffer
#define vkEndCommandBuffer ds_vkEndCommandBuffer
#define vkResetCommandBuffer ds_vkResetCommandBuffer
#define vkCmdBindPipeline ds_vkCmdBindPipeline
#define vkCmdSetViewport ds_vkCmdSetViewport
#define vkCmdSetScissor ds_vkCmdSetScissor
#define vkCmdSetLineWidth ds_vkCmdSetLineWidth
#define vkCmdSetDepthBias ds_vkCmdSetDepthBias
#define vkCmdSetBlendConstants ds_vkCmdSetBlendConstants
#define vkCmdSetDepthBounds ds_vkCmdSetDepthBounds
#define vkCmdSetStencilCompareMask ds_vkCmdSetStencilCompareMask
#define vkCmdSetStencilWriteMask ds_vkCmdSetStencilWriteMask
#define vkCmdSetStencilReference ds_vkCmdSetStencilReference
#define vkCmdBindDescriptorSets ds_vkCmdBindDescriptorSets
#define vkCmdBindIndexBuffer ds_vkCmdBindIndexBuffer
#define vkCmdBindVertexBuffers ds_vkCmdBindVertexBuffers
#define vkCmdDraw ds_vkCmdDraw
#define vkCmdDrawIndexed ds_vkCmdDrawIndexed
#define vkCmdDrawIndirect ds_vkCmdDrawIndirect
#define vkCmdDrawIndexedIndirect ds_vkCmdDrawIndexedIndirect
#define vkCmdDispatch ds_vkCmdDispatch
#define vkCmdDispatchIndirect ds_vkCmdDispatchIndirect
#define vkCmdCopyBuffer ds_vkCmdCopyBuffer
#define vkCmdCopyImage ds_vkCmdCopyImage
#define vkCmdBlitImage ds_vkCmdBlitImage
#define vkCmdCopyBufferToImage ds_vkCmdCopyBufferToImage
#define vkCmdCopyImageToBuffer ds_vkCmdCopyImageToBuffer
#define vkCmdUpdateBuffer ds_vkCmdUpdateBuffer
#define vkCmdFillBuffer ds_vkCmdFillBuffer
#define vkCmdClearColorImage ds_vkCmdClearColorImage
#define vkCmdClearDepthStencilImage ds_vkCmdClearDepthStencilImage
#define vkCmdClearAttachments ds_vkCmdClearAttachments
#define vkCmdResolveImage ds_vkCmdResolveImage
#define vkCmdSetEvent ds_vkCmdSetEvent
#define vkCmdResetEvent ds_vkCmdResetEvent
#define vkCmdWaitEvents ds_vkCmdWaitEvents
#define vkCmdPipelineBarrier ds_vkCmdPipelineBarrier
#define vkCmdBeginQuery ds_vkCmdBeginQuery
#define vkCmdEndQuery ds_vkCmdEndQuery
#define vkCmdResetQueryPool ds_vkCmdResetQueryPool
#define vkCmdWriteTimestamp ds_vkCmdWriteTimestamp
#define vkCmdCopyQueryPoolResults ds_vkCmdCopyQueryPoolResults
#define vkCmdPushConstants ds_vkCmdPushConstants
#define vkCmdBeginRenderPass ds_vkCmdBeginRenderPass
#define vkCmdNextSubpass ds_vkCmdNextSubpass
#define vkCmdEndRenderPass ds_vkCmdEndRenderPass
#define vkCmdExecuteCommands ds_vkCmdExecuteCommands
#define vkCreateSwapchainKHR ds_vkCreateSwapchainKHR
#define vkDestroySwapchainKHR ds_vkDestroySwapchainKHR
#define vkGetSwapchainImagesKHR ds_vkGetSwapchainImagesKHR
#define vkAcquireNextImageKHR ds_vkAcquireNextImageKHR
#define vkQueuePresentKHR ds_vkQueuePresentKHR

// Vulkan 1.1 functions.
#define vkGetBufferMemoryRequirements2 ds_vkGetBufferMemoryRequirements2
#define vkGetImageMemoryRequirements2 ds_vkGetImageMemoryRequirements2
#define vkBindBufferMemory2 ds_vkBindBufferMemory2
#define vkBindImageMemory2 ds_vkBindImageMemory2

#ifdef SUPPORTS_VULKAN_EXCLUSIVE_FULLSCREEN
#define vkAcquireFullScreenExclusiveModeEXT ds_vkAcquireFullScreenExclusiveModeEXT
#define vkReleaseFullScreenExclusiveModeEXT ds_vkReleaseFullScreenExclusiveModeEXT
#endif

// Vulkan 1.3 functions.
#define vkGetDeviceBufferMemoryRequirements ds_vkGetDeviceBufferMemoryRequirements
#define vkGetDeviceImageMemoryRequirements ds_vkGetDeviceImageMemoryRequirements
