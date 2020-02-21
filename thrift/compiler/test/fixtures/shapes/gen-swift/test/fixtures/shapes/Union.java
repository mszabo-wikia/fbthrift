/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.shapes;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.async.*;
import org.apache.thrift.server.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftUnion("Union")
public final class Union {
    private static final Map<Short, String> ID_TO_THRIFT_NAME = new HashMap();
    static {
      ID_TO_THRIFT_NAME.put((short) 1, "intValue");
      ID_TO_THRIFT_NAME.put((short) 5, "stringValue");
    }
    private Object value;
    private short id;
    
    private static final TStruct STRUCT_DESC = new TStruct("Union");
    public static final int _INTVALUE = 1;
    private static final TField INT_VALUE_FIELD_DESC = new TField("intValue", TType.I64, (short)1);
    public static final int _STRINGVALUE = 5;
    private static final TField STRING_VALUE_FIELD_DESC = new TField("stringValue", TType.STRING, (short)5);
    
    @ThriftConstructor
    public Union() {
    }
    
    @ThriftConstructor
    @Deprecated
    public Union(final long intValue) {
        this.value = intValue;
        this.id = 1;
    }
    
    @ThriftConstructor
    @Deprecated
    public Union(final String stringValue) {
        this.value = stringValue;
        this.id = 5;
    }
    
    public static Union fromIntValue(final long intValue) {
        Union res = new Union();
        res.value = intValue;
        res.id = 1;
        return res;
    }
    
    public static Union fromStringValue(final String stringValue) {
        Union res = new Union();
        res.value = stringValue;
        res.id = 5;
        return res;
    }
    

    @ThriftField(value=1, name="intValue", requiredness=Requiredness.NONE)
    public long getIntValue() {
        if (this.id != 1) {
            throw new IllegalStateException("Not a intValue element!");
        }
        return (long) value;
    }

    public boolean isSetIntValue() {
        return this.id == 1;
    }

    @ThriftField(value=5, name="stringValue", requiredness=Requiredness.NONE)
    public String getStringValue() {
        if (this.id != 5) {
            throw new IllegalStateException("Not a stringValue element!");
        }
        return (String) value;
    }

    public boolean isSetStringValue() {
        return this.id == 5;
    }

    @ThriftUnionId
    public short getThriftId() {
        return this.id;
    }

    public String getThriftName() {
        return ID_TO_THRIFT_NAME.get(this.id);
    }

    public void accept(Visitor visitor) {
        if (isSetIntValue()) {
            visitor.visitIntValue(getIntValue());
            return;
        }
        if (isSetStringValue()) {
            visitor.visitStringValue(getStringValue());
            return;
        }
    }

    @Override
    public String toString() {
        return toStringHelper(this)
            .add("value", value)
            .add("id", id)
            .add("name", getThriftName())
            .add("type", value == null ? "<null>" : value.getClass().getSimpleName())
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

        Union other = (Union)o;

        return Objects.equals(this.id, other.id)
                && Objects.deepEquals(this.value, other.value);
    }

    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            id,
            value,
        });
    }

    public interface Visitor {
        void visitIntValue(long intValue);
        void visitStringValue(String stringValue);
    }

    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (this.id != 0 && this.value == null ){
         throw new TProtocolException("Cannot write a Union with marked-as-set but null value!");
      }
      switch (this.id) {
      case _INTVALUE: {
        oprot.writeFieldBegin(INT_VALUE_FIELD_DESC);
        long intValue = (long)this.value;
        oprot.writeI64(intValue);
        oprot.writeFieldEnd();
        break;
      }
      case _STRINGVALUE: {
        oprot.writeFieldBegin(STRING_VALUE_FIELD_DESC);
        String stringValue = (String)this.value;
        oprot.writeString(stringValue);
        oprot.writeFieldEnd();
        break;
      }
      default:
          throw new IllegalStateException("Cannot write union with unknown field ");
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    public static Union read0(TProtocol oprot) throws TException {
      Union res = new Union();
      res.value = null;
      res.id = (short) 0;
      oprot.readStructBegin();
      TField __field = oprot.readFieldBegin();
      if (__field.type != TType.STOP) {
          switch (__field.id) {
          case _INTVALUE:
            if (__field.type == INT_VALUE_FIELD_DESC.type) {
              long intValue = oprot.readI64();
              res.value = intValue;
            }
            break;
          case _STRINGVALUE:
            if (__field.type == STRING_VALUE_FIELD_DESC.type) {
              String stringValue = oprot.readString();
              res.value = stringValue;
            }
            break;
          }
          TProtocolUtil.skip(oprot, __field.type);
        if (res.value != null) {
          res.id = __field.id;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return res;
    }
}
