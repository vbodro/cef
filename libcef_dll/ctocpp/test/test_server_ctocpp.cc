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
// $hash=50c7d4b9b04e640de46aa816dc44b8eeb718cc79$
//

#include "libcef_dll/ctocpp/test/test_server_ctocpp.h"
#include "libcef_dll/cpptoc/test/test_server_handler_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// STATIC METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefTestServer> CefTestServer::CreateAndStart(
    uint16 port,
    bool https_server,
    cef_test_cert_type_t https_cert_type,
    CefRefPtr<CefTestServerHandler> handler) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: handler; type: refptr_diff
  DCHECK(handler.get());
  if (!handler.get()) {
    return nullptr;
  }

  // Execute
  cef_test_server_t* _retval = cef_test_server_create_and_start(
      port, https_server, https_cert_type,
      CefTestServerHandlerCppToC::Wrap(handler));

  // Return type: refptr_same
  return CefTestServerCToCpp::Wrap(_retval);
}

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall") void CefTestServerCToCpp::Stop() {
  shutdown_checker::AssertNotShutdown();

  cef_test_server_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, stop)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->stop(_struct);
}

NO_SANITIZE("cfi-icall") CefString CefTestServerCToCpp::GetOrigin() {
  shutdown_checker::AssertNotShutdown();

  cef_test_server_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_origin)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_origin(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

// CONSTRUCTOR - Do not edit by hand.

CefTestServerCToCpp::CefTestServerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefTestServerCToCpp::~CefTestServerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_test_server_t*
CefCToCppRefCounted<CefTestServerCToCpp, CefTestServer, cef_test_server_t>::
    UnwrapDerived(CefWrapperType type, CefTestServer* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefTestServerCToCpp,
                                   CefTestServer,
                                   cef_test_server_t>::kWrapperType =
    WT_TEST_SERVER;
