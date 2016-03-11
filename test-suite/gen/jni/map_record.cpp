// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

#include "map_record.hpp"  // my header
#include "Marshal.hpp"

namespace jnins {

MapRecord::MapRecord() = default;

MapRecord::~MapRecord() = default;

auto MapRecord::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<MapRecord>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::Map<::djinni::String, ::djinni::I64>::fromCpp(jniEnv, c.map)),
                                                           ::djinni::get(::djinni::Map<::djinni::I32, ::djinni::I32>::fromCpp(jniEnv, c.imap)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto MapRecord::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<MapRecord>::get();
    return {::djinni::Map<::djinni::String, ::djinni::I64>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_map)),
            ::djinni::Map<::djinni::I32, ::djinni::I32>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_imap))};
}

}  // namespace jnins