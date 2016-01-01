// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

#include "map_list_record.hpp"  // my header
#include "Marshal.hpp"

namespace jnins {

MapListRecord::MapListRecord() = default;

MapListRecord::~MapListRecord() = default;

auto MapListRecord::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<MapListRecord>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::List<::djinni::Map<::djinni::String, ::djinni::I64>>::fromCpp(jniEnv, c.map_list)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto MapListRecord::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 2);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<MapListRecord>::get();
    return {::djinni::List<::djinni::Map<::djinni::String, ::djinni::I64>>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mapList))};
}

}  // namespace jnins
