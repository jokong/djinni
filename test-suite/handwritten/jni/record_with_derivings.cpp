// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#include "record_with_derivings.hpp"  // my header
#include "Marshal.hpp"

namespace jnins {

RecordWithDerivings::RecordWithDerivings() = default;

RecordWithDerivings::~RecordWithDerivings() = default;

auto RecordWithDerivings::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<RecordWithDerivings>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.key1)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.key2)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto RecordWithDerivings::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<RecordWithDerivings>::get();
    return {::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_key1)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_key2))};
}

}  // namespace jnins
