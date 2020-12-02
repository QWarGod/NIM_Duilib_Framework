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
// $hash=3f18ade9d60d3b383161ac49e65f61eb62887774$
//

#include "libcef_dll/ctocpp/domnode_ctocpp.h"
#include "libcef_dll/ctocpp/domdocument_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/transfer_util.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall") CefDOMNode::Type CefDOMNodeCToCpp::GetType() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_type))
    return DOM_NODE_TYPE_UNSUPPORTED;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_dom_node_type_t _retval = _struct->get_type(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") bool CefDOMNodeCToCpp::IsText() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_text))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_text(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefDOMNodeCToCpp::IsElement() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_element))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_element(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefDOMNodeCToCpp::IsEditable() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_editable))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_editable(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefDOMNodeCToCpp::IsFormControlElement() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_form_control_element))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_form_control_element(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefString CefDOMNodeCToCpp::GetFormControlElementType() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_form_control_element_type))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval =
      _struct->get_form_control_element_type(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
bool CefDOMNodeCToCpp::IsSame(CefRefPtr<CefDOMNode> that) {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_same))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get())
    return false;

  // Execute
  int _retval = _struct->is_same(_struct, CefDOMNodeCToCpp::Unwrap(that));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") CefString CefDOMNodeCToCpp::GetName() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") CefString CefDOMNodeCToCpp::GetValue() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_value))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_value(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
bool CefDOMNodeCToCpp::SetValue(const CefString& value) {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_value))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: value; type: string_byref_const
  DCHECK(!value.empty());
  if (value.empty())
    return false;

  // Execute
  int _retval = _struct->set_value(_struct, value.GetStruct());

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") CefString CefDOMNodeCToCpp::GetAsMarkup() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_as_markup))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_as_markup(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefDOMDocument> CefDOMNodeCToCpp::GetDocument() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_document))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domdocument_t* _retval = _struct->get_document(_struct);

  // Return type: refptr_same
  return CefDOMDocumentCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefDOMNode> CefDOMNodeCToCpp::GetParent() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_parent))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = _struct->get_parent(_struct);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefDOMNode> CefDOMNodeCToCpp::GetPreviousSibling() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_previous_sibling))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = _struct->get_previous_sibling(_struct);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefDOMNode> CefDOMNodeCToCpp::GetNextSibling() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_next_sibling))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = _struct->get_next_sibling(_struct);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") bool CefDOMNodeCToCpp::HasChildren() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_children))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_children(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefDOMNode> CefDOMNodeCToCpp::GetFirstChild() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_first_child))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = _struct->get_first_child(_struct);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefDOMNode> CefDOMNodeCToCpp::GetLastChild() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_last_child))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = _struct->get_last_child(_struct);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefString CefDOMNodeCToCpp::GetElementTagName() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_element_tag_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_element_tag_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") bool CefDOMNodeCToCpp::HasElementAttributes() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_element_attributes))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_element_attributes(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefDOMNodeCToCpp::HasElementAttribute(const CefString& attrName) {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_element_attribute))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: attrName; type: string_byref_const
  DCHECK(!attrName.empty());
  if (attrName.empty())
    return false;

  // Execute
  int _retval = _struct->has_element_attribute(_struct, attrName.GetStruct());

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefString CefDOMNodeCToCpp::GetElementAttribute(const CefString& attrName) {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_element_attribute))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: attrName; type: string_byref_const
  DCHECK(!attrName.empty());
  if (attrName.empty())
    return CefString();

  // Execute
  cef_string_userfree_t _retval =
      _struct->get_element_attribute(_struct, attrName.GetStruct());

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
void CefDOMNodeCToCpp::GetElementAttributes(AttributeMap& attrMap) {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_element_attributes))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: attrMap; type: string_map_single_byref
  cef_string_map_t attrMapMap = cef_string_map_alloc();
  DCHECK(attrMapMap);
  if (attrMapMap)
    transfer_string_map_contents(attrMap, attrMapMap);

  // Execute
  _struct->get_element_attributes(_struct, attrMapMap);

  // Restore param:attrMap; type: string_map_single_byref
  if (attrMapMap) {
    attrMap.clear();
    transfer_string_map_contents(attrMapMap, attrMap);
    cef_string_map_free(attrMapMap);
  }
}

NO_SANITIZE("cfi-icall")
bool CefDOMNodeCToCpp::SetElementAttribute(const CefString& attrName,
                                           const CefString& value) {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_element_attribute))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: attrName; type: string_byref_const
  DCHECK(!attrName.empty());
  if (attrName.empty())
    return false;
  // Verify param: value; type: string_byref_const
  DCHECK(!value.empty());
  if (value.empty())
    return false;

  // Execute
  int _retval = _struct->set_element_attribute(_struct, attrName.GetStruct(),
                                               value.GetStruct());

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") CefString CefDOMNodeCToCpp::GetElementInnerText() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_element_inner_text))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_element_inner_text(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") CefRect CefDOMNodeCToCpp::GetElementBounds() {
  shutdown_checker::AssertNotShutdown();

  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_element_bounds))
    return CefRect();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_element_bounds(_struct);

  // Return type: simple
  return _retval;
}

// CONSTRUCTOR - Do not edit by hand.

CefDOMNodeCToCpp::CefDOMNodeCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefDOMNodeCToCpp::~CefDOMNodeCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_domnode_t*
CefCToCppRefCounted<CefDOMNodeCToCpp, CefDOMNode, cef_domnode_t>::UnwrapDerived(
    CefWrapperType type,
    CefDOMNode* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefDOMNodeCToCpp,
                                   CefDOMNode,
                                   cef_domnode_t>::kWrapperType = WT_DOMNODE;
