/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.adapter;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class DirectlyAdaptedStruct implements TBase, java.io.Serializable, Cloneable, Comparable<DirectlyAdaptedStruct> {
  private static final TStruct STRUCT_DESC = new TStruct("DirectlyAdaptedStruct");
  private static final TField DATA_FIELD_DESC = new TField("data", TType.I64, (short)1);

  public long data;
  public static final int DATA = 1;

  // isset id assignments
  private static final int __DATA_ISSET_ID = 0;
  private BitSet __isset_bit_vector = new BitSet(1);

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(DATA, new FieldMetaData("data", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.I64)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(DirectlyAdaptedStruct.class, metaDataMap);
  }

  public DirectlyAdaptedStruct() {
  }

  public DirectlyAdaptedStruct(
      long data) {
    this();
    this.data = data;
    setDataIsSet(true);
  }

  public static class Builder {
    private long data;

    BitSet __optional_isset = new BitSet(1);

    public Builder() {
    }

    public Builder setData(final long data) {
      this.data = data;
      __optional_isset.set(__DATA_ISSET_ID, true);
      return this;
    }

    public DirectlyAdaptedStruct build() {
      DirectlyAdaptedStruct result = new DirectlyAdaptedStruct();
      if (__optional_isset.get(__DATA_ISSET_ID)) {
        result.setData(this.data);
      }
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public DirectlyAdaptedStruct(DirectlyAdaptedStruct other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    this.data = TBaseHelper.deepCopy(other.data);
  }

  public DirectlyAdaptedStruct deepCopy() {
    return new DirectlyAdaptedStruct(this);
  }

  public long getData() {
    return this.data;
  }

  public DirectlyAdaptedStruct setData(long data) {
    this.data = data;
    setDataIsSet(true);
    return this;
  }

  public void unsetData() {
    __isset_bit_vector.clear(__DATA_ISSET_ID);
  }

  // Returns true if field data is set (has been assigned a value) and false otherwise
  public boolean isSetData() {
    return __isset_bit_vector.get(__DATA_ISSET_ID);
  }

  public void setDataIsSet(boolean __value) {
    __isset_bit_vector.set(__DATA_ISSET_ID, __value);
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case DATA:
      if (__value == null) {
        unsetData();
      } else {
        setData((Long)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case DATA:
      return new Long(getData());

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof DirectlyAdaptedStruct))
      return false;
    DirectlyAdaptedStruct that = (DirectlyAdaptedStruct)_that;

    if (!TBaseHelper.equalsNobinary(this.data, that.data)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {data});
  }

  @Override
  public int compareTo(DirectlyAdaptedStruct other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetData()).compareTo(other.isSetData());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(data, other.data);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case DATA:
          if (__field.type == TType.I64) {
            this.data = iprot.readI64();
            setDataIsSet(true);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    oprot.writeFieldBegin(DATA_FIELD_DESC);
    oprot.writeI64(this.data);
    oprot.writeFieldEnd();
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("DirectlyAdaptedStruct");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("data");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getData(), indent + 1, prettyPrint));
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}
