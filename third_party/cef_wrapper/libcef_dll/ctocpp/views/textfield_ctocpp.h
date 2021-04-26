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
// $hash=8c3c6f34acb740232874335312c7a28699f32806$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_VIEWS_TEXTFIELD_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_VIEWS_TEXTFIELD_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/views/cef_textfield_capi.h"
#include "include/views/cef_textfield.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefTextfieldCToCpp : public CefCToCppRefCounted<CefTextfieldCToCpp,
                                                      CefTextfield,
                                                      cef_textfield_t> {
 public:
  CefTextfieldCToCpp();
  virtual ~CefTextfieldCToCpp();

  // CefTextfield methods.
  void SetPasswordInput(bool password_input) OVERRIDE;
  bool IsPasswordInput() OVERRIDE;
  void SetReadOnly(bool read_only) OVERRIDE;
  bool IsReadOnly() OVERRIDE;
  CefString GetText() OVERRIDE;
  void SetText(const CefString& text) OVERRIDE;
  void AppendText(const CefString& text) OVERRIDE;
  void InsertOrReplaceText(const CefString& text) OVERRIDE;
  bool HasSelection() OVERRIDE;
  CefString GetSelectedText() OVERRIDE;
  void SelectAll(bool reversed) OVERRIDE;
  void ClearSelection() OVERRIDE;
  CefRange GetSelectedRange() OVERRIDE;
  void SelectRange(const CefRange& range) OVERRIDE;
  size_t GetCursorPosition() OVERRIDE;
  void SetTextColor(cef_color_t color) OVERRIDE;
  cef_color_t GetTextColor() OVERRIDE;
  void SetSelectionTextColor(cef_color_t color) OVERRIDE;
  cef_color_t GetSelectionTextColor() OVERRIDE;
  void SetSelectionBackgroundColor(cef_color_t color) OVERRIDE;
  cef_color_t GetSelectionBackgroundColor() OVERRIDE;
  void SetFontList(const CefString& font_list) OVERRIDE;
  void ApplyTextColor(cef_color_t color, const CefRange& range) OVERRIDE;
  void ApplyTextStyle(cef_text_style_t style,
                      bool add,
                      const CefRange& range) OVERRIDE;
  bool IsCommandEnabled(int command_id) OVERRIDE;
  void ExecuteCommand(int command_id) OVERRIDE;
  void ClearEditHistory() OVERRIDE;
  void SetPlaceholderText(const CefString& text) OVERRIDE;
  CefString GetPlaceholderText() OVERRIDE;
  void SetPlaceholderTextColor(cef_color_t color) OVERRIDE;
  void SetAccessibleName(const CefString& name) OVERRIDE;

  // CefView methods.
  CefRefPtr<CefBrowserView> AsBrowserView() OVERRIDE;
  CefRefPtr<CefButton> AsButton() OVERRIDE;
  CefRefPtr<CefPanel> AsPanel() OVERRIDE;
  CefRefPtr<CefScrollView> AsScrollView() OVERRIDE;
  CefRefPtr<CefTextfield> AsTextfield() OVERRIDE;
  CefString GetTypeString() OVERRIDE;
  CefString ToString(bool include_children) OVERRIDE;
  bool IsValid() OVERRIDE;
  bool IsAttached() OVERRIDE;
  bool IsSame(CefRefPtr<CefView> that) OVERRIDE;
  CefRefPtr<CefViewDelegate> GetDelegate() OVERRIDE;
  CefRefPtr<CefWindow> GetWindow() OVERRIDE;
  int GetID() OVERRIDE;
  void SetID(int id) OVERRIDE;
  int GetGroupID() OVERRIDE;
  void SetGroupID(int group_id) OVERRIDE;
  CefRefPtr<CefView> GetParentView() OVERRIDE;
  CefRefPtr<CefView> GetViewForID(int id) OVERRIDE;
  void SetBounds(const CefRect& bounds) OVERRIDE;
  CefRect GetBounds() OVERRIDE;
  CefRect GetBoundsInScreen() OVERRIDE;
  void SetSize(const CefSize& size) OVERRIDE;
  CefSize GetSize() OVERRIDE;
  void SetPosition(const CefPoint& position) OVERRIDE;
  CefPoint GetPosition() OVERRIDE;
  CefSize GetPreferredSize() OVERRIDE;
  void SizeToPreferredSize() OVERRIDE;
  CefSize GetMinimumSize() OVERRIDE;
  CefSize GetMaximumSize() OVERRIDE;
  int GetHeightForWidth(int width) OVERRIDE;
  void InvalidateLayout() OVERRIDE;
  void SetVisible(bool visible) OVERRIDE;
  bool IsVisible() OVERRIDE;
  bool IsDrawn() OVERRIDE;
  void SetEnabled(bool enabled) OVERRIDE;
  bool IsEnabled() OVERRIDE;
  void SetFocusable(bool focusable) OVERRIDE;
  bool IsFocusable() OVERRIDE;
  bool IsAccessibilityFocusable() OVERRIDE;
  void RequestFocus() OVERRIDE;
  void SetBackgroundColor(cef_color_t color) OVERRIDE;
  cef_color_t GetBackgroundColor() OVERRIDE;
  bool ConvertPointToScreen(CefPoint& point) OVERRIDE;
  bool ConvertPointFromScreen(CefPoint& point) OVERRIDE;
  bool ConvertPointToWindow(CefPoint& point) OVERRIDE;
  bool ConvertPointFromWindow(CefPoint& point) OVERRIDE;
  bool ConvertPointToView(CefRefPtr<CefView> view, CefPoint& point) OVERRIDE;
  bool ConvertPointFromView(CefRefPtr<CefView> view, CefPoint& point) OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_VIEWS_TEXTFIELD_CTOCPP_H_
