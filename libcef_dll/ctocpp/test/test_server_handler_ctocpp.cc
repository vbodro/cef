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
// $hash=43130e567ff34056d282a006b0023c5892b83afa$
//

#include "libcef_dll/ctocpp/test/test_server_handler_ctocpp.h"
#include "libcef_dll/cpptoc/request_cpptoc.h"
#include "libcef_dll/cpptoc/test/test_server_connection_cpptoc.h"
#include "libcef_dll/cpptoc/test/test_server_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
bool CefTestServerHandlerCToCpp::OnTestServerRequest(
    CefRefPtr<CefTestServer> server,
    CefRefPtr<CefRequest> request,
    CefRefPtr<CefTestServerConnection> connection) {
  shutdown_checker::AssertNotShutdown();

  cef_test_server_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_test_server_request)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: server; type: refptr_diff
  DCHECK(server.get());
  if (!server.get()) {
    return false;
  }
  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get()) {
    return false;
  }
  // Verify param: connection; type: refptr_diff
  DCHECK(connection.get());
  if (!connection.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->on_test_server_request(
      _struct, CefTestServerCppToC::Wrap(server),
      CefRequestCppToC::Wrap(request),
      CefTestServerConnectionCppToC::Wrap(connection));

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefTestServerHandlerCToCpp::CefTestServerHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefTestServerHandlerCToCpp::~CefTestServerHandlerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_test_server_handler_t* CefCToCppRefCounted<
    CefTestServerHandlerCToCpp,
    CefTestServerHandler,
    cef_test_server_handler_t>::UnwrapDerived(CefWrapperType type,
                                              CefTestServerHandler* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefTestServerHandlerCToCpp,
                                   CefTestServerHandler,
                                   cef_test_server_handler_t>::kWrapperType =
    WT_TEST_SERVER_HANDLER;
