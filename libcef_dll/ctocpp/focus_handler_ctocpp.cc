// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
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
// $hash=0fa4cd5767bcd31e0629bd625fb7e97811265fba$
//

#include "libcef_dll/ctocpp/focus_handler_ctocpp.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefFocusHandlerCToCpp::OnTakeFocus(CefRefPtr<CefBrowser> browser,
                                        bool next) {
  shutdown_checker::AssertNotShutdown();

  cef_focus_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_take_focus)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }

  // Execute
  _struct->on_take_focus(_struct, CefBrowserCppToC::Wrap(browser), next);
}

NO_SANITIZE("cfi-icall")
bool CefFocusHandlerCToCpp::OnSetFocus(CefRefPtr<CefBrowser> browser,
                                       FocusSource source) {
  shutdown_checker::AssertNotShutdown();

  cef_focus_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_set_focus)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return false;
  }

  // Execute
  int _retval =
      _struct->on_set_focus(_struct, CefBrowserCppToC::Wrap(browser), source);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefFocusHandlerCToCpp::OnGotFocus(CefRefPtr<CefBrowser> browser) {
  shutdown_checker::AssertNotShutdown();

  cef_focus_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_got_focus)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }

  // Execute
  _struct->on_got_focus(_struct, CefBrowserCppToC::Wrap(browser));
}

// CONSTRUCTOR - Do not edit by hand.

CefFocusHandlerCToCpp::CefFocusHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefFocusHandlerCToCpp::~CefFocusHandlerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_focus_handler_t*
CefCToCppRefCounted<CefFocusHandlerCToCpp,
                    CefFocusHandler,
                    cef_focus_handler_t>::UnwrapDerived(CefWrapperType type,
                                                        CefFocusHandler* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefFocusHandlerCToCpp,
                                   CefFocusHandler,
                                   cef_focus_handler_t>::kWrapperType =
    WT_FOCUS_HANDLER;
