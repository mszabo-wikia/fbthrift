// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package scope // [[[ program thrift source path ]]]

import (
    "fmt"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)


// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = thrift.ZERO


type Transitive struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Transitive{}

func NewTransitive() *Transitive {
    return (&Transitive{})
}

func (x *Transitive) String() string {
    type TransitiveAlias Transitive
    valueAlias := (*TransitiveAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Transitive.Set* methods instead or set the fields directly.
type TransitiveBuilder struct {
    obj *Transitive
}

func NewTransitiveBuilder() *TransitiveBuilder {
    return &TransitiveBuilder{
        obj: NewTransitive(),
    }
}

func (x *TransitiveBuilder) Emit() *Transitive {
    var objCopy Transitive = *x.obj
    return &objCopy
}

func (x *Transitive) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Transitive"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Transitive) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type Schema struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Schema{}

func NewSchema() *Schema {
    return (&Schema{})
}

func (x *Schema) String() string {
    type SchemaAlias Schema
    valueAlias := (*SchemaAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Schema.Set* methods instead or set the fields directly.
type SchemaBuilder struct {
    obj *Schema
}

func NewSchemaBuilder() *SchemaBuilder {
    return &SchemaBuilder{
        obj: NewSchema(),
    }
}

func (x *SchemaBuilder) Emit() *Schema {
    var objCopy Schema = *x.obj
    return &objCopy
}

func (x *Schema) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Schema"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Schema) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type Program struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Program{}

func NewProgram() *Program {
    return (&Program{})
}

func (x *Program) String() string {
    type ProgramAlias Program
    valueAlias := (*ProgramAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Program.Set* methods instead or set the fields directly.
type ProgramBuilder struct {
    obj *Program
}

func NewProgramBuilder() *ProgramBuilder {
    return &ProgramBuilder{
        obj: NewProgram(),
    }
}

func (x *ProgramBuilder) Emit() *Program {
    var objCopy Program = *x.obj
    return &objCopy
}

func (x *Program) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Program"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Program) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type Struct struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Struct{}

func NewStruct() *Struct {
    return (&Struct{})
}

func (x *Struct) String() string {
    type StructAlias Struct
    valueAlias := (*StructAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Struct.Set* methods instead or set the fields directly.
type StructBuilder struct {
    obj *Struct
}

func NewStructBuilder() *StructBuilder {
    return &StructBuilder{
        obj: NewStruct(),
    }
}

func (x *StructBuilder) Emit() *Struct {
    var objCopy Struct = *x.obj
    return &objCopy
}

func (x *Struct) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Struct"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Struct) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type Union struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Union{}

func NewUnion() *Union {
    return (&Union{})
}

func (x *Union) String() string {
    type UnionAlias Union
    valueAlias := (*UnionAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Union.Set* methods instead or set the fields directly.
type UnionBuilder struct {
    obj *Union
}

func NewUnionBuilder() *UnionBuilder {
    return &UnionBuilder{
        obj: NewUnion(),
    }
}

func (x *UnionBuilder) Emit() *Union {
    var objCopy Union = *x.obj
    return &objCopy
}

func (x *Union) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Union"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Union) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type Exception struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Exception{}

func NewException() *Exception {
    return (&Exception{})
}

func (x *Exception) String() string {
    type ExceptionAlias Exception
    valueAlias := (*ExceptionAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Exception.Set* methods instead or set the fields directly.
type ExceptionBuilder struct {
    obj *Exception
}

func NewExceptionBuilder() *ExceptionBuilder {
    return &ExceptionBuilder{
        obj: NewException(),
    }
}

func (x *ExceptionBuilder) Emit() *Exception {
    var objCopy Exception = *x.obj
    return &objCopy
}

func (x *Exception) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Exception"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Exception) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type Field struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Field{}

func NewField() *Field {
    return (&Field{})
}

func (x *Field) String() string {
    type FieldAlias Field
    valueAlias := (*FieldAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Field.Set* methods instead or set the fields directly.
type FieldBuilder struct {
    obj *Field
}

func NewFieldBuilder() *FieldBuilder {
    return &FieldBuilder{
        obj: NewField(),
    }
}

func (x *FieldBuilder) Emit() *Field {
    var objCopy Field = *x.obj
    return &objCopy
}

func (x *Field) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Field"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Field) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type Typedef struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Typedef{}

func NewTypedef() *Typedef {
    return (&Typedef{})
}

func (x *Typedef) String() string {
    type TypedefAlias Typedef
    valueAlias := (*TypedefAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Typedef.Set* methods instead or set the fields directly.
type TypedefBuilder struct {
    obj *Typedef
}

func NewTypedefBuilder() *TypedefBuilder {
    return &TypedefBuilder{
        obj: NewTypedef(),
    }
}

func (x *TypedefBuilder) Emit() *Typedef {
    var objCopy Typedef = *x.obj
    return &objCopy
}

func (x *Typedef) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Typedef"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Typedef) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type Service struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Service{}

func NewService() *Service {
    return (&Service{})
}

func (x *Service) String() string {
    type ServiceAlias Service
    valueAlias := (*ServiceAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Service.Set* methods instead or set the fields directly.
type ServiceBuilder struct {
    obj *Service
}

func NewServiceBuilder() *ServiceBuilder {
    return &ServiceBuilder{
        obj: NewService(),
    }
}

func (x *ServiceBuilder) Emit() *Service {
    var objCopy Service = *x.obj
    return &objCopy
}

func (x *Service) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Service"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Service) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type Interaction struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Interaction{}

func NewInteraction() *Interaction {
    return (&Interaction{})
}

func (x *Interaction) String() string {
    type InteractionAlias Interaction
    valueAlias := (*InteractionAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Interaction.Set* methods instead or set the fields directly.
type InteractionBuilder struct {
    obj *Interaction
}

func NewInteractionBuilder() *InteractionBuilder {
    return &InteractionBuilder{
        obj: NewInteraction(),
    }
}

func (x *InteractionBuilder) Emit() *Interaction {
    var objCopy Interaction = *x.obj
    return &objCopy
}

func (x *Interaction) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Interaction"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Interaction) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type Function struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Function{}

func NewFunction() *Function {
    return (&Function{})
}

func (x *Function) String() string {
    type FunctionAlias Function
    valueAlias := (*FunctionAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Function.Set* methods instead or set the fields directly.
type FunctionBuilder struct {
    obj *Function
}

func NewFunctionBuilder() *FunctionBuilder {
    return &FunctionBuilder{
        obj: NewFunction(),
    }
}

func (x *FunctionBuilder) Emit() *Function {
    var objCopy Function = *x.obj
    return &objCopy
}

func (x *Function) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Function"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Function) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type EnumValue struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &EnumValue{}

func NewEnumValue() *EnumValue {
    return (&EnumValue{})
}

func (x *EnumValue) String() string {
    type EnumValueAlias EnumValue
    valueAlias := (*EnumValueAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use EnumValue.Set* methods instead or set the fields directly.
type EnumValueBuilder struct {
    obj *EnumValue
}

func NewEnumValueBuilder() *EnumValueBuilder {
    return &EnumValueBuilder{
        obj: NewEnumValue(),
    }
}

func (x *EnumValueBuilder) Emit() *EnumValue {
    var objCopy EnumValue = *x.obj
    return &objCopy
}

func (x *EnumValue) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("EnumValue"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *EnumValue) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type Const struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Const{}

func NewConst() *Const {
    return (&Const{})
}

func (x *Const) String() string {
    type ConstAlias Const
    valueAlias := (*ConstAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Const.Set* methods instead or set the fields directly.
type ConstBuilder struct {
    obj *Const
}

func NewConstBuilder() *ConstBuilder {
    return &ConstBuilder{
        obj: NewConst(),
    }
}

func (x *ConstBuilder) Emit() *Const {
    var objCopy Const = *x.obj
    return &objCopy
}

func (x *Const) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Const"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Const) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type Enum struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Enum{}

func NewEnum() *Enum {
    return (&Enum{})
}

func (x *Enum) String() string {
    type EnumAlias Enum
    valueAlias := (*EnumAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Enum.Set* methods instead or set the fields directly.
type EnumBuilder struct {
    obj *Enum
}

func NewEnumBuilder() *EnumBuilder {
    return &EnumBuilder{
        obj: NewEnum(),
    }
}

func (x *EnumBuilder) Emit() *Enum {
    var objCopy Enum = *x.obj
    return &objCopy
}

func (x *Enum) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Enum"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Enum) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type Structured struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Structured{}

func NewStructured() *Structured {
    return (&Structured{})
}

func (x *Structured) String() string {
    type StructuredAlias Structured
    valueAlias := (*StructuredAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Structured.Set* methods instead or set the fields directly.
type StructuredBuilder struct {
    obj *Structured
}

func NewStructuredBuilder() *StructuredBuilder {
    return &StructuredBuilder{
        obj: NewStructured(),
    }
}

func (x *StructuredBuilder) Emit() *Structured {
    var objCopy Structured = *x.obj
    return &objCopy
}

func (x *Structured) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Structured"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Structured) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type Interface struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Interface{}

func NewInterface() *Interface {
    return (&Interface{})
}

func (x *Interface) String() string {
    type InterfaceAlias Interface
    valueAlias := (*InterfaceAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Interface.Set* methods instead or set the fields directly.
type InterfaceBuilder struct {
    obj *Interface
}

func NewInterfaceBuilder() *InterfaceBuilder {
    return &InterfaceBuilder{
        obj: NewInterface(),
    }
}

func (x *InterfaceBuilder) Emit() *Interface {
    var objCopy Interface = *x.obj
    return &objCopy
}

func (x *Interface) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Interface"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Interface) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type RootDefinition struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &RootDefinition{}

func NewRootDefinition() *RootDefinition {
    return (&RootDefinition{})
}

func (x *RootDefinition) String() string {
    type RootDefinitionAlias RootDefinition
    valueAlias := (*RootDefinitionAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use RootDefinition.Set* methods instead or set the fields directly.
type RootDefinitionBuilder struct {
    obj *RootDefinition
}

func NewRootDefinitionBuilder() *RootDefinitionBuilder {
    return &RootDefinitionBuilder{
        obj: NewRootDefinition(),
    }
}

func (x *RootDefinitionBuilder) Emit() *RootDefinition {
    var objCopy RootDefinition = *x.obj
    return &objCopy
}

func (x *RootDefinition) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("RootDefinition"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *RootDefinition) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


type Definition struct {
}
// Compile time interface enforcer
var _ thrift.Struct = &Definition{}

func NewDefinition() *Definition {
    return (&Definition{})
}

func (x *Definition) String() string {
    type DefinitionAlias Definition
    valueAlias := (*DefinitionAlias)(x)
    return fmt.Sprintf("%+v", valueAlias)
}


// Deprecated: Use Definition.Set* methods instead or set the fields directly.
type DefinitionBuilder struct {
    obj *Definition
}

func NewDefinitionBuilder() *DefinitionBuilder {
    return &DefinitionBuilder{
        obj: NewDefinition(),
    }
}

func (x *DefinitionBuilder) Emit() *Definition {
    var objCopy Definition = *x.obj
    return &objCopy
}

func (x *Definition) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("Definition"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *Definition) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}


// RegisterTypes registers types found in this file that have a thrift_uri with the passed in registry.
func RegisterTypes(registry interface {
	  RegisterType(name string, obj any)
}) {
    registry.RegisterType("facebook.com/thrift/annotation/Transitive", &Transitive{})
    registry.RegisterType("facebook.com/thrift/annotation/Schema", &Schema{})
    registry.RegisterType("facebook.com/thrift/annotation/Program", &Program{})
    registry.RegisterType("facebook.com/thrift/annotation/Struct", &Struct{})
    registry.RegisterType("facebook.com/thrift/annotation/Union", &Union{})
    registry.RegisterType("facebook.com/thrift/annotation/Exception", &Exception{})
    registry.RegisterType("facebook.com/thrift/annotation/Field", &Field{})
    registry.RegisterType("facebook.com/thrift/annotation/Typedef", &Typedef{})
    registry.RegisterType("facebook.com/thrift/annotation/Service", &Service{})
    registry.RegisterType("facebook.com/thrift/annotation/Interaction", &Interaction{})
    registry.RegisterType("facebook.com/thrift/annotation/Function", &Function{})
    registry.RegisterType("facebook.com/thrift/annotation/EnumValue", &EnumValue{})
    registry.RegisterType("facebook.com/thrift/annotation/Const", &Const{})
    registry.RegisterType("facebook.com/thrift/annotation/Enum", &Enum{})
    registry.RegisterType("facebook.com/thrift/annotation/Structured", &Structured{})
    registry.RegisterType("facebook.com/thrift/annotation/Interface", &Interface{})
    registry.RegisterType("facebook.com/thrift/annotation/RootDefinition", &RootDefinition{})
    registry.RegisterType("facebook.com/thrift/annotation/Definition", &Definition{})

}
