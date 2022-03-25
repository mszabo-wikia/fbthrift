/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.patch;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="MyStruct", builder=MyStruct.Builder.class)
public final class MyStruct implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public MyStruct(
        @com.facebook.swift.codec.ThriftField(value=1, name="boolVal", requiredness=Requiredness.NONE) final boolean boolVal,
        @com.facebook.swift.codec.ThriftField(value=2, name="byteVal", requiredness=Requiredness.NONE) final byte byteVal,
        @com.facebook.swift.codec.ThriftField(value=3, name="i16Val", requiredness=Requiredness.NONE) final short i16Val,
        @com.facebook.swift.codec.ThriftField(value=4, name="i32Val", requiredness=Requiredness.NONE) final int i32Val,
        @com.facebook.swift.codec.ThriftField(value=5, name="i64Val", requiredness=Requiredness.NONE) final long i64Val,
        @com.facebook.swift.codec.ThriftField(value=6, name="floatVal", requiredness=Requiredness.NONE) final float floatVal,
        @com.facebook.swift.codec.ThriftField(value=7, name="doubleVal", requiredness=Requiredness.NONE) final double doubleVal,
        @com.facebook.swift.codec.ThriftField(value=8, name="stringVal", requiredness=Requiredness.NONE) final String stringVal,
        @com.facebook.swift.codec.ThriftField(value=9, name="binaryVal", requiredness=Requiredness.NONE) final byte[] binaryVal,
        @com.facebook.swift.codec.ThriftField(value=11, name="optBoolVal", requiredness=Requiredness.OPTIONAL) final Boolean optBoolVal,
        @com.facebook.swift.codec.ThriftField(value=12, name="optByteVal", requiredness=Requiredness.OPTIONAL) final Byte optByteVal,
        @com.facebook.swift.codec.ThriftField(value=13, name="optI16Val", requiredness=Requiredness.OPTIONAL) final Short optI16Val,
        @com.facebook.swift.codec.ThriftField(value=14, name="optI32Val", requiredness=Requiredness.OPTIONAL) final Integer optI32Val,
        @com.facebook.swift.codec.ThriftField(value=15, name="optI64Val", requiredness=Requiredness.OPTIONAL) final Long optI64Val,
        @com.facebook.swift.codec.ThriftField(value=16, name="optFloatVal", requiredness=Requiredness.OPTIONAL) final Float optFloatVal,
        @com.facebook.swift.codec.ThriftField(value=17, name="optDoubleVal", requiredness=Requiredness.OPTIONAL) final Double optDoubleVal,
        @com.facebook.swift.codec.ThriftField(value=18, name="optStringVal", requiredness=Requiredness.OPTIONAL) final String optStringVal,
        @com.facebook.swift.codec.ThriftField(value=19, name="optBinaryVal", requiredness=Requiredness.OPTIONAL) final byte[] optBinaryVal
    ) {
        this.boolVal = boolVal;
        this.byteVal = byteVal;
        this.i16Val = i16Val;
        this.i32Val = i32Val;
        this.i64Val = i64Val;
        this.floatVal = floatVal;
        this.doubleVal = doubleVal;
        this.stringVal = stringVal;
        this.binaryVal = binaryVal;
        this.optBoolVal = optBoolVal;
        this.optByteVal = optByteVal;
        this.optI16Val = optI16Val;
        this.optI32Val = optI32Val;
        this.optI64Val = optI64Val;
        this.optFloatVal = optFloatVal;
        this.optDoubleVal = optDoubleVal;
        this.optStringVal = optStringVal;
        this.optBinaryVal = optBinaryVal;
    }
    
    @ThriftConstructor
    protected MyStruct() {
      this.boolVal = false;
      this.byteVal = 0;
      this.i16Val = 0;
      this.i32Val = 0;
      this.i64Val = 0L;
      this.floatVal = 0.f;
      this.doubleVal = 0.;
      this.stringVal = null;
      this.binaryVal = null;
      this.optBoolVal = null;
      this.optByteVal = null;
      this.optI16Val = null;
      this.optI32Val = null;
      this.optI64Val = null;
      this.optFloatVal = null;
      this.optDoubleVal = null;
      this.optStringVal = null;
      this.optBinaryVal = null;
    }
    
    public static class Builder {
    
        private boolean boolVal = false;
        private byte byteVal = 0;
        private short i16Val = 0;
        private int i32Val = 0;
        private long i64Val = 0L;
        private float floatVal = 0.f;
        private double doubleVal = 0.;
        private String stringVal = null;
        private byte[] binaryVal = null;
        private Boolean optBoolVal = null;
        private Byte optByteVal = null;
        private Short optI16Val = null;
        private Integer optI32Val = null;
        private Long optI64Val = null;
        private Float optFloatVal = null;
        private Double optDoubleVal = null;
        private String optStringVal = null;
        private byte[] optBinaryVal = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="boolVal", requiredness=Requiredness.NONE)
        public Builder setBoolVal(boolean boolVal) {
            this.boolVal = boolVal;
            return this;
        }
    
        public boolean isBoolVal() { return boolVal; }
    
            @com.facebook.swift.codec.ThriftField(value=2, name="byteVal", requiredness=Requiredness.NONE)
        public Builder setByteVal(byte byteVal) {
            this.byteVal = byteVal;
            return this;
        }
    
        public byte getByteVal() { return byteVal; }
    
            @com.facebook.swift.codec.ThriftField(value=3, name="i16Val", requiredness=Requiredness.NONE)
        public Builder setI16Val(short i16Val) {
            this.i16Val = i16Val;
            return this;
        }
    
        public short getI16Val() { return i16Val; }
    
            @com.facebook.swift.codec.ThriftField(value=4, name="i32Val", requiredness=Requiredness.NONE)
        public Builder setI32Val(int i32Val) {
            this.i32Val = i32Val;
            return this;
        }
    
        public int getI32Val() { return i32Val; }
    
            @com.facebook.swift.codec.ThriftField(value=5, name="i64Val", requiredness=Requiredness.NONE)
        public Builder setI64Val(long i64Val) {
            this.i64Val = i64Val;
            return this;
        }
    
        public long getI64Val() { return i64Val; }
    
            @com.facebook.swift.codec.ThriftField(value=6, name="floatVal", requiredness=Requiredness.NONE)
        public Builder setFloatVal(float floatVal) {
            this.floatVal = floatVal;
            return this;
        }
    
        public float getFloatVal() { return floatVal; }
    
            @com.facebook.swift.codec.ThriftField(value=7, name="doubleVal", requiredness=Requiredness.NONE)
        public Builder setDoubleVal(double doubleVal) {
            this.doubleVal = doubleVal;
            return this;
        }
    
        public double getDoubleVal() { return doubleVal; }
    
            @com.facebook.swift.codec.ThriftField(value=8, name="stringVal", requiredness=Requiredness.NONE)
        public Builder setStringVal(String stringVal) {
            this.stringVal = stringVal;
            return this;
        }
    
        public String getStringVal() { return stringVal; }
    
            @com.facebook.swift.codec.ThriftField(value=9, name="binaryVal", requiredness=Requiredness.NONE)
        public Builder setBinaryVal(byte[] binaryVal) {
            this.binaryVal = binaryVal;
            return this;
        }
    
        public byte[] getBinaryVal() { return binaryVal; }
    
            @com.facebook.swift.codec.ThriftField(value=11, name="optBoolVal", requiredness=Requiredness.OPTIONAL)
        public Builder setOptBoolVal(Boolean optBoolVal) {
            this.optBoolVal = optBoolVal;
            return this;
        }
    
        public Boolean isOptBoolVal() { return optBoolVal; }
    
            @com.facebook.swift.codec.ThriftField(value=12, name="optByteVal", requiredness=Requiredness.OPTIONAL)
        public Builder setOptByteVal(Byte optByteVal) {
            this.optByteVal = optByteVal;
            return this;
        }
    
        public Byte getOptByteVal() { return optByteVal; }
    
            @com.facebook.swift.codec.ThriftField(value=13, name="optI16Val", requiredness=Requiredness.OPTIONAL)
        public Builder setOptI16Val(Short optI16Val) {
            this.optI16Val = optI16Val;
            return this;
        }
    
        public Short getOptI16Val() { return optI16Val; }
    
            @com.facebook.swift.codec.ThriftField(value=14, name="optI32Val", requiredness=Requiredness.OPTIONAL)
        public Builder setOptI32Val(Integer optI32Val) {
            this.optI32Val = optI32Val;
            return this;
        }
    
        public Integer getOptI32Val() { return optI32Val; }
    
            @com.facebook.swift.codec.ThriftField(value=15, name="optI64Val", requiredness=Requiredness.OPTIONAL)
        public Builder setOptI64Val(Long optI64Val) {
            this.optI64Val = optI64Val;
            return this;
        }
    
        public Long getOptI64Val() { return optI64Val; }
    
            @com.facebook.swift.codec.ThriftField(value=16, name="optFloatVal", requiredness=Requiredness.OPTIONAL)
        public Builder setOptFloatVal(Float optFloatVal) {
            this.optFloatVal = optFloatVal;
            return this;
        }
    
        public Float getOptFloatVal() { return optFloatVal; }
    
            @com.facebook.swift.codec.ThriftField(value=17, name="optDoubleVal", requiredness=Requiredness.OPTIONAL)
        public Builder setOptDoubleVal(Double optDoubleVal) {
            this.optDoubleVal = optDoubleVal;
            return this;
        }
    
        public Double getOptDoubleVal() { return optDoubleVal; }
    
            @com.facebook.swift.codec.ThriftField(value=18, name="optStringVal", requiredness=Requiredness.OPTIONAL)
        public Builder setOptStringVal(String optStringVal) {
            this.optStringVal = optStringVal;
            return this;
        }
    
        public String getOptStringVal() { return optStringVal; }
    
            @com.facebook.swift.codec.ThriftField(value=19, name="optBinaryVal", requiredness=Requiredness.OPTIONAL)
        public Builder setOptBinaryVal(byte[] optBinaryVal) {
            this.optBinaryVal = optBinaryVal;
            return this;
        }
    
        public byte[] getOptBinaryVal() { return optBinaryVal; }
    
        public Builder() { }
        public Builder(MyStruct other) {
            this.boolVal = other.boolVal;
            this.byteVal = other.byteVal;
            this.i16Val = other.i16Val;
            this.i32Val = other.i32Val;
            this.i64Val = other.i64Val;
            this.floatVal = other.floatVal;
            this.doubleVal = other.doubleVal;
            this.stringVal = other.stringVal;
            this.binaryVal = other.binaryVal;
            this.optBoolVal = other.optBoolVal;
            this.optByteVal = other.optByteVal;
            this.optI16Val = other.optI16Val;
            this.optI32Val = other.optI32Val;
            this.optI64Val = other.optI64Val;
            this.optFloatVal = other.optFloatVal;
            this.optDoubleVal = other.optDoubleVal;
            this.optStringVal = other.optStringVal;
            this.optBinaryVal = other.optBinaryVal;
        }
    
        @ThriftConstructor
        public MyStruct build() {
            MyStruct result = new MyStruct (
                this.boolVal,
                this.byteVal,
                this.i16Val,
                this.i32Val,
                this.i64Val,
                this.floatVal,
                this.doubleVal,
                this.stringVal,
                this.binaryVal,
                this.optBoolVal,
                this.optByteVal,
                this.optI16Val,
                this.optI32Val,
                this.optI64Val,
                this.optFloatVal,
                this.optDoubleVal,
                this.optStringVal,
                this.optBinaryVal
            );
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("MyStruct");
    private final boolean boolVal;
    public static final int _BOOLVAL = 1;
    private static final TField BOOL_VAL_FIELD_DESC = new TField("boolVal", TType.BOOL, (short)1);
        private final byte byteVal;
    public static final int _BYTEVAL = 2;
    private static final TField BYTE_VAL_FIELD_DESC = new TField("byteVal", TType.BYTE, (short)2);
        private final short i16Val;
    public static final int _I16VAL = 3;
    private static final TField I16_VAL_FIELD_DESC = new TField("i16Val", TType.I16, (short)3);
        private final int i32Val;
    public static final int _I32VAL = 4;
    private static final TField I32_VAL_FIELD_DESC = new TField("i32Val", TType.I32, (short)4);
        private final long i64Val;
    public static final int _I64VAL = 5;
    private static final TField I64_VAL_FIELD_DESC = new TField("i64Val", TType.I64, (short)5);
        private final float floatVal;
    public static final int _FLOATVAL = 6;
    private static final TField FLOAT_VAL_FIELD_DESC = new TField("floatVal", TType.FLOAT, (short)6);
        private final double doubleVal;
    public static final int _DOUBLEVAL = 7;
    private static final TField DOUBLE_VAL_FIELD_DESC = new TField("doubleVal", TType.DOUBLE, (short)7);
        private final String stringVal;
    public static final int _STRINGVAL = 8;
    private static final TField STRING_VAL_FIELD_DESC = new TField("stringVal", TType.STRING, (short)8);
        private final byte[] binaryVal;
    public static final int _BINARYVAL = 9;
    private static final TField BINARY_VAL_FIELD_DESC = new TField("binaryVal", TType.STRING, (short)9);
        private final Boolean optBoolVal;
    public static final int _OPTBOOLVAL = 11;
    private static final TField OPT_BOOL_VAL_FIELD_DESC = new TField("optBoolVal", TType.BOOL, (short)11);
        private final Byte optByteVal;
    public static final int _OPTBYTEVAL = 12;
    private static final TField OPT_BYTE_VAL_FIELD_DESC = new TField("optByteVal", TType.BYTE, (short)12);
        private final Short optI16Val;
    public static final int _OPTI16VAL = 13;
    private static final TField OPT_I16_VAL_FIELD_DESC = new TField("optI16Val", TType.I16, (short)13);
        private final Integer optI32Val;
    public static final int _OPTI32VAL = 14;
    private static final TField OPT_I32_VAL_FIELD_DESC = new TField("optI32Val", TType.I32, (short)14);
        private final Long optI64Val;
    public static final int _OPTI64VAL = 15;
    private static final TField OPT_I64_VAL_FIELD_DESC = new TField("optI64Val", TType.I64, (short)15);
        private final Float optFloatVal;
    public static final int _OPTFLOATVAL = 16;
    private static final TField OPT_FLOAT_VAL_FIELD_DESC = new TField("optFloatVal", TType.FLOAT, (short)16);
        private final Double optDoubleVal;
    public static final int _OPTDOUBLEVAL = 17;
    private static final TField OPT_DOUBLE_VAL_FIELD_DESC = new TField("optDoubleVal", TType.DOUBLE, (short)17);
        private final String optStringVal;
    public static final int _OPTSTRINGVAL = 18;
    private static final TField OPT_STRING_VAL_FIELD_DESC = new TField("optStringVal", TType.STRING, (short)18);
        private final byte[] optBinaryVal;
    public static final int _OPTBINARYVAL = 19;
    private static final TField OPT_BINARY_VAL_FIELD_DESC = new TField("optBinaryVal", TType.STRING, (short)19);
    static {
      NAMES_TO_IDS.put("boolVal", 1);
      FIELD_METADATA.put(1, BOOL_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("byteVal", 2);
      FIELD_METADATA.put(2, BYTE_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("i16Val", 3);
      FIELD_METADATA.put(3, I16_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("i32Val", 4);
      FIELD_METADATA.put(4, I32_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("i64Val", 5);
      FIELD_METADATA.put(5, I64_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("floatVal", 6);
      FIELD_METADATA.put(6, FLOAT_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("doubleVal", 7);
      FIELD_METADATA.put(7, DOUBLE_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("stringVal", 8);
      FIELD_METADATA.put(8, STRING_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("binaryVal", 9);
      FIELD_METADATA.put(9, BINARY_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optBoolVal", 11);
      FIELD_METADATA.put(11, OPT_BOOL_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optByteVal", 12);
      FIELD_METADATA.put(12, OPT_BYTE_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optI16Val", 13);
      FIELD_METADATA.put(13, OPT_I16_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optI32Val", 14);
      FIELD_METADATA.put(14, OPT_I32_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optI64Val", 15);
      FIELD_METADATA.put(15, OPT_I64_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optFloatVal", 16);
      FIELD_METADATA.put(16, OPT_FLOAT_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optDoubleVal", 17);
      FIELD_METADATA.put(17, OPT_DOUBLE_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optStringVal", 18);
      FIELD_METADATA.put(18, OPT_STRING_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optBinaryVal", 19);
      FIELD_METADATA.put(19, OPT_BINARY_VAL_FIELD_DESC);
    }
    
    
    @com.facebook.swift.codec.ThriftField(value=1, name="boolVal", requiredness=Requiredness.NONE)
    public boolean isBoolVal() { return boolVal; }
    
    
    
    @com.facebook.swift.codec.ThriftField(value=2, name="byteVal", requiredness=Requiredness.NONE)
    public byte getByteVal() { return byteVal; }
    
    
    
    @com.facebook.swift.codec.ThriftField(value=3, name="i16Val", requiredness=Requiredness.NONE)
    public short getI16Val() { return i16Val; }
    
    
    
    @com.facebook.swift.codec.ThriftField(value=4, name="i32Val", requiredness=Requiredness.NONE)
    public int getI32Val() { return i32Val; }
    
    
    
    @com.facebook.swift.codec.ThriftField(value=5, name="i64Val", requiredness=Requiredness.NONE)
    public long getI64Val() { return i64Val; }
    
    
    
    @com.facebook.swift.codec.ThriftField(value=6, name="floatVal", requiredness=Requiredness.NONE)
    public float getFloatVal() { return floatVal; }
    
    
    
    @com.facebook.swift.codec.ThriftField(value=7, name="doubleVal", requiredness=Requiredness.NONE)
    public double getDoubleVal() { return doubleVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=8, name="stringVal", requiredness=Requiredness.NONE)
    public String getStringVal() { return stringVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=9, name="binaryVal", requiredness=Requiredness.NONE)
    public byte[] getBinaryVal() { return binaryVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=11, name="optBoolVal", requiredness=Requiredness.OPTIONAL)
    public Boolean isOptBoolVal() { return optBoolVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=12, name="optByteVal", requiredness=Requiredness.OPTIONAL)
    public Byte getOptByteVal() { return optByteVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=13, name="optI16Val", requiredness=Requiredness.OPTIONAL)
    public Short getOptI16Val() { return optI16Val; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=14, name="optI32Val", requiredness=Requiredness.OPTIONAL)
    public Integer getOptI32Val() { return optI32Val; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=15, name="optI64Val", requiredness=Requiredness.OPTIONAL)
    public Long getOptI64Val() { return optI64Val; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=16, name="optFloatVal", requiredness=Requiredness.OPTIONAL)
    public Float getOptFloatVal() { return optFloatVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=17, name="optDoubleVal", requiredness=Requiredness.OPTIONAL)
    public Double getOptDoubleVal() { return optDoubleVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=18, name="optStringVal", requiredness=Requiredness.OPTIONAL)
    public String getOptStringVal() { return optStringVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=19, name="optBinaryVal", requiredness=Requiredness.OPTIONAL)
    public byte[] getOptBinaryVal() { return optBinaryVal; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("boolVal", boolVal);
        helper.add("byteVal", byteVal);
        helper.add("i16Val", i16Val);
        helper.add("i32Val", i32Val);
        helper.add("i64Val", i64Val);
        helper.add("floatVal", floatVal);
        helper.add("doubleVal", doubleVal);
        helper.add("stringVal", stringVal);
        helper.add("binaryVal", binaryVal);
        helper.add("optBoolVal", optBoolVal);
        helper.add("optByteVal", optByteVal);
        helper.add("optI16Val", optI16Val);
        helper.add("optI32Val", optI32Val);
        helper.add("optI64Val", optI64Val);
        helper.add("optFloatVal", optFloatVal);
        helper.add("optDoubleVal", optDoubleVal);
        helper.add("optStringVal", optStringVal);
        helper.add("optBinaryVal", optBinaryVal);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        MyStruct other = (MyStruct)o;
    
        return
            Objects.equals(boolVal, other.boolVal) &&
            Objects.equals(byteVal, other.byteVal) &&
            Objects.equals(i16Val, other.i16Val) &&
            Objects.equals(i32Val, other.i32Val) &&
            Objects.equals(i64Val, other.i64Val) &&
            Objects.equals(floatVal, other.floatVal) &&
            Objects.equals(doubleVal, other.doubleVal) &&
            Objects.equals(stringVal, other.stringVal) &&
            Arrays.equals(binaryVal, other.binaryVal) &&
            Objects.equals(optBoolVal, other.optBoolVal) &&
            Objects.equals(optByteVal, other.optByteVal) &&
            Objects.equals(optI16Val, other.optI16Val) &&
            Objects.equals(optI32Val, other.optI32Val) &&
            Objects.equals(optI64Val, other.optI64Val) &&
            Objects.equals(optFloatVal, other.optFloatVal) &&
            Objects.equals(optDoubleVal, other.optDoubleVal) &&
            Objects.equals(optStringVal, other.optStringVal) &&
            Arrays.equals(optBinaryVal, other.optBinaryVal) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            boolVal,
            byteVal,
            i16Val,
            i32Val,
            i64Val,
            floatVal,
            doubleVal,
            stringVal,
            binaryVal,
            optBoolVal,
            optByteVal,
            optI16Val,
            optI32Val,
            optI64Val,
            optFloatVal,
            optDoubleVal,
            optStringVal,
            optBinaryVal
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<MyStruct> asReader() {
      return MyStruct::read0;
    }
    
    public static MyStruct read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(MyStruct.NAMES_TO_IDS, MyStruct.FIELD_METADATA);
      MyStruct.Builder builder = new MyStruct.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _BOOLVAL:
          if (__field.type == TType.BOOL) {
            boolean boolVal = oprot.readBool();
            builder.setBoolVal(boolVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _BYTEVAL:
          if (__field.type == TType.BYTE) {
            byte byteVal = oprot.readByte();
            builder.setByteVal(byteVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _I16VAL:
          if (__field.type == TType.I16) {
            short i16Val = oprot.readI16();
            builder.setI16Val(i16Val);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _I32VAL:
          if (__field.type == TType.I32) {
            int i32Val = oprot.readI32();
            builder.setI32Val(i32Val);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _I64VAL:
          if (__field.type == TType.I64) {
            long i64Val = oprot.readI64();
            builder.setI64Val(i64Val);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _FLOATVAL:
          if (__field.type == TType.FLOAT) {
            float floatVal = oprot.readFloat();
            builder.setFloatVal(floatVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _DOUBLEVAL:
          if (__field.type == TType.DOUBLE) {
            double doubleVal = oprot.readDouble();
            builder.setDoubleVal(doubleVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _STRINGVAL:
          if (__field.type == TType.STRING) {
            String stringVal = oprot.readString();
            builder.setStringVal(stringVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _BINARYVAL:
          if (__field.type == TType.STRING) {
            byte[] binaryVal = oprot.readBinary().array();
            builder.setBinaryVal(binaryVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTBOOLVAL:
          if (__field.type == TType.BOOL) {
            Boolean optBoolVal = oprot.readBool();
            builder.setOptBoolVal(optBoolVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTBYTEVAL:
          if (__field.type == TType.BYTE) {
            Byte optByteVal = oprot.readByte();
            builder.setOptByteVal(optByteVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTI16VAL:
          if (__field.type == TType.I16) {
            Short optI16Val = oprot.readI16();
            builder.setOptI16Val(optI16Val);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTI32VAL:
          if (__field.type == TType.I32) {
            Integer optI32Val = oprot.readI32();
            builder.setOptI32Val(optI32Val);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTI64VAL:
          if (__field.type == TType.I64) {
            Long optI64Val = oprot.readI64();
            builder.setOptI64Val(optI64Val);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTFLOATVAL:
          if (__field.type == TType.FLOAT) {
            Float optFloatVal = oprot.readFloat();
            builder.setOptFloatVal(optFloatVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTDOUBLEVAL:
          if (__field.type == TType.DOUBLE) {
            Double optDoubleVal = oprot.readDouble();
            builder.setOptDoubleVal(optDoubleVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTSTRINGVAL:
          if (__field.type == TType.STRING) {
            String optStringVal = oprot.readString();
            builder.setOptStringVal(optStringVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTBINARYVAL:
          if (__field.type == TType.STRING) {
            byte[] optBinaryVal = oprot.readBinary().array();
            builder.setOptBinaryVal(optBinaryVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldBegin(BOOL_VAL_FIELD_DESC);
      oprot.writeBool(this.boolVal);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(BYTE_VAL_FIELD_DESC);
      oprot.writeByte(this.byteVal);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(I16_VAL_FIELD_DESC);
      oprot.writeI16(this.i16Val);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(I32_VAL_FIELD_DESC);
      oprot.writeI32(this.i32Val);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(I64_VAL_FIELD_DESC);
      oprot.writeI64(this.i64Val);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(FLOAT_VAL_FIELD_DESC);
      oprot.writeFloat(this.floatVal);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(DOUBLE_VAL_FIELD_DESC);
      oprot.writeDouble(this.doubleVal);
      oprot.writeFieldEnd();
      if (this.stringVal != null) {
        oprot.writeFieldBegin(STRING_VAL_FIELD_DESC);
        oprot.writeString(this.stringVal);
        oprot.writeFieldEnd();
      }
      if (this.binaryVal != null) {
        oprot.writeFieldBegin(BINARY_VAL_FIELD_DESC);
        oprot.writeBinary(java.nio.ByteBuffer.wrap(this.binaryVal));
        oprot.writeFieldEnd();
      }
      if (this.optBoolVal != null) {
        oprot.writeFieldBegin(OPT_BOOL_VAL_FIELD_DESC);
        oprot.writeBool(this.optBoolVal);
        oprot.writeFieldEnd();
      }
      if (this.optByteVal != null) {
        oprot.writeFieldBegin(OPT_BYTE_VAL_FIELD_DESC);
        oprot.writeByte(this.optByteVal);
        oprot.writeFieldEnd();
      }
      if (this.optI16Val != null) {
        oprot.writeFieldBegin(OPT_I16_VAL_FIELD_DESC);
        oprot.writeI16(this.optI16Val);
        oprot.writeFieldEnd();
      }
      if (this.optI32Val != null) {
        oprot.writeFieldBegin(OPT_I32_VAL_FIELD_DESC);
        oprot.writeI32(this.optI32Val);
        oprot.writeFieldEnd();
      }
      if (this.optI64Val != null) {
        oprot.writeFieldBegin(OPT_I64_VAL_FIELD_DESC);
        oprot.writeI64(this.optI64Val);
        oprot.writeFieldEnd();
      }
      if (this.optFloatVal != null) {
        oprot.writeFieldBegin(OPT_FLOAT_VAL_FIELD_DESC);
        oprot.writeFloat(this.optFloatVal);
        oprot.writeFieldEnd();
      }
      if (this.optDoubleVal != null) {
        oprot.writeFieldBegin(OPT_DOUBLE_VAL_FIELD_DESC);
        oprot.writeDouble(this.optDoubleVal);
        oprot.writeFieldEnd();
      }
      if (this.optStringVal != null) {
        oprot.writeFieldBegin(OPT_STRING_VAL_FIELD_DESC);
        oprot.writeString(this.optStringVal);
        oprot.writeFieldEnd();
      }
      if (this.optBinaryVal != null) {
        oprot.writeFieldBegin(OPT_BINARY_VAL_FIELD_DESC);
        oprot.writeBinary(java.nio.ByteBuffer.wrap(this.optBinaryVal));
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _MyStructLazy {
        private static final MyStruct _DEFAULT = new MyStruct.Builder().build();
    }
    
    public static MyStruct defaultInstance() {
        return  _MyStructLazy._DEFAULT;
    }
}
