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
@com.facebook.swift.codec.ThriftStruct(value="MyStructPatch", builder=MyStructPatch.Builder.class)
public final class MyStructPatch implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public MyStructPatch(
        @com.facebook.swift.codec.ThriftField(value=1, name="boolVal", requiredness=Requiredness.NONE) final com.facebook.thrift.op.BoolPatch boolVal,
        @com.facebook.swift.codec.ThriftField(value=2, name="byteVal", requiredness=Requiredness.NONE) final com.facebook.thrift.op.BytePatch byteVal,
        @com.facebook.swift.codec.ThriftField(value=3, name="i16Val", requiredness=Requiredness.NONE) final com.facebook.thrift.op.I16Patch i16Val,
        @com.facebook.swift.codec.ThriftField(value=4, name="i32Val", requiredness=Requiredness.NONE) final com.facebook.thrift.op.I32Patch i32Val,
        @com.facebook.swift.codec.ThriftField(value=5, name="i64Val", requiredness=Requiredness.NONE) final com.facebook.thrift.op.I64Patch i64Val,
        @com.facebook.swift.codec.ThriftField(value=6, name="floatVal", requiredness=Requiredness.NONE) final com.facebook.thrift.op.FloatPatch floatVal,
        @com.facebook.swift.codec.ThriftField(value=7, name="doubleVal", requiredness=Requiredness.NONE) final com.facebook.thrift.op.DoublePatch doubleVal,
        @com.facebook.swift.codec.ThriftField(value=8, name="stringVal", requiredness=Requiredness.NONE) final com.facebook.thrift.op.StringPatch stringVal,
        @com.facebook.swift.codec.ThriftField(value=9, name="binaryVal", requiredness=Requiredness.NONE) final com.facebook.thrift.op.BinaryPatch binaryVal,
        @com.facebook.swift.codec.ThriftField(value=11, name="optBoolVal", requiredness=Requiredness.NONE) final com.facebook.thrift.op.OptionalBoolPatch optBoolVal,
        @com.facebook.swift.codec.ThriftField(value=12, name="optByteVal", requiredness=Requiredness.NONE) final com.facebook.thrift.op.OptionalBytePatch optByteVal,
        @com.facebook.swift.codec.ThriftField(value=13, name="optI16Val", requiredness=Requiredness.NONE) final com.facebook.thrift.op.OptionalI16Patch optI16Val,
        @com.facebook.swift.codec.ThriftField(value=14, name="optI32Val", requiredness=Requiredness.NONE) final com.facebook.thrift.op.OptionalI32Patch optI32Val,
        @com.facebook.swift.codec.ThriftField(value=15, name="optI64Val", requiredness=Requiredness.NONE) final com.facebook.thrift.op.OptionalI64Patch optI64Val,
        @com.facebook.swift.codec.ThriftField(value=16, name="optFloatVal", requiredness=Requiredness.NONE) final com.facebook.thrift.op.OptionalFloatPatch optFloatVal,
        @com.facebook.swift.codec.ThriftField(value=17, name="optDoubleVal", requiredness=Requiredness.NONE) final com.facebook.thrift.op.OptionalDoublePatch optDoubleVal,
        @com.facebook.swift.codec.ThriftField(value=18, name="optStringVal", requiredness=Requiredness.NONE) final com.facebook.thrift.op.OptionalStringPatch optStringVal,
        @com.facebook.swift.codec.ThriftField(value=19, name="optBinaryVal", requiredness=Requiredness.NONE) final com.facebook.thrift.op.OptionalBinaryPatch optBinaryVal
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
    protected MyStructPatch() {
      this.boolVal = null;
      this.byteVal = null;
      this.i16Val = null;
      this.i32Val = null;
      this.i64Val = null;
      this.floatVal = null;
      this.doubleVal = null;
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
    
        private com.facebook.thrift.op.BoolPatch boolVal = null;
        private com.facebook.thrift.op.BytePatch byteVal = null;
        private com.facebook.thrift.op.I16Patch i16Val = null;
        private com.facebook.thrift.op.I32Patch i32Val = null;
        private com.facebook.thrift.op.I64Patch i64Val = null;
        private com.facebook.thrift.op.FloatPatch floatVal = null;
        private com.facebook.thrift.op.DoublePatch doubleVal = null;
        private com.facebook.thrift.op.StringPatch stringVal = null;
        private com.facebook.thrift.op.BinaryPatch binaryVal = null;
        private com.facebook.thrift.op.OptionalBoolPatch optBoolVal = null;
        private com.facebook.thrift.op.OptionalBytePatch optByteVal = null;
        private com.facebook.thrift.op.OptionalI16Patch optI16Val = null;
        private com.facebook.thrift.op.OptionalI32Patch optI32Val = null;
        private com.facebook.thrift.op.OptionalI64Patch optI64Val = null;
        private com.facebook.thrift.op.OptionalFloatPatch optFloatVal = null;
        private com.facebook.thrift.op.OptionalDoublePatch optDoubleVal = null;
        private com.facebook.thrift.op.OptionalStringPatch optStringVal = null;
        private com.facebook.thrift.op.OptionalBinaryPatch optBinaryVal = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="boolVal", requiredness=Requiredness.NONE)
        public Builder setBoolVal(com.facebook.thrift.op.BoolPatch boolVal) {
            this.boolVal = boolVal;
            return this;
        }
    
        public com.facebook.thrift.op.BoolPatch getBoolVal() { return boolVal; }
    
            @com.facebook.swift.codec.ThriftField(value=2, name="byteVal", requiredness=Requiredness.NONE)
        public Builder setByteVal(com.facebook.thrift.op.BytePatch byteVal) {
            this.byteVal = byteVal;
            return this;
        }
    
        public com.facebook.thrift.op.BytePatch getByteVal() { return byteVal; }
    
            @com.facebook.swift.codec.ThriftField(value=3, name="i16Val", requiredness=Requiredness.NONE)
        public Builder setI16Val(com.facebook.thrift.op.I16Patch i16Val) {
            this.i16Val = i16Val;
            return this;
        }
    
        public com.facebook.thrift.op.I16Patch getI16Val() { return i16Val; }
    
            @com.facebook.swift.codec.ThriftField(value=4, name="i32Val", requiredness=Requiredness.NONE)
        public Builder setI32Val(com.facebook.thrift.op.I32Patch i32Val) {
            this.i32Val = i32Val;
            return this;
        }
    
        public com.facebook.thrift.op.I32Patch getI32Val() { return i32Val; }
    
            @com.facebook.swift.codec.ThriftField(value=5, name="i64Val", requiredness=Requiredness.NONE)
        public Builder setI64Val(com.facebook.thrift.op.I64Patch i64Val) {
            this.i64Val = i64Val;
            return this;
        }
    
        public com.facebook.thrift.op.I64Patch getI64Val() { return i64Val; }
    
            @com.facebook.swift.codec.ThriftField(value=6, name="floatVal", requiredness=Requiredness.NONE)
        public Builder setFloatVal(com.facebook.thrift.op.FloatPatch floatVal) {
            this.floatVal = floatVal;
            return this;
        }
    
        public com.facebook.thrift.op.FloatPatch getFloatVal() { return floatVal; }
    
            @com.facebook.swift.codec.ThriftField(value=7, name="doubleVal", requiredness=Requiredness.NONE)
        public Builder setDoubleVal(com.facebook.thrift.op.DoublePatch doubleVal) {
            this.doubleVal = doubleVal;
            return this;
        }
    
        public com.facebook.thrift.op.DoublePatch getDoubleVal() { return doubleVal; }
    
            @com.facebook.swift.codec.ThriftField(value=8, name="stringVal", requiredness=Requiredness.NONE)
        public Builder setStringVal(com.facebook.thrift.op.StringPatch stringVal) {
            this.stringVal = stringVal;
            return this;
        }
    
        public com.facebook.thrift.op.StringPatch getStringVal() { return stringVal; }
    
            @com.facebook.swift.codec.ThriftField(value=9, name="binaryVal", requiredness=Requiredness.NONE)
        public Builder setBinaryVal(com.facebook.thrift.op.BinaryPatch binaryVal) {
            this.binaryVal = binaryVal;
            return this;
        }
    
        public com.facebook.thrift.op.BinaryPatch getBinaryVal() { return binaryVal; }
    
            @com.facebook.swift.codec.ThriftField(value=11, name="optBoolVal", requiredness=Requiredness.NONE)
        public Builder setOptBoolVal(com.facebook.thrift.op.OptionalBoolPatch optBoolVal) {
            this.optBoolVal = optBoolVal;
            return this;
        }
    
        public com.facebook.thrift.op.OptionalBoolPatch getOptBoolVal() { return optBoolVal; }
    
            @com.facebook.swift.codec.ThriftField(value=12, name="optByteVal", requiredness=Requiredness.NONE)
        public Builder setOptByteVal(com.facebook.thrift.op.OptionalBytePatch optByteVal) {
            this.optByteVal = optByteVal;
            return this;
        }
    
        public com.facebook.thrift.op.OptionalBytePatch getOptByteVal() { return optByteVal; }
    
            @com.facebook.swift.codec.ThriftField(value=13, name="optI16Val", requiredness=Requiredness.NONE)
        public Builder setOptI16Val(com.facebook.thrift.op.OptionalI16Patch optI16Val) {
            this.optI16Val = optI16Val;
            return this;
        }
    
        public com.facebook.thrift.op.OptionalI16Patch getOptI16Val() { return optI16Val; }
    
            @com.facebook.swift.codec.ThriftField(value=14, name="optI32Val", requiredness=Requiredness.NONE)
        public Builder setOptI32Val(com.facebook.thrift.op.OptionalI32Patch optI32Val) {
            this.optI32Val = optI32Val;
            return this;
        }
    
        public com.facebook.thrift.op.OptionalI32Patch getOptI32Val() { return optI32Val; }
    
            @com.facebook.swift.codec.ThriftField(value=15, name="optI64Val", requiredness=Requiredness.NONE)
        public Builder setOptI64Val(com.facebook.thrift.op.OptionalI64Patch optI64Val) {
            this.optI64Val = optI64Val;
            return this;
        }
    
        public com.facebook.thrift.op.OptionalI64Patch getOptI64Val() { return optI64Val; }
    
            @com.facebook.swift.codec.ThriftField(value=16, name="optFloatVal", requiredness=Requiredness.NONE)
        public Builder setOptFloatVal(com.facebook.thrift.op.OptionalFloatPatch optFloatVal) {
            this.optFloatVal = optFloatVal;
            return this;
        }
    
        public com.facebook.thrift.op.OptionalFloatPatch getOptFloatVal() { return optFloatVal; }
    
            @com.facebook.swift.codec.ThriftField(value=17, name="optDoubleVal", requiredness=Requiredness.NONE)
        public Builder setOptDoubleVal(com.facebook.thrift.op.OptionalDoublePatch optDoubleVal) {
            this.optDoubleVal = optDoubleVal;
            return this;
        }
    
        public com.facebook.thrift.op.OptionalDoublePatch getOptDoubleVal() { return optDoubleVal; }
    
            @com.facebook.swift.codec.ThriftField(value=18, name="optStringVal", requiredness=Requiredness.NONE)
        public Builder setOptStringVal(com.facebook.thrift.op.OptionalStringPatch optStringVal) {
            this.optStringVal = optStringVal;
            return this;
        }
    
        public com.facebook.thrift.op.OptionalStringPatch getOptStringVal() { return optStringVal; }
    
            @com.facebook.swift.codec.ThriftField(value=19, name="optBinaryVal", requiredness=Requiredness.NONE)
        public Builder setOptBinaryVal(com.facebook.thrift.op.OptionalBinaryPatch optBinaryVal) {
            this.optBinaryVal = optBinaryVal;
            return this;
        }
    
        public com.facebook.thrift.op.OptionalBinaryPatch getOptBinaryVal() { return optBinaryVal; }
    
        public Builder() { }
        public Builder(MyStructPatch other) {
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
        public MyStructPatch build() {
            MyStructPatch result = new MyStructPatch (
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
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("MyStructPatch");
    private final com.facebook.thrift.op.BoolPatch boolVal;
    public static final int _BOOLVAL = 1;
    private static final TField BOOL_VAL_FIELD_DESC = new TField("boolVal", TType.STRUCT, (short)1);
        private final com.facebook.thrift.op.BytePatch byteVal;
    public static final int _BYTEVAL = 2;
    private static final TField BYTE_VAL_FIELD_DESC = new TField("byteVal", TType.STRUCT, (short)2);
        private final com.facebook.thrift.op.I16Patch i16Val;
    public static final int _I16VAL = 3;
    private static final TField I16_VAL_FIELD_DESC = new TField("i16Val", TType.STRUCT, (short)3);
        private final com.facebook.thrift.op.I32Patch i32Val;
    public static final int _I32VAL = 4;
    private static final TField I32_VAL_FIELD_DESC = new TField("i32Val", TType.STRUCT, (short)4);
        private final com.facebook.thrift.op.I64Patch i64Val;
    public static final int _I64VAL = 5;
    private static final TField I64_VAL_FIELD_DESC = new TField("i64Val", TType.STRUCT, (short)5);
        private final com.facebook.thrift.op.FloatPatch floatVal;
    public static final int _FLOATVAL = 6;
    private static final TField FLOAT_VAL_FIELD_DESC = new TField("floatVal", TType.STRUCT, (short)6);
        private final com.facebook.thrift.op.DoublePatch doubleVal;
    public static final int _DOUBLEVAL = 7;
    private static final TField DOUBLE_VAL_FIELD_DESC = new TField("doubleVal", TType.STRUCT, (short)7);
        private final com.facebook.thrift.op.StringPatch stringVal;
    public static final int _STRINGVAL = 8;
    private static final TField STRING_VAL_FIELD_DESC = new TField("stringVal", TType.STRUCT, (short)8);
        private final com.facebook.thrift.op.BinaryPatch binaryVal;
    public static final int _BINARYVAL = 9;
    private static final TField BINARY_VAL_FIELD_DESC = new TField("binaryVal", TType.STRUCT, (short)9);
        private final com.facebook.thrift.op.OptionalBoolPatch optBoolVal;
    public static final int _OPTBOOLVAL = 11;
    private static final TField OPT_BOOL_VAL_FIELD_DESC = new TField("optBoolVal", TType.STRUCT, (short)11);
        private final com.facebook.thrift.op.OptionalBytePatch optByteVal;
    public static final int _OPTBYTEVAL = 12;
    private static final TField OPT_BYTE_VAL_FIELD_DESC = new TField("optByteVal", TType.STRUCT, (short)12);
        private final com.facebook.thrift.op.OptionalI16Patch optI16Val;
    public static final int _OPTI16VAL = 13;
    private static final TField OPT_I16_VAL_FIELD_DESC = new TField("optI16Val", TType.STRUCT, (short)13);
        private final com.facebook.thrift.op.OptionalI32Patch optI32Val;
    public static final int _OPTI32VAL = 14;
    private static final TField OPT_I32_VAL_FIELD_DESC = new TField("optI32Val", TType.STRUCT, (short)14);
        private final com.facebook.thrift.op.OptionalI64Patch optI64Val;
    public static final int _OPTI64VAL = 15;
    private static final TField OPT_I64_VAL_FIELD_DESC = new TField("optI64Val", TType.STRUCT, (short)15);
        private final com.facebook.thrift.op.OptionalFloatPatch optFloatVal;
    public static final int _OPTFLOATVAL = 16;
    private static final TField OPT_FLOAT_VAL_FIELD_DESC = new TField("optFloatVal", TType.STRUCT, (short)16);
        private final com.facebook.thrift.op.OptionalDoublePatch optDoubleVal;
    public static final int _OPTDOUBLEVAL = 17;
    private static final TField OPT_DOUBLE_VAL_FIELD_DESC = new TField("optDoubleVal", TType.STRUCT, (short)17);
        private final com.facebook.thrift.op.OptionalStringPatch optStringVal;
    public static final int _OPTSTRINGVAL = 18;
    private static final TField OPT_STRING_VAL_FIELD_DESC = new TField("optStringVal", TType.STRUCT, (short)18);
        private final com.facebook.thrift.op.OptionalBinaryPatch optBinaryVal;
    public static final int _OPTBINARYVAL = 19;
    private static final TField OPT_BINARY_VAL_FIELD_DESC = new TField("optBinaryVal", TType.STRUCT, (short)19);
    static {
      NAMES_TO_IDS.put("boolVal", 1);
      THRIFT_NAMES_TO_IDS.put("boolVal", 1);
      FIELD_METADATA.put(1, BOOL_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("byteVal", 2);
      THRIFT_NAMES_TO_IDS.put("byteVal", 2);
      FIELD_METADATA.put(2, BYTE_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("i16Val", 3);
      THRIFT_NAMES_TO_IDS.put("i16Val", 3);
      FIELD_METADATA.put(3, I16_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("i32Val", 4);
      THRIFT_NAMES_TO_IDS.put("i32Val", 4);
      FIELD_METADATA.put(4, I32_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("i64Val", 5);
      THRIFT_NAMES_TO_IDS.put("i64Val", 5);
      FIELD_METADATA.put(5, I64_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("floatVal", 6);
      THRIFT_NAMES_TO_IDS.put("floatVal", 6);
      FIELD_METADATA.put(6, FLOAT_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("doubleVal", 7);
      THRIFT_NAMES_TO_IDS.put("doubleVal", 7);
      FIELD_METADATA.put(7, DOUBLE_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("stringVal", 8);
      THRIFT_NAMES_TO_IDS.put("stringVal", 8);
      FIELD_METADATA.put(8, STRING_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("binaryVal", 9);
      THRIFT_NAMES_TO_IDS.put("binaryVal", 9);
      FIELD_METADATA.put(9, BINARY_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optBoolVal", 11);
      THRIFT_NAMES_TO_IDS.put("optBoolVal", 11);
      FIELD_METADATA.put(11, OPT_BOOL_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optByteVal", 12);
      THRIFT_NAMES_TO_IDS.put("optByteVal", 12);
      FIELD_METADATA.put(12, OPT_BYTE_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optI16Val", 13);
      THRIFT_NAMES_TO_IDS.put("optI16Val", 13);
      FIELD_METADATA.put(13, OPT_I16_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optI32Val", 14);
      THRIFT_NAMES_TO_IDS.put("optI32Val", 14);
      FIELD_METADATA.put(14, OPT_I32_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optI64Val", 15);
      THRIFT_NAMES_TO_IDS.put("optI64Val", 15);
      FIELD_METADATA.put(15, OPT_I64_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optFloatVal", 16);
      THRIFT_NAMES_TO_IDS.put("optFloatVal", 16);
      FIELD_METADATA.put(16, OPT_FLOAT_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optDoubleVal", 17);
      THRIFT_NAMES_TO_IDS.put("optDoubleVal", 17);
      FIELD_METADATA.put(17, OPT_DOUBLE_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optStringVal", 18);
      THRIFT_NAMES_TO_IDS.put("optStringVal", 18);
      FIELD_METADATA.put(18, OPT_STRING_VAL_FIELD_DESC);
      NAMES_TO_IDS.put("optBinaryVal", 19);
      THRIFT_NAMES_TO_IDS.put("optBinaryVal", 19);
      FIELD_METADATA.put(19, OPT_BINARY_VAL_FIELD_DESC);
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="boolVal", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.BoolPatch getBoolVal() { return boolVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=2, name="byteVal", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.BytePatch getByteVal() { return byteVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=3, name="i16Val", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.I16Patch getI16Val() { return i16Val; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=4, name="i32Val", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.I32Patch getI32Val() { return i32Val; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=5, name="i64Val", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.I64Patch getI64Val() { return i64Val; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=6, name="floatVal", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.FloatPatch getFloatVal() { return floatVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=7, name="doubleVal", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.DoublePatch getDoubleVal() { return doubleVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=8, name="stringVal", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.StringPatch getStringVal() { return stringVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=9, name="binaryVal", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.BinaryPatch getBinaryVal() { return binaryVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=11, name="optBoolVal", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.OptionalBoolPatch getOptBoolVal() { return optBoolVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=12, name="optByteVal", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.OptionalBytePatch getOptByteVal() { return optByteVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=13, name="optI16Val", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.OptionalI16Patch getOptI16Val() { return optI16Val; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=14, name="optI32Val", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.OptionalI32Patch getOptI32Val() { return optI32Val; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=15, name="optI64Val", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.OptionalI64Patch getOptI64Val() { return optI64Val; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=16, name="optFloatVal", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.OptionalFloatPatch getOptFloatVal() { return optFloatVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=17, name="optDoubleVal", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.OptionalDoublePatch getOptDoubleVal() { return optDoubleVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=18, name="optStringVal", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.OptionalStringPatch getOptStringVal() { return optStringVal; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=19, name="optBinaryVal", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.OptionalBinaryPatch getOptBinaryVal() { return optBinaryVal; }
    
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
    
        MyStructPatch other = (MyStructPatch)o;
    
        return
            Objects.equals(boolVal, other.boolVal) &&
            Objects.equals(byteVal, other.byteVal) &&
            Objects.equals(i16Val, other.i16Val) &&
            Objects.equals(i32Val, other.i32Val) &&
            Objects.equals(i64Val, other.i64Val) &&
            Objects.equals(floatVal, other.floatVal) &&
            Objects.equals(doubleVal, other.doubleVal) &&
            Objects.equals(stringVal, other.stringVal) &&
            Objects.equals(binaryVal, other.binaryVal) &&
            Objects.equals(optBoolVal, other.optBoolVal) &&
            Objects.equals(optByteVal, other.optByteVal) &&
            Objects.equals(optI16Val, other.optI16Val) &&
            Objects.equals(optI32Val, other.optI32Val) &&
            Objects.equals(optI64Val, other.optI64Val) &&
            Objects.equals(optFloatVal, other.optFloatVal) &&
            Objects.equals(optDoubleVal, other.optDoubleVal) &&
            Objects.equals(optStringVal, other.optStringVal) &&
            Objects.equals(optBinaryVal, other.optBinaryVal) &&
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
    
    
    public static com.facebook.thrift.payload.Reader<MyStructPatch> asReader() {
      return MyStructPatch::read0;
    }
    
    public static MyStructPatch read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(MyStructPatch.NAMES_TO_IDS, MyStructPatch.THRIFT_NAMES_TO_IDS, MyStructPatch.FIELD_METADATA);
      MyStructPatch.Builder builder = new MyStructPatch.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _BOOLVAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.BoolPatch boolVal = com.facebook.thrift.op.BoolPatch.read0(oprot);
            builder.setBoolVal(boolVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _BYTEVAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.BytePatch byteVal = com.facebook.thrift.op.BytePatch.read0(oprot);
            builder.setByteVal(byteVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _I16VAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.I16Patch i16Val = com.facebook.thrift.op.I16Patch.read0(oprot);
            builder.setI16Val(i16Val);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _I32VAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.I32Patch i32Val = com.facebook.thrift.op.I32Patch.read0(oprot);
            builder.setI32Val(i32Val);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _I64VAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.I64Patch i64Val = com.facebook.thrift.op.I64Patch.read0(oprot);
            builder.setI64Val(i64Val);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _FLOATVAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.FloatPatch floatVal = com.facebook.thrift.op.FloatPatch.read0(oprot);
            builder.setFloatVal(floatVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _DOUBLEVAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.DoublePatch doubleVal = com.facebook.thrift.op.DoublePatch.read0(oprot);
            builder.setDoubleVal(doubleVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _STRINGVAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.StringPatch stringVal = com.facebook.thrift.op.StringPatch.read0(oprot);
            builder.setStringVal(stringVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _BINARYVAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.BinaryPatch binaryVal = com.facebook.thrift.op.BinaryPatch.read0(oprot);
            builder.setBinaryVal(binaryVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTBOOLVAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.OptionalBoolPatch optBoolVal = com.facebook.thrift.op.OptionalBoolPatch.read0(oprot);
            builder.setOptBoolVal(optBoolVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTBYTEVAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.OptionalBytePatch optByteVal = com.facebook.thrift.op.OptionalBytePatch.read0(oprot);
            builder.setOptByteVal(optByteVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTI16VAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.OptionalI16Patch optI16Val = com.facebook.thrift.op.OptionalI16Patch.read0(oprot);
            builder.setOptI16Val(optI16Val);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTI32VAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.OptionalI32Patch optI32Val = com.facebook.thrift.op.OptionalI32Patch.read0(oprot);
            builder.setOptI32Val(optI32Val);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTI64VAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.OptionalI64Patch optI64Val = com.facebook.thrift.op.OptionalI64Patch.read0(oprot);
            builder.setOptI64Val(optI64Val);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTFLOATVAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.OptionalFloatPatch optFloatVal = com.facebook.thrift.op.OptionalFloatPatch.read0(oprot);
            builder.setOptFloatVal(optFloatVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTDOUBLEVAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.OptionalDoublePatch optDoubleVal = com.facebook.thrift.op.OptionalDoublePatch.read0(oprot);
            builder.setOptDoubleVal(optDoubleVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTSTRINGVAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.OptionalStringPatch optStringVal = com.facebook.thrift.op.OptionalStringPatch.read0(oprot);
            builder.setOptStringVal(optStringVal);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTBINARYVAL:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.OptionalBinaryPatch optBinaryVal = com.facebook.thrift.op.OptionalBinaryPatch.read0(oprot);
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
      if (this.boolVal != null) {
        oprot.writeFieldBegin(BOOL_VAL_FIELD_DESC);
        this.boolVal.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.byteVal != null) {
        oprot.writeFieldBegin(BYTE_VAL_FIELD_DESC);
        this.byteVal.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.i16Val != null) {
        oprot.writeFieldBegin(I16_VAL_FIELD_DESC);
        this.i16Val.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.i32Val != null) {
        oprot.writeFieldBegin(I32_VAL_FIELD_DESC);
        this.i32Val.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.i64Val != null) {
        oprot.writeFieldBegin(I64_VAL_FIELD_DESC);
        this.i64Val.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.floatVal != null) {
        oprot.writeFieldBegin(FLOAT_VAL_FIELD_DESC);
        this.floatVal.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.doubleVal != null) {
        oprot.writeFieldBegin(DOUBLE_VAL_FIELD_DESC);
        this.doubleVal.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.stringVal != null) {
        oprot.writeFieldBegin(STRING_VAL_FIELD_DESC);
        this.stringVal.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.binaryVal != null) {
        oprot.writeFieldBegin(BINARY_VAL_FIELD_DESC);
        this.binaryVal.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.optBoolVal != null) {
        oprot.writeFieldBegin(OPT_BOOL_VAL_FIELD_DESC);
        this.optBoolVal.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.optByteVal != null) {
        oprot.writeFieldBegin(OPT_BYTE_VAL_FIELD_DESC);
        this.optByteVal.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.optI16Val != null) {
        oprot.writeFieldBegin(OPT_I16_VAL_FIELD_DESC);
        this.optI16Val.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.optI32Val != null) {
        oprot.writeFieldBegin(OPT_I32_VAL_FIELD_DESC);
        this.optI32Val.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.optI64Val != null) {
        oprot.writeFieldBegin(OPT_I64_VAL_FIELD_DESC);
        this.optI64Val.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.optFloatVal != null) {
        oprot.writeFieldBegin(OPT_FLOAT_VAL_FIELD_DESC);
        this.optFloatVal.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.optDoubleVal != null) {
        oprot.writeFieldBegin(OPT_DOUBLE_VAL_FIELD_DESC);
        this.optDoubleVal.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.optStringVal != null) {
        oprot.writeFieldBegin(OPT_STRING_VAL_FIELD_DESC);
        this.optStringVal.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.optBinaryVal != null) {
        oprot.writeFieldBegin(OPT_BINARY_VAL_FIELD_DESC);
        this.optBinaryVal.write0(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _MyStructPatchLazy {
        private static final MyStructPatch _DEFAULT = new MyStructPatch.Builder().build();
    }
    
    public static MyStructPatch defaultInstance() {
        return  _MyStructPatchLazy._DEFAULT;
    }
}
