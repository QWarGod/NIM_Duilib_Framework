// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
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
// $hash=d3d4fbf680412ca26d5803ffd269dea1e06ed388$
//

#include "libcef_dll/cpptoc/focus_handler_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK focus_handler_on_take_focus(struct _cef_focus_handler_t* self,
                                              cef_browser_t* browser,
                                              int next) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;

  // Execute
  CefFocusHandlerCppToC::Get(self)->OnTakeFocus(CefBrowserCToCpp::Wrap(browser),
                                                next ? true : false);
}

int CEF_CALLBACK focus_handler_on_set_focus(struct _cef_focus_handler_t* self,
                                            cef_browser_t* browser,
                                            cef_focus_source_t source) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;

  // Execute
  bool _retval = CefFocusHandlerCppToC::Get(self)->OnSetFocus(
      CefBrowserCToCpp::Wrap(browser), source);

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK focus_handler_on_got_focus(struct _cef_focus_handler_t* self,
                                             cef_browser_t* browser) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;

  // Execute
  CefFocusHandlerCppToC::Get(self)->OnGotFocus(CefBrowserCToCpp::Wrap(browser));
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefFocusHandlerCppToC::CefFocusHandlerCppToC() {
  GetStruct()->on_take_focus = focus_handler_on_take_focus;
  GetStruct()->on_set_focus = focus_handler_on_set_focus;
  GetStruct()->on_got_focus = focus_handler_on_got_focus;
}

template <>
CefRefPtr<CefFocusHandler> CefCppToCRefCounted<
    CefFocusHandlerCppToC,
    CefFocusHandler,
    cef_focus_handler_t>::UnwrapDerived(CefWrapperType type,
                                        cef_focus_handler_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCppToCRefCounted<CefFocusHandlerCppToC,
                                         CefFocusHandler,
                                         cef_focus_handler_t>::DebugObjCt = 0;
#endif

template <>
CefWrapperType CefCppToCRefCounted<CefFocusHandlerCppToC,
                                   CefFocusHandler,
                                   cef_focus_handler_t>::kWrapperType =
    WT_FOCUS_HANDLER;
