// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#pragma once

#include "../cpp/constants_interface.hpp"
#include <memory>

namespace Cxns {

public ref class ConstantsInterface sealed : public Platform::Object
{
public:
    void Dummy ();
internal:
    ConstantsInterface(std::shared_ptr<::ConstantsInterface> cppRef) : _cppRef(cppRef) {}
    std::shared_ptr<::ConstantsInterface> cppRef() {return _cppRef;}
private:
    std::shared_ptr<::ConstantsInterface> _cppRef;
};

}  // namespace Cxns
