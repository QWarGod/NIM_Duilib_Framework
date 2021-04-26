// Copyright (c) 2020 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=1651e2c4c6f69e8617844128e3c13a33698e5994$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_END_TRACING_CALLBACK_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_END_TRACING_CALLBACK_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_trace_capi.h"
#include "include/cef_trace.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefEndTracingCallbackCppToC
    : public CefCppToCRefCounted<CefEndTracingCallbackCppToC,
                                 CefEndTracingCallback,
                                 cef_end_tracing_callback_t> {
 public:
  CefEndTracingCallbackCppToC();
  virtual ~CefEndTracingCallbackCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_END_TRACING_CALLBACK_CPPTOC_H_
