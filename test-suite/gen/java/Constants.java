// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

public final class Constants {

    public static final boolean BOOL_CONSTANT = true;

    public static final byte I8_CONSTANT = 1;

    public static final short I16_CONSTANT = 2;

    public static final int I32_CONSTANT = 3;

    public static final long I64_CONSTANT = 4;

    public static final float F32_CONSTANT = 5.0f;

    public static final double F64_CONSTANT = 5.0;

    public static final String STRING_CONSTANT = "string-constant";

    public static final Integer OPTIONAL_INTEGER_CONSTANT = 1;

    public static final Constants OBJECT_CONSTANT = new Constants(
        I32_CONSTANT /* someInteger */ ,
        STRING_CONSTANT /* someString */ );


    /*package*/ final int someInteger;

    /*package*/ final String someString;

    public Constants(
            int someInteger,
            String someString) {
        this.someInteger = someInteger;
        this.someString = someString;
    }

    public int getSomeInteger() {
        return someInteger;
    }

    public String getSomeString() {
        return someString;
    }
}