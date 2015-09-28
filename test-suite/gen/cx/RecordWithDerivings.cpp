// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#include "RecordWithDerivings.h"  // my header
#include "translation.h"

namespace Cxns {


::RecordWithDerivings RecordWithDerivings::toCpp() {
    return ::RecordWithDerivings(
        transform<int32_t, int32_t>()(Key1),
        transform<std::string, Platform::String^>()(Key2));
}

RecordWithDerivings^ RecordWithDerivings::fromCpp(const ::RecordWithDerivings& value) {
    RecordWithDerivings^ ret = ref new RecordWithDerivings();
    ret->Key1 = transform<int32_t, int32_t>()(value.key1);
    ret->Key2 = transform<std::string, Platform::String^>()(value.key2);
    return ret;
}

bool RecordWithDerivings::Equals(RecordWithDerivings^ rhs) {
    return this->Key1 == rhs->Key1 &&
           this->Key2 == rhs->Key2;
}

int32 RecordWithDerivings::CompareTo(RecordWithDerivings^ rhs) {
    if (rhs == nullptr) return 1;
    int32 tempResult = 0;
    if (this->Key1 < rhs->Key1) {
        return -1;
    } else if (rhs->Key1 < this->Key1) {
        tempResult = 1;
    } else {
        tempResult = 0;
    }
    if(tempResult) return tempResult;
    tempResult = Platform::String::CompareOrdinal(this->Key2, rhs->Key2);
    if(tempResult) return tempResult;
    return 0;
}

}  // namespace Cxns
