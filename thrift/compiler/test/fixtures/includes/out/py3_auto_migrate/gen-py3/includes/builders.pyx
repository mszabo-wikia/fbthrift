#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cdef class Included_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _includes_types.Included

    def __iter__(self):
        yield "MyIntField", self.MyIntField
        yield "MyTransitiveField", self.MyTransitiveField

