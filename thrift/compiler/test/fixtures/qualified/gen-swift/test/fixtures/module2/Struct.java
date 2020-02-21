/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.module2;

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
@ThriftStruct(value="Struct", builder=Struct.Builder.class)
public final class Struct {
    @ThriftConstructor
    public Struct(
        @ThriftField(value=1, name="first", requiredness=Requiredness.NONE) final test.fixtures.module0.Struct first,
        @ThriftField(value=2, name="second", requiredness=Requiredness.NONE) final test.fixtures.module1.Struct second
    ) {
        this.first = first;
        this.second = second;
    }
    
    @ThriftConstructor
    protected Struct() {
      this.first = null;
      this.second = null;
    }
    
    public static class Builder {
        private test.fixtures.module0.Struct first;
        @ThriftField(value=1, name="first", requiredness=Requiredness.NONE)
        public Builder setFirst(test.fixtures.module0.Struct first) {
            this.first = first;
            return this;
        }
        private test.fixtures.module1.Struct second;
        @ThriftField(value=2, name="second", requiredness=Requiredness.NONE)
        public Builder setSecond(test.fixtures.module1.Struct second) {
            this.second = second;
            return this;
        }
    
        public Builder() { }
        public Builder(Struct other) {
            this.first = other.first;
            this.second = other.second;
        }
    
        @ThriftConstructor
        public Struct build() {
            return new Struct (
                this.first,
                this.second
            );
        }
    }
    
    private static final TStruct STRUCT_DESC = new TStruct("Struct");
    private final test.fixtures.module0.Struct first;
    public static final int _FIRST = 1;
    private static final TField FIRST_FIELD_DESC = new TField("first", TType.STRUCT, (short)1);
    private final test.fixtures.module1.Struct second;
    public static final int _SECOND = 2;
    private static final TField SECOND_FIELD_DESC = new TField("second", TType.STRUCT, (short)2);

    
    @ThriftField(value=1, name="first", requiredness=Requiredness.NONE)
    public test.fixtures.module0.Struct getFirst() { return first; }
        
    @ThriftField(value=2, name="second", requiredness=Requiredness.NONE)
    public test.fixtures.module1.Struct getSecond() { return second; }
    
    @Override
    public String toString() {
        return toStringHelper(this)
            .add("first", first)
            .add("second", second)
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
    
        Struct other = (Struct)o;
    
        return
            Objects.equals(first, other.first) &&
            Objects.equals(second, other.second) &&
            true;
    }
    
    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            first,
            second
        });
    }
    
    
      // Currently, the read0 method cannot read metadatamap for JSON styled serialization.
      // Perhaps, it will be implemented in the future!
    public static Struct read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin();
      Struct.Builder builder = new Struct.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _FIRST:
          if (__field.type == TType.STRUCT) {
            test.fixtures.module0.Struct first = test.fixtures.module0.Struct.read0(oprot);
            builder.setFirst(first);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _SECOND:
          if (__field.type == TType.STRUCT) {
            test.fixtures.module1.Struct second = test.fixtures.module1.Struct.read0(oprot);
            builder.setSecond(second);
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
      if (this.first != null) {
        oprot.writeFieldBegin(FIRST_FIELD_DESC);
        this.first.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.second != null) {
        oprot.writeFieldBegin(SECOND_FIELD_DESC);
        this.second.write0(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
