/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.annotation;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.async.*;
import org.apache.thrift.meta_data.*;
import org.apache.thrift.server.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import org.apache.thrift.meta_data.FieldMetaData;
import org.apache.thrift.meta_data.FieldValueMetaData;
import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftStruct(value="MyStruct", builder=MyStruct.Builder.class) @com.foo.Enabled @com.bar.AnotherAnnotation(val = 1) 
public final class MyStruct {
    @ThriftConstructor
    public MyStruct(
        @ThriftField(value=1, name="intField", requiredness=Requiredness.NONE) final long intField,
        @ThriftField(value=2, name="stringField", requiredness=Requiredness.NONE) final String stringField,
        @ThriftField(value=3, name="detailField", requiredness=Requiredness.NONE) final String detailField,
        @ThriftField(value=4, name="detailMap", requiredness=Requiredness.NONE) final com.foo.FastIntLongMap detailMap
    ) {
        this.intField = intField;
        this.stringField = stringField;
        this.detailField = detailField;
        this.detailMap = detailMap;
    }
    
    @ThriftConstructor
    protected MyStruct() {
      this.intField = 0L;
      this.stringField = null;
      this.detailField = null;
      this.detailMap = null;
    }
    
    public static class Builder {
        private long intField;
        @ThriftField(value=1, name="intField", requiredness=Requiredness.NONE)
        public Builder setIntField(long intField) {
            this.intField = intField;
            return this;
        }
        private String stringField;
        @ThriftField(value=2, name="stringField", requiredness=Requiredness.NONE)
        public Builder setStringField(String stringField) {
            this.stringField = stringField;
            return this;
        }
        private String detailField;
        @ThriftField(value=3, name="detailField", requiredness=Requiredness.NONE)
        public Builder setDetailField(String detailField) {
            this.detailField = detailField;
            return this;
        }
        private com.foo.FastIntLongMap detailMap;
        @ThriftField(value=4, name="detailMap", requiredness=Requiredness.NONE)
        public Builder setDetailMap(com.foo.FastIntLongMap detailMap) {
            this.detailMap = detailMap;
            return this;
        }
    
        public Builder() { }
        public Builder(MyStruct other) {
            this.intField = other.intField;
            this.stringField = other.stringField;
            this.detailField = other.detailField;
            this.detailMap = other.detailMap;
        }
    
        @ThriftConstructor
        public MyStruct build() {
            return new MyStruct (
                this.intField,
                this.stringField,
                this.detailField,
                this.detailMap
            );
        }
    }
    
    private static final TStruct STRUCT_DESC = new TStruct("MyStruct");
    private final long intField;
    public static final int _INTFIELD = 1;
    private static final TField INT_FIELD_FIELD_DESC = new TField("intField", TType.I64, (short)1);
    private final String stringField;
    public static final int _STRINGFIELD = 2;
    private static final TField STRING_FIELD_FIELD_DESC = new TField("stringField", TType.STRING, (short)2);
    @com.foo.Ignored private final String detailField;
    public static final int _DETAILFIELD = 3;
    private static final TField DETAIL_FIELD_FIELD_DESC = new TField("detailField", TType.STRING, (short)3);
    @com.foo.Ignored private final com.foo.FastIntLongMap detailMap;
    public static final int _DETAILMAP = 4;
    private static final TField DETAIL_MAP_FIELD_DESC = new TField("detailMap", TType.MAP, (short)4);

    
    @ThriftField(value=1, name="intField", requiredness=Requiredness.NONE)
    public long getIntField() { return intField; }
        
    @ThriftField(value=2, name="stringField", requiredness=Requiredness.NONE)
    public String getStringField() { return stringField; }
        
    @ThriftField(value=3, name="detailField", requiredness=Requiredness.NONE)
    public String getDetailField() { return detailField; }
        
    @ThriftField(value=4, name="detailMap", requiredness=Requiredness.NONE)
    public com.foo.FastIntLongMap getDetailMap() { return detailMap; }
    
    @Override
    public String toString() {
        return toStringHelper(this)
            .add("intField", intField)
            .add("stringField", stringField)
            .add("detailField", detailField)
            .add("detailMap", detailMap)
            .toString();
    }
    
    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        MyStruct other = (MyStruct)o;
    
        return
            Objects.equals(intField, other.intField) &&
            Objects.equals(stringField, other.stringField) &&
            Objects.equals(detailField, other.detailField) &&
            Objects.equals(detailMap, other.detailMap) &&
            true;
    }
    
    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            intField,
            stringField,
            detailField,
            detailMap
        });
    }
    
    
      // Currently, the read0 method cannot read metadatamap for JSON styled serialization.
      // Perhaps, it will be implemented in the future!
    public static MyStruct read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin();
      MyStruct.Builder builder = new MyStruct.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _INTFIELD:
          if (__field.type == TType.I64) {
            long intField = oprot.readI64();
            builder.setIntField(intField);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _STRINGFIELD:
          if (__field.type == TType.STRING) {
            String stringField = oprot.readString();
            builder.setStringField(stringField);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _DETAILFIELD:
          if (__field.type == TType.STRING) {
            String detailField = oprot.readString();
            builder.setDetailField(detailField);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _DETAILMAP:
          if (__field.type == TType.MAP) {
            com.foo.FastIntLongMap detailMap;
            {
            TMap _map1 = oprot.readMapBegin();
            com.foo.FastIntLongMap _iter1 = new com.foo.FastIntLongMap();
            detailMap = _iter1;
            if (_map1.size < 0) {  throw new TException("Using an unsupported Map, size is less than zero.");}
            for (int _i1 = 0; _i1 < _map1.size; ++_i1) {
                int _key1 = oprot.readI32();
                long _val1 = oprot.readI64();
                _iter1.put(_key1, _val1);
            }
            }
            oprot.readMapEnd();
            builder.setDetailMap(detailMap);
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
      oprot.writeFieldBegin(INT_FIELD_FIELD_DESC);
      oprot.writeI64(this.intField);
      oprot.writeFieldEnd();
      if (this.stringField != null) {
        oprot.writeFieldBegin(STRING_FIELD_FIELD_DESC);
        oprot.writeString(this.stringField);
        oprot.writeFieldEnd();
      }
      if (this.detailField != null) {
        oprot.writeFieldBegin(DETAIL_FIELD_FIELD_DESC);
        oprot.writeString(this.detailField);
        oprot.writeFieldEnd();
      }
      if (this.detailMap != null) {
        oprot.writeFieldBegin(DETAIL_MAP_FIELD_DESC);
        com.foo.FastIntLongMap _iter0 = this.detailMap;
        oprot.writeMapBegin(new TMap(TType.I32, TType.I64, _iter0.size()));
        for (Map.Entry<Integer, Long> _iter1 : _iter0.entrySet()) {
          oprot.writeI32(_iter1.getKey());
          oprot.writeI64(_iter1.getValue());
        }
        oprot.writeMapEnd();
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
