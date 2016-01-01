// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#pragma once

#include "client_interface.hpp"
#include "djinni_support.hpp"

namespace jnins {

class ClientInterface final : ::djinni::JniInterface<::cppns::ClientInterface, ClientInterface> {
public:
    using CppType = std::shared_ptr<::cppns::ClientInterface>;
    using JniType = jobject;

    using Boxed = ClientInterface;

    ~ClientInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<ClientInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return {jniEnv, ::djinni::JniClass<ClientInterface>::get()._toJava(jniEnv, c)}; }

private:
    ClientInterface();
    friend ::djinni::JniClass<ClientInterface>;
    friend ::djinni::JniInterface<::cppns::ClientInterface, ClientInterface>;

    class JavaProxy final : ::djinni::JavaProxyCacheEntry, public ::cppns::ClientInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        ::cppns::ClientReturnedRecord get_record(int64_t record_id, const std::string & utf8string, const std::optional<std::string> & misc) override;
        double identifier_check(const std::vector<uint8_t> & data, int32_t r, int64_t jret) override;
        std::string return_str() override;

    private:
        using ::djinni::JavaProxyCacheEntry::getGlobalRef;
        friend ::djinni::JniInterface<::cppns::ClientInterface, ::jnins::ClientInterface>;
        friend ::djinni::JavaProxyCache<JavaProxy>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("ClientInterface") };
    const jmethodID method_getRecord { ::djinni::jniGetMethodID(clazz.get(), "getRecord", "(JLjava/lang/String;Ljava/lang/String;)LClientReturnedRecord;") };
    const jmethodID method_identifierCheck { ::djinni::jniGetMethodID(clazz.get(), "identifierCheck", "([BIJ)D") };
    const jmethodID method_returnStr { ::djinni::jniGetMethodID(clazz.get(), "returnStr", "()Ljava/lang/String;") };
};

}  // namespace jnins
