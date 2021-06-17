// Copyright (c) 2021 The Chromium Embedded Framework Authors. All rights
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
// $hash=2b3f4fa67ceac32d479043f0b8012c36a4c4ee1f$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_VIEWS_BROWSER_VIEW_DELEGATE_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_VIEWS_BROWSER_VIEW_DELEGATE_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_browser_capi.h"
#include "include/capi/views/cef_browser_view_capi.h"
#include "include/capi/views/cef_browser_view_delegate_capi.h"
#include "include/cef_browser.h"
#include "include/views/cef_browser_view.h"
#include "include/views/cef_browser_view_delegate.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefBrowserViewDelegateCppToC
    : public CefCppToCRefCounted<CefBrowserViewDelegateCppToC,
                                 CefBrowserViewDelegate,
                                 cef_browser_view_delegate_t> {
 public:
  CefBrowserViewDelegateCppToC();
  virtual ~CefBrowserViewDelegateCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_VIEWS_BROWSER_VIEW_DELEGATE_CPPTOC_H_
