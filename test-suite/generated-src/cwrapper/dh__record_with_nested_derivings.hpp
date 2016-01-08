// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#pragma once

#include <atomic>
#include <experimental/optional>
#include "record_with_nested_derivings.hpp"
#ifdef __cplusplus
extern "C" {
#endif

#include "dh__record_with_nested_derivings.h"

#ifdef __cplusplus
}
#endif
struct DjinniRecordWithNestedDerivings {
    static djinni::Handle<DjinniRecordHandle> fromCpp(const ::testsuite::RecordWithNestedDerivings& dr);
    static ::testsuite::RecordWithNestedDerivings toCpp(djinni::Handle<DjinniRecordHandle> dh);
    static djinni::Handle<DjinniOptionalRecordHandle> fromCpp(std::experimental::optional<::testsuite::RecordWithNestedDerivings> dc);
    static std::experimental::optional<::testsuite::RecordWithNestedDerivings> toCpp(djinni::Handle<DjinniOptionalRecordHandle> dh);
};