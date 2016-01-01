// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#pragma once

#include "constants.hpp"
#include "djinni_support.hpp"

namespace jnins {

class Constants final {
public:
    using CppType = ::Constants;
    using JniType = jobject;

    using Boxed = Constants;

    ~Constants();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    Constants();
    friend ::djinni::JniClass<Constants>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("Constants") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(ILjava/lang/String;)V") };
    const jfieldID field_someInteger { ::djinni::jniGetFieldID(clazz.get(), "someInteger", "I") };
    const jfieldID field_someString { ::djinni::jniGetFieldID(clazz.get(), "someString", "Ljava/lang/String;") };
};

}  // namespace jnins
