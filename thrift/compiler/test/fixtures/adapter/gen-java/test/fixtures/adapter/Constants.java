/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.adapter;

import com.facebook.swift.codec.*;
import com.google.common.collect.*;
import java.util.*;

@SwiftGenerated
public final class Constants {
    private Constants() {}

    public static final int VAR1 = 10;

    public static final String VAR2 = "20";

    public static final test.fixtures.adapter.MyStruct VAR3 = construct_VAR3();

    private static test.fixtures.adapter.MyStruct construct_VAR3() {
      return new test.fixtures.adapter.MyStruct.Builder().setField(30).setSetString(ImmutableSet.<String>builder()
        .add("10")
        .add("20")
        .build()).build();
    }

    public static final int VAR4 = 40;

    public static final String VAR5 = "50";

    public static final test.fixtures.adapter.MyStruct VAR6 = construct_VAR6();

    private static test.fixtures.adapter.MyStruct construct_VAR6() {
      return new test.fixtures.adapter.MyStruct.Builder().setField(60).setSetString(ImmutableSet.<String>builder()
        .add("30")
        .add("40")
        .build()).build();
    }

    public static final int TIMEOUT = 42;

    public static final String MSG = "hello, world";

    public static final test.fixtures.adapter.Person2 PERSON = construct_PERSON();

    private static test.fixtures.adapter.Person2 construct_PERSON() {
      return new test.fixtures.adapter.Person2.Builder().setName("DefaultName").build();
    }

    public static final int TIMEOUT_NO_TRANSITIVE = 420;

    public static final String MSG_NO_TRANSITIVE = "hello, world 2";

    public static final test.fixtures.adapter.Person2 PERSON_NO_TRANSITIVE = construct_PERSON_NO_TRANSITIVE();

    private static test.fixtures.adapter.Person2 construct_PERSON_NO_TRANSITIVE() {
      return new test.fixtures.adapter.Person2.Builder().setName("DefaultName 2").build();
    }

    public static final boolean TYPE_ADAPTED = true;

    public static final test.fixtures.adapter.MoveOnly NESTED_ADAPTED = construct_NESTED_ADAPTED();

    private static test.fixtures.adapter.MoveOnly construct_NESTED_ADAPTED() {
      return new test.fixtures.adapter.MoveOnly.Builder().setPtr(new test.fixtures.adapter.HeapAllocated.Builder().build()).build();
    }

    public static final List<Byte> CONTAINER_OF_ADAPTED = construct_CONTAINER_OF_ADAPTED();

    private static List<Byte> construct_CONTAINER_OF_ADAPTED() {
      return ImmutableList.<Byte>builder()
        .add((byte)1)
        .add((byte)2)
        .add((byte)3)
        .build();
    }
}
