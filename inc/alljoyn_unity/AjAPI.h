#ifndef _ALLJOYN_UNITY_AJAPI_H
#define _ALLJOYN_UNITY_AJAPI_H

/******************************************************************************
 * Copyright 2009-2011, Qualcomm Innovation Center, Inc.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 ******************************************************************************/

/** This #define allows for redefinition to __dllexport or __dllimport on relevant platforms */
#ifndef AJ_API
#   define AJ_API
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Unity-specific function to process alternate-thread callbacks on the main thread.
 */
extern AJ_API int alljoyn_unity_deferred_callbacks_process();

/**
 * Enable/disable main thread callback behavior.
 */
extern AJ_API void alljoin_unity_set_deferred_callback_mainthread_only(int mainthread_only);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif