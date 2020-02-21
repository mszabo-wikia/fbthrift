/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.includes.includes;

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
@ThriftStruct(value="Included", builder=Included.Builder.class)
public final class Included {
    @ThriftConstructor
    public Included(
        @ThriftField(value=1, name="MyIntField", requiredness=Requiredness.NONE) final long myIntField,
        @ThriftField(value=2, name="MyTransitiveField", requiredness=Requiredness.NONE) final test.fixtures.includes.transitive.Foo myTransitiveField
    ) {
        this.myIntField = myIntField;
        this.myTransitiveField = myTransitiveField;
    }
    
    @ThriftConstructor
    protected Included() {
      this.myIntField = 0L;
      this.myTransitiveField = null;
    }
    
    public static class Builder {
        private long myIntField;
        @ThriftField(value=1, name="MyIntField", requiredness=Requiredness.NONE)
        public Builder setMyIntField(long myIntField) {
            this.myIntField = myIntField;
            return this;
        }
        private test.fixtures.includes.transitive.Foo myTransitiveField;
        @ThriftField(value=2, name="MyTransitiveField", requiredness=Requiredness.NONE)
        public Builder setMyTransitiveField(test.fixtures.includes.transitive.Foo myTransitiveField) {
            this.myTransitiveField = myTransitiveField;
            return this;
        }
    
        public Builder() { }
        public Builder(Included other) {
            this.myIntField = other.myIntField;
            this.myTransitiveField = other.myTransitiveField;
        }
    
        @ThriftConstructor
        public Included build() {
            return new Included (
                this.myIntField,
                this.myTransitiveField
            );
        }
    }
    
    private static final TStruct STRUCT_DESC = new TStruct("Included");
    private final long myIntField;
    public static final int _MYINTFIELD = 1;
    private static final TField MY_INT_FIELD_FIELD_DESC = new TField("myIntField", TType.I64, (short)1);
    private final test.fixtures.includes.transitive.Foo myTransitiveField;
    public static final int _MYTRANSITIVEFIELD = 2;
    private static final TField MY_TRANSITIVE_FIELD_FIELD_DESC = new TField("myTransitiveField", TType.STRUCT, (short)2);

    
    @ThriftField(value=1, name="MyIntField", requiredness=Requiredness.NONE)
    public long getMyIntField() { return myIntField; }
        
    @ThriftField(value=2, name="MyTransitiveField", requiredness=Requiredness.NONE)
    public test.fixtures.includes.transitive.Foo getMyTransitiveField() { return myTransitiveField; }
    
    @Override
    public String toString() {
        return toStringHelper(this)
            .add("myIntField", myIntField)
            .add("myTransitiveField", myTransitiveField)
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
    
        Included other = (Included)o;
    
        return
            Objects.equals(myIntField, other.myIntField) &&
            Objects.equals(myTransitiveField, other.myTransitiveField) &&
            true;
    }
    
    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            myIntField,
            myTransitiveField
        });
    }
    
    
      // Currently, the read0 method cannot read metadatamap for JSON styled serialization.
      // Perhaps, it will be implemented in the future!
    public static Included read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin();
      Included.Builder builder = new Included.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _MYINTFIELD:
          if (__field.type == TType.I64) {
            long myIntField = oprot.readI64();
            builder.setMyIntField(myIntField);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _MYTRANSITIVEFIELD:
          if (__field.type == TType.STRUCT) {
            test.fixtures.includes.transitive.Foo myTransitiveField = test.fixtures.includes.transitive.Foo.read0(oprot);
            builder.setMyTransitiveField(myTransitiveField);
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
      oprot.writeFieldBegin(MY_INT_FIELD_FIELD_DESC);
      oprot.writeI64(this.myIntField);
      oprot.writeFieldEnd();
      if (this.myTransitiveField != null) {
        oprot.writeFieldBegin(MY_TRANSITIVE_FIELD_FIELD_DESC);
        this.myTransitiveField.write0(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
