// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from token.djinni

#pragma once

#include "../cpp/token.hpp"
#include "Token.h"
#include "translation.h"
#include <functional>

namespace System {

template<> class CxInterfaceProxy<::Token> : public ::Token
{
public:
    CxInterfaceProxy(::Cxns::Token^ nativeRef)
    {
        native_call_nativeRef = [nativeRef]{ return nativeRef; };
    }
    std::string whoami() override
    {
        auto nativeRet = nativeRef()->Whoami();
        return transform<std::string, Platform::String^>()(nativeRet);
    }
    ::Cxns::Token^ nativeRef() { return native_call_nativeRef(); }
private:
    std::function<::Cxns::Token^()> native_call_nativeRef;
};

}  // namespace System
