/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
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
public class OptionalI32Patch implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("OptionalI32Patch");
  private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
  private static final TField PATCH_FIELD_DESC = new TField("patch", TType.STRUCT, (short)3);
  private static final TField ENSURE_FIELD_DESC = new TField("ensure", TType.I32, (short)1);
  private static final TField PATCH_AFTER_FIELD_DESC = new TField("patchAfter", TType.STRUCT, (short)4);

  /**
   * If the optional value should be cleared. Applied first.
   */
  public final Boolean clear;
  /**
   * The patch to apply to any set value. Applied second.
   */
  public final I32Patch patch;
  /**
   * The value with which to initialize any unset value. Applied third.
   */
  public final Integer ensure;
  /**
   * The patch to apply to any set value, including newly set values. Applied fourth.
   */
  public final I32Patch patchAfter;
  public static final int CLEAR = 2;
  public static final int PATCH = 3;
  public static final int ENSURE = 1;
  public static final int PATCHAFTER = 4;

  public OptionalI32Patch(
      Boolean clear,
      I32Patch patch,
      Integer ensure,
      I32Patch patchAfter) {
    this.clear = clear;
    this.patch = patch;
    this.ensure = ensure;
    this.patchAfter = patchAfter;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public OptionalI32Patch(OptionalI32Patch other) {
    if (other.isSetClear()) {
      this.clear = TBaseHelper.deepCopy(other.clear);
    } else {
      this.clear = null;
    }
    if (other.isSetPatch()) {
      this.patch = TBaseHelper.deepCopy(other.patch);
    } else {
      this.patch = null;
    }
    if (other.isSetEnsure()) {
      this.ensure = TBaseHelper.deepCopy(other.ensure);
    } else {
      this.ensure = null;
    }
    if (other.isSetPatchAfter()) {
      this.patchAfter = TBaseHelper.deepCopy(other.patchAfter);
    } else {
      this.patchAfter = null;
    }
  }

  public OptionalI32Patch deepCopy() {
    return new OptionalI32Patch(this);
  }

  /**
   * If the optional value should be cleared. Applied first.
   */
  public Boolean isClear() {
    return this.clear;
  }

  // Returns true if field clear is set (has been assigned a value) and false otherwise
  public boolean isSetClear() {
    return this.clear != null;
  }

  /**
   * The patch to apply to any set value. Applied second.
   */
  public I32Patch getPatch() {
    return this.patch;
  }

  // Returns true if field patch is set (has been assigned a value) and false otherwise
  public boolean isSetPatch() {
    return this.patch != null;
  }

  /**
   * The value with which to initialize any unset value. Applied third.
   */
  public Integer getEnsure() {
    return this.ensure;
  }

  // Returns true if field ensure is set (has been assigned a value) and false otherwise
  public boolean isSetEnsure() {
    return this.ensure != null;
  }

  /**
   * The patch to apply to any set value, including newly set values. Applied fourth.
   */
  public I32Patch getPatchAfter() {
    return this.patchAfter;
  }

  // Returns true if field patchAfter is set (has been assigned a value) and false otherwise
  public boolean isSetPatchAfter() {
    return this.patchAfter != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof OptionalI32Patch))
      return false;
    OptionalI32Patch that = (OptionalI32Patch)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetClear(), that.isSetClear(), this.clear, that.clear)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPatch(), that.isSetPatch(), this.patch, that.patch)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetEnsure(), that.isSetEnsure(), this.ensure, that.ensure)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPatchAfter(), that.isSetPatchAfter(), this.patchAfter, that.patchAfter)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {clear, patch, ensure, patchAfter});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static OptionalI32Patch deserialize(TProtocol iprot) throws TException {
    Boolean tmp_clear = null;
    I32Patch tmp_patch = null;
    Integer tmp_ensure = null;
    I32Patch tmp_patchAfter = null;
    TField __field;
    iprot.readStructBegin();
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case CLEAR:
          if (__field.type == TType.BOOL) {
            tmp_clear = iprot.readBool();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATCH:
          if (__field.type == TType.STRUCT) {
            tmp_patch = I32Patch.deserialize(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ENSURE:
          if (__field.type == TType.I32) {
            tmp_ensure = iprot.readI32();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATCHAFTER:
          if (__field.type == TType.STRUCT) {
            tmp_patchAfter = I32Patch.deserialize(iprot);
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

    OptionalI32Patch _that;
    _that = new OptionalI32Patch(
      tmp_clear
      ,tmp_patch
      ,tmp_ensure
      ,tmp_patchAfter
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.ensure != null) {
      if (isSetEnsure()) {
        oprot.writeFieldBegin(ENSURE_FIELD_DESC);
        oprot.writeI32(this.ensure);
        oprot.writeFieldEnd();
      }
    }
    if (this.clear != null) {
      oprot.writeFieldBegin(CLEAR_FIELD_DESC);
      oprot.writeBool(this.clear);
      oprot.writeFieldEnd();
    }
    if (this.patch != null) {
      oprot.writeFieldBegin(PATCH_FIELD_DESC);
      this.patch.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.patchAfter != null) {
      oprot.writeFieldBegin(PATCH_AFTER_FIELD_DESC);
      this.patchAfter.write(oprot);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}

