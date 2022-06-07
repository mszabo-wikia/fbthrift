<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Indicates a definition/feature may change in incompatible ways.
 *
 * Original thrift struct:-
 * Beta
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/Beta'))>>
class facebook_thrift_annotation_Beta implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'Beta';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.Beta",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_Program' => facebook_thrift_annotation_Program::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Definition' => facebook_thrift_annotation_Definition::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Indicates a definition/feature should only be used with permission, may only
 * work in specific contexts, and may change in incompatible ways without notice.
 *
 * Original thrift struct:-
 * Experimental
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/Experimental'))>>
class facebook_thrift_annotation_Experimental implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'Experimental';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.Experimental",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_Program' => facebook_thrift_annotation_Program::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Definition' => facebook_thrift_annotation_Definition::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Indicates a definition/feature should no longer be used.
 *
 * Original thrift struct:-
 * Deprecated
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/Deprecated'))>>
class facebook_thrift_annotation_Deprecated implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'message',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'message' => 1,
  ];

  const type TConstructorShape = shape(
    ?'message' => ?string,
  );

  const int STRUCTURAL_ID = 2427562471238739676;
  /**
   * Original thrift field:-
   * 1: string message
   */
  public string $message;

  public function __construct(?string $message = null)[] {
    $this->message = $message ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'message'),
    );
  }

  public function getName()[]: string {
    return 'Deprecated';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.Deprecated",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "message",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_Beta' => facebook_thrift_annotation_Beta::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Program' => facebook_thrift_annotation_Program::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Definition' => facebook_thrift_annotation_Definition::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Indicates  a definition/feature will be removed in the next release.
 * 
 * Pleased migrate off of all @Legacy as soon as possible.
 *
 * Original thrift struct:-
 * Legacy
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/Legacy'))>>
class facebook_thrift_annotation_Legacy implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'message',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'message' => 1,
  ];

  const type TConstructorShape = shape(
    ?'message' => ?string,
  );

  const int STRUCTURAL_ID = 2427562471238739676;
  /**
   * Original thrift field:-
   * 1: string message
   */
  public string $message;

  public function __construct(?string $message = null)[] {
    $this->message = $message ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'message'),
    );
  }

  public function getName()[]: string {
    return 'Legacy';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.Legacy",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "message",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_Deprecated' => facebook_thrift_annotation_Deprecated::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Transitive' => facebook_thrift_annotation_Transitive::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Indicates additional backward compatibility restrictions, beyond the
 * standard Thrift required 'wire' compatibility.
 *
 * Original thrift struct:-
 * RequiresBackwardCompatibility
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/RequiresBackwardCompatibility'))>>
class facebook_thrift_annotation_RequiresBackwardCompatibility implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'field_name',
      'type' => \TType::BOOL,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'field_name' => 1,
  ];

  const type TConstructorShape = shape(
    ?'field_name' => ?bool,
  );

  const int STRUCTURAL_ID = 4755373036761315562;
  /**
   * Original thrift field:-
   * 1: bool field_name
   */
  public bool $field_name;

  public function __construct(?bool $field_name = null)[] {
    $this->field_name = $field_name ?? false;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'field_name'),
    );
  }

  public function getName()[]: string {
    return 'RequiresBackwardCompatibility';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.RequiresBackwardCompatibility",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "name" => "field_name",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_Structured' => facebook_thrift_annotation_Structured::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Experimental' => facebook_thrift_annotation_Experimental::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Best-effort disables experimental features.
 *
 * Original thrift struct:-
 * NoExperimental
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/NoExperimental'))>>
class facebook_thrift_annotation_NoExperimental implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'NoExperimental';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.NoExperimental",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_Program' => facebook_thrift_annotation_Program::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Definition' => facebook_thrift_annotation_Definition::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Best-effort disables @Beta features.
 *
 * Original thrift struct:-
 * NoBeta
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/NoBeta'))>>
class facebook_thrift_annotation_NoBeta implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'NoBeta';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.NoBeta",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_NoExperimental' => facebook_thrift_annotation_NoExperimental::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Transitive' => facebook_thrift_annotation_Transitive::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Best-effort disables @Legacy features.
 *
 * Original thrift struct:-
 * NoLegacy
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/NoLegacy'))>>
class facebook_thrift_annotation_NoLegacy implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'NoLegacy';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.NoLegacy",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_Program' => facebook_thrift_annotation_Program::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Definition' => facebook_thrift_annotation_Definition::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Experimental' => facebook_thrift_annotation_Experimental::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 *  * Best-effort disables @Deprecated features.
 * *
 * * Should only be enabled in `test` versions, as deprecated implies removing
 * * the feature will break current usage (otherwise it would be @Legacy or
 * * deleted)
 *
 * Original thrift struct:-
 * NoDeprecated
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/NoDeprecated'))>>
class facebook_thrift_annotation_NoDeprecated implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'NoDeprecated';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.NoDeprecated",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_NoLegacy' => facebook_thrift_annotation_NoLegacy::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Beta' => facebook_thrift_annotation_Beta::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Transitive' => facebook_thrift_annotation_Transitive::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Original thrift struct:-
 * TerseWrite
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/TerseWrite'))>>
class facebook_thrift_annotation_TerseWrite implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'TerseWrite';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.TerseWrite",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_Program' => facebook_thrift_annotation_Program::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Structured' => facebook_thrift_annotation_Structured::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Field' => facebook_thrift_annotation_Field::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Experimental' => facebook_thrift_annotation_Experimental::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Original thrift struct:-
 * Box
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/Box'))>>
class facebook_thrift_annotation_Box implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'Box';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.Box",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_Field' => facebook_thrift_annotation_Field::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Beta' => facebook_thrift_annotation_Beta::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Original thrift struct:-
 * Mixin
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/Mixin'))>>
class facebook_thrift_annotation_Mixin implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'Mixin';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.Mixin",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_Field' => facebook_thrift_annotation_Field::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Beta' => facebook_thrift_annotation_Beta::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Option to serialize thrift struct in ascending field id order.
 * 
 * This can potentially make serialized data size smaller in compact protocol,
 * since compact protocol can write deltas between subsequent field ids.
 *
 * Original thrift struct:-
 * SerializeInFieldIdOrder
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/SerializeInFieldIdOrder'))>>
class facebook_thrift_annotation_SerializeInFieldIdOrder implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'SerializeInFieldIdOrder';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.SerializeInFieldIdOrder",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_Struct' => facebook_thrift_annotation_Struct::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Experimental' => facebook_thrift_annotation_Experimental::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Adds a default enum value (0), with the given name, if one is not
 * already defined.
 * 
 * All v1+ enums must have an explicitly defined default value (0).
 * This annotation automatically adds such a value if not already present.
 *
 * Original thrift struct:-
 * GenDefaultEnumValue
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/GenDefaultEnumValue'))>>
class facebook_thrift_annotation_GenDefaultEnumValue implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'name',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'name' => 1,
  ];

  const type TConstructorShape = shape(
    ?'name' => ?string,
  );

  const int STRUCTURAL_ID = 2593878277785201336;
  /**
   * The name to use for the generated enum value.
   * 
   * This intentionally does **not** use the most common 'zero' enum value name,
   * 'Default', by default; as, defining a `Default = 0` enum value explicitly
   * is a useful means of self-documenting that setting an explicit value is
   * never required. In which case, it is part of the API, and should not be
   * removed in favor of an implicitly generated value.
   * 
   * On the other hand, 'Unspecified' clearly indicates that the requirements
   * are not intrinsic to the enum. In which case, the relevant documentation
   * should be consulted (e.g. the doc strings on the function or field).
   * 
   * Original thrift field:-
   * 1: string name
   */
  public string $name;

  public function __construct(?string $name = null)[] {
    $this->name = $name ?? "Unspecified";
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'name'),
    );
  }

  public function getName()[]: string {
    return 'GenDefaultEnumValue';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.GenDefaultEnumValue",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "name",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_FbthriftInternalEnum' => facebook_thrift_annotation_FbthriftInternalEnum::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Program' => facebook_thrift_annotation_Program::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Beta' => facebook_thrift_annotation_Beta::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Enables all released v1 features.
 *
 * Original thrift struct:-
 * v1
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/v1'))>>
class facebook_thrift_annotation_v1 implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'v1';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.v1",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_Transitive' => facebook_thrift_annotation_Transitive::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Enables all beta v1 features.
 * 
 * Beta features are guaranteed to *not* break unrelated Thrift features
 * so they should be relatively safe to test alongside other beta or
 * released Thrift features.
 *
 * Original thrift struct:-
 * v1beta
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/v1beta'))>>
class facebook_thrift_annotation_v1beta implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'v1beta';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.v1beta",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_v1' => facebook_thrift_annotation_v1::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_GenDefaultEnumValue' => facebook_thrift_annotation_GenDefaultEnumValue::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Beta' => facebook_thrift_annotation_Beta::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Transitive' => facebook_thrift_annotation_Transitive::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Enables all experimental v1 features.
 * 
 * Use with *caution* and only with explicit permission. This may enable
 * features may change significantly without notice or not work correctly
 * in all contexts.
 *
 * Original thrift struct:-
 * v1alpha
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/v1alpha'))>>
class facebook_thrift_annotation_v1alpha implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'v1alpha';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.v1alpha",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_v1beta' => facebook_thrift_annotation_v1beta::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_SerializeInFieldIdOrder' => facebook_thrift_annotation_SerializeInFieldIdOrder::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_NoLegacy' => facebook_thrift_annotation_NoLegacy::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Experimental' => facebook_thrift_annotation_Experimental::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Transitive' => facebook_thrift_annotation_Transitive::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Enables experimental features, even those that are known to break common
 * use cases.
 *
 * Original thrift struct:-
 * v1test
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/v1test'))>>
class facebook_thrift_annotation_v1test implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'v1test';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.v1test",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_TerseWrite' => facebook_thrift_annotation_TerseWrite::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_NoDeprecated' => facebook_thrift_annotation_NoDeprecated::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_v1alpha' => facebook_thrift_annotation_v1alpha::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Transitive' => facebook_thrift_annotation_Transitive::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Original thrift struct:-
 * NoLegacyAPIs
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/NoLegacyAPIs'))>>
class facebook_thrift_annotation_NoLegacyAPIs implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'NoLegacyAPIs';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "thrift.NoLegacyAPIs",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_Legacy' => facebook_thrift_annotation_Legacy::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Program' => facebook_thrift_annotation_Program::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Struct' => facebook_thrift_annotation_Struct::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Union' => facebook_thrift_annotation_Union::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Exception' => facebook_thrift_annotation_Exception::fromShape(
          shape(
          )
        ),
        'facebook_thrift_annotation_Service' => facebook_thrift_annotation_Service::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

