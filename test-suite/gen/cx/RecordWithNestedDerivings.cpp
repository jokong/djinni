// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#include "RecordWithNestedDerivings.h"  // my header
#include "translation.h"

namespace Cxns {


::RecordWithNestedDerivings RecordWithNestedDerivings::toCpp() {
    return ::RecordWithNestedDerivings(
        transform<int32_t, int32_t>()(Key),
        transform<::RecordWithDerivings, RecordWithDerivings^>()(Rec));
}

RecordWithNestedDerivings^ RecordWithNestedDerivings::fromCpp(const ::RecordWithNestedDerivings& value) {
    RecordWithNestedDerivings^ ret = ref new RecordWithNestedDerivings();
    ret->Key = transform<int32_t, int32_t>()(value.key);
    ret->Rec = transform<::RecordWithDerivings, RecordWithDerivings^>()(value.rec);
    return ret;
}

bool RecordWithNestedDerivings::Equals(RecordWithNestedDerivings^ rhs) {
    return this->Key == rhs->Key &&
           this->Rec == rhs->Rec;
}

int32 RecordWithNestedDerivings::CompareTo(RecordWithNestedDerivings^ rhs) {
    if (rhs == nullptr) return 1;
    int32 tempResult = 0;
    if (this->Key < rhs->Key) {
        return -1;
    } else if (rhs->Key < this->Key) {
        tempResult = 1;
    } else {
        tempResult = 0;
    }
    if(tempResult) return tempResult;
    tempResult = this->Rec->CompareTo(rhs->Rec);
    if(tempResult) return tempResult;
    return 0;
}

}  // namespace Cxns
