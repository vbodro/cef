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
// $hash=5c0280db7af6bc6332f308b53a3189d1e64b63d0$
//

#include "libcef_dll/cpptoc/test/translator_test_ref_ptr_client_cpptoc.h"
#include "libcef_dll/cpptoc/test/translator_test_ref_ptr_client_child_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK translator_test_ref_ptr_client_get_value(
    struct _cef_translator_test_ref_ptr_client_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  int _retval = CefTranslatorTestRefPtrClientCppToC::Get(self)->GetValue();

  // Return type: simple
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefTranslatorTestRefPtrClientCppToC::CefTranslatorTestRefPtrClientCppToC() {
  GetStruct()->get_value = translator_test_ref_ptr_client_get_value;
}

// DESTRUCTOR - Do not edit by hand.

CefTranslatorTestRefPtrClientCppToC::~CefTranslatorTestRefPtrClientCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefTranslatorTestRefPtrClient>
CefCppToCRefCounted<CefTranslatorTestRefPtrClientCppToC,
                    CefTranslatorTestRefPtrClient,
                    cef_translator_test_ref_ptr_client_t>::
    UnwrapDerived(CefWrapperType type,
                  cef_translator_test_ref_ptr_client_t* s) {
  if (type == WT_TRANSLATOR_TEST_REF_PTR_CLIENT_CHILD) {
    return CefTranslatorTestRefPtrClientChildCppToC::Unwrap(
        reinterpret_cast<cef_translator_test_ref_ptr_client_child_t*>(s));
  }
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCppToCRefCounted<CefTranslatorTestRefPtrClientCppToC,
                        CefTranslatorTestRefPtrClient,
                        cef_translator_test_ref_ptr_client_t>::kWrapperType =
        WT_TRANSLATOR_TEST_REF_PTR_CLIENT;
