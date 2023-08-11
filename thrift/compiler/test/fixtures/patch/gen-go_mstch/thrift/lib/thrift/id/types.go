// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package id // [[[ program thrift source path ]]]

import (
    "fmt"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)


// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = thrift.ZERO


type FieldId = int16

func NewFieldId() FieldId {
  return 0
}

func WriteFieldId(item FieldId, p thrift.Protocol) error {
  if err := p.WriteI16(item); err != nil {
    return err
}
  return nil
}

func ReadFieldId(p thrift.Protocol) (FieldId, error) {
  var decodeResult FieldId
  decodeErr := func() error {
    result, err := p.ReadI16()
if err != nil {
    return err
}
    decodeResult = result
    return nil
  }()
  return decodeResult, decodeErr
}

type ExternId = int64

func NewExternId() ExternId {
  return 0
}

func WriteExternId(item ExternId, p thrift.Protocol) error {
  if err := p.WriteI64(item); err != nil {
    return err
}
  return nil
}

func ReadExternId(p thrift.Protocol) (ExternId, error) {
  var decodeResult ExternId
  decodeErr := func() error {
    result, err := p.ReadI64()
if err != nil {
    return err
}
    decodeResult = result
    return nil
  }()
  return decodeResult, decodeErr
}

type ValueId = ExternId

func NewValueId() ValueId {
  return NewExternId()
}

func WriteValueId(item ValueId, p thrift.Protocol) error {
  err := WriteExternId(item, p)
if err != nil {
    return err
}
  return nil
}

func ReadValueId(p thrift.Protocol) (ValueId, error) {
  var decodeResult ValueId
  decodeErr := func() error {
    result, err := ReadExternId(p)
if err != nil {
    return err
}
    decodeResult = result
    return nil
  }()
  return decodeResult, decodeErr
}

type ProtocolId = ExternId

func NewProtocolId() ProtocolId {
  return NewExternId()
}

func WriteProtocolId(item ProtocolId, p thrift.Protocol) error {
  err := WriteExternId(item, p)
if err != nil {
    return err
}
  return nil
}

func ReadProtocolId(p thrift.Protocol) (ProtocolId, error) {
  var decodeResult ProtocolId
  decodeErr := func() error {
    result, err := ReadExternId(p)
if err != nil {
    return err
}
    decodeResult = result
    return nil
  }()
  return decodeResult, decodeErr
}

type TypeId = ExternId

func NewTypeId() TypeId {
  return NewExternId()
}

func WriteTypeId(item TypeId, p thrift.Protocol) error {
  err := WriteExternId(item, p)
if err != nil {
    return err
}
  return nil
}

func ReadTypeId(p thrift.Protocol) (TypeId, error) {
  var decodeResult TypeId
  decodeErr := func() error {
    result, err := ReadExternId(p)
if err != nil {
    return err
}
    decodeResult = result
    return nil
  }()
  return decodeResult, decodeErr
}

type DefinitionId = ExternId

func NewDefinitionId() DefinitionId {
  return NewExternId()
}

func WriteDefinitionId(item DefinitionId, p thrift.Protocol) error {
  err := WriteExternId(item, p)
if err != nil {
    return err
}
  return nil
}

func ReadDefinitionId(p thrift.Protocol) (DefinitionId, error) {
  var decodeResult DefinitionId
  decodeErr := func() error {
    result, err := ReadExternId(p)
if err != nil {
    return err
}
    decodeResult = result
    return nil
  }()
  return decodeResult, decodeErr
}

type PackageId = ExternId

func NewPackageId() PackageId {
  return NewExternId()
}

func WritePackageId(item PackageId, p thrift.Protocol) error {
  err := WriteExternId(item, p)
if err != nil {
    return err
}
  return nil
}

func ReadPackageId(p thrift.Protocol) (PackageId, error) {
  var decodeResult PackageId
  decodeErr := func() error {
    result, err := ReadExternId(p)
if err != nil {
    return err
}
    decodeResult = result
    return nil
  }()
  return decodeResult, decodeErr
}

type ProgramId = ExternId

func NewProgramId() ProgramId {
  return NewExternId()
}

func WriteProgramId(item ProgramId, p thrift.Protocol) error {
  err := WriteExternId(item, p)
if err != nil {
    return err
}
  return nil
}

func ReadProgramId(p thrift.Protocol) (ProgramId, error) {
  var decodeResult ProgramId
  decodeErr := func() error {
    result, err := ReadExternId(p)
if err != nil {
    return err
}
    decodeResult = result
    return nil
  }()
  return decodeResult, decodeErr
}

type SourceId = ExternId

func NewSourceId() SourceId {
  return NewExternId()
}

func WriteSourceId(item SourceId, p thrift.Protocol) error {
  err := WriteExternId(item, p)
if err != nil {
    return err
}
  return nil
}

func ReadSourceId(p thrift.Protocol) (SourceId, error) {
  var decodeResult SourceId
  decodeErr := func() error {
    result, err := ReadExternId(p)
if err != nil {
    return err
}
    decodeResult = result
    return nil
  }()
  return decodeResult, decodeErr
}

