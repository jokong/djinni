// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#include "test_helpers.hpp"  // my header
#include "Marshal.hpp"
#include "assorted_primitives.hpp"
#include "client_interface.hpp"
#include "color.hpp"
#include "date_record.hpp"
#include "map_list_record.hpp"
#include "nested_collection.hpp"
#include "primitive_list.hpp"
#include "set_record.hpp"
#include "token.hpp"

namespace jnins {

TestHelpers::TestHelpers() : ::djinni::JniInterface<::TestHelpers, TestHelpers>("TestHelpers$CppProxy") {}

TestHelpers::~TestHelpers() = default;


CJNIEXPORT void JNICALL Java_TestHelpers_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<djinni::CppProxyHandle<::TestHelpers>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_TestHelpers_getSetRecord(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::get_set_record();
        return ::djinni::release(::jnins::SetRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_TestHelpers_checkSetRecord(JNIEnv* jniEnv, jobject /*this*/, jobject j_rec)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::check_set_record(::jnins::SetRecord::toCpp(jniEnv, j_rec));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_TestHelpers_getPrimitiveList(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::get_primitive_list();
        return ::djinni::release(::jnins::PrimitiveList::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_TestHelpers_checkPrimitiveList(JNIEnv* jniEnv, jobject /*this*/, jobject j_pl)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::check_primitive_list(::jnins::PrimitiveList::toCpp(jniEnv, j_pl));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_TestHelpers_getNestedCollection(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::get_nested_collection();
        return ::djinni::release(::jnins::NestedCollection::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_TestHelpers_checkNestedCollection(JNIEnv* jniEnv, jobject /*this*/, jobject j_nc)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::check_nested_collection(::jnins::NestedCollection::toCpp(jniEnv, j_nc));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_TestHelpers_getMap(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::get_map();
        return ::djinni::release(::djinni::Map<::djinni::String, ::djinni::I64>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_TestHelpers_checkMap(JNIEnv* jniEnv, jobject /*this*/, jobject j_m)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::check_map(::djinni::Map<::djinni::String, ::djinni::I64>::toCpp(jniEnv, j_m));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_TestHelpers_getEmptyMap(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::get_empty_map();
        return ::djinni::release(::djinni::Map<::djinni::String, ::djinni::I64>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_TestHelpers_checkEmptyMap(JNIEnv* jniEnv, jobject /*this*/, jobject j_m)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::check_empty_map(::djinni::Map<::djinni::String, ::djinni::I64>::toCpp(jniEnv, j_m));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_TestHelpers_getMapListRecord(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::get_map_list_record();
        return ::djinni::release(::jnins::MapListRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_TestHelpers_checkMapListRecord(JNIEnv* jniEnv, jobject /*this*/, jobject j_m)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::check_map_list_record(::jnins::MapListRecord::toCpp(jniEnv, j_m));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_TestHelpers_checkClientInterfaceAscii(JNIEnv* jniEnv, jobject /*this*/, jobject j_i)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::TestHelpers::check_client_interface_ascii(::jnins::ClientInterface::toCpp(jniEnv, j_i));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_TestHelpers_checkClientInterfaceNonascii(JNIEnv* jniEnv, jobject /*this*/, jobject j_i)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::TestHelpers::check_client_interface_nonascii(::jnins::ClientInterface::toCpp(jniEnv, j_i));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_TestHelpers_checkEnumMap(JNIEnv* jniEnv, jobject /*this*/, jobject j_m)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::TestHelpers::check_enum_map(::djinni::Map<::jnins::Color, ::djinni::String>::toCpp(jniEnv, j_m));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_TestHelpers_checkEnum(JNIEnv* jniEnv, jobject /*this*/, jobject j_c)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::TestHelpers::check_enum(::jnins::Color::toCpp(jniEnv, j_c));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_TestHelpers_tokenId(JNIEnv* jniEnv, jobject /*this*/, jobject j_t)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::token_id(::jnins::Token::toCpp(jniEnv, j_t));
        return ::djinni::release(::jnins::Token::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_TestHelpers_createCppToken(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::create_cpp_token();
        return ::djinni::release(::jnins::Token::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_TestHelpers_checkCppToken(JNIEnv* jniEnv, jobject /*this*/, jobject j_t)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::TestHelpers::check_cpp_token(::jnins::Token::toCpp(jniEnv, j_t));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jlong JNICALL Java_TestHelpers_cppTokenId(JNIEnv* jniEnv, jobject /*this*/, jobject j_t)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::cpp_token_id(::jnins::Token::toCpp(jniEnv, j_t));
        return ::djinni::release(::djinni::I64::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_TestHelpers_checkTokenType(JNIEnv* jniEnv, jobject /*this*/, jobject j_t, jstring j_type)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::TestHelpers::check_token_type(::jnins::Token::toCpp(jniEnv, j_t),
                                        ::djinni::String::toCpp(jniEnv, j_type));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_TestHelpers_returnNone(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::return_none();
        return ::djinni::release(::djinni::Optional<std::experimental::optional, ::djinni::I32>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_TestHelpers_assortedPrimitivesId(JNIEnv* jniEnv, jobject /*this*/, jobject j_i)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::assorted_primitives_id(::jnins::AssortedPrimitives::toCpp(jniEnv, j_i));
        return ::djinni::release(::jnins::AssortedPrimitives::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jbyteArray JNICALL Java_TestHelpers_idBinary(JNIEnv* jniEnv, jobject /*this*/, jbyteArray j_b)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::id_binary(::djinni::Binary::toCpp(jniEnv, j_b));
        return ::djinni::release(::djinni::Binary::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_TestHelpers_getDateRecord(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::get_date_record();
        return ::djinni::release(::jnins::DateRecord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_TestHelpers_checkDateRecord(JNIEnv* jniEnv, jobject /*this*/, jobject j_rec)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::TestHelpers::check_date_record(::jnins::DateRecord::toCpp(jniEnv, j_rec));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace jnins
