// @generated by Thrift for thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift
// This file is probably not the place you want to edit!

//! Thrift service definitions for `module`.


/// Service definitions for `TestService`.
pub mod test_service {
    #[derive(Clone, Debug)]
    pub enum InitExn {

        ApplicationException(::fbthrift::ApplicationException),
    }

    impl ::std::convert::From<crate::errors::test_service::InitError> for InitExn {
        fn from(err: crate::errors::test_service::InitError) -> Self {
            match err {
                crate::errors::test_service::InitError::ApplicationException(aexn) => InitExn::ApplicationException(aexn),
                crate::errors::test_service::InitError::ThriftError(err) => InitExn::ApplicationException(::fbthrift::ApplicationException {
                    message: err.to_string(),
                    type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                }),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for InitExn {
        fn from(exn: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(exn)
        }
    }

    impl ::fbthrift::ExceptionInfo for InitExn {
        fn exn_name(&self) -> &'static str {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_name(),
            }
        }

        fn exn_value(&self) -> String {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_value(),
            }
        }

        fn exn_is_declared(&self) -> bool {
            match self {
                Self::ApplicationException(aexn) => aexn.exn_is_declared(),
            }
        }
    }

    impl ::fbthrift::ResultInfo for InitExn {
        fn result_type(&self) -> ::fbthrift::ResultType {
            match self {
                Self::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
            }
        }
    }

    impl ::fbthrift::GetTType for InitExn {
        const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
    }

    impl<P> ::fbthrift::Serialize<P> for InitExn
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            ::fbthrift::help::SerializeExn::write_result(Err(self), p);
        }
    }

    impl ::fbthrift::help::SerializeExn for InitExn {
        type Success = ::std::primitive::i64;

        fn write_result<P>(res: ::std::result::Result<&Self::Success, &Self>, p: &mut P)
        where
            P: ::fbthrift::ProtocolWriter,
        {
            if let ::std::result::Result::Err(Self::ApplicationException(aexn)) = res {
                ::fbthrift::Serialize::write(aexn, p);
                return;
            }
            p.write_struct_begin("Init");
            match res {
                ::std::result::Result::Ok(success) => {
                    p.write_field_begin(
                        "Success",
                        ::fbthrift::TType::I64,
                        0i16,
                    );
                    ::fbthrift::Serialize::write(success, p);
                    p.write_field_end();
                }

                ::std::result::Result::Err(Self::ApplicationException(_aexn)) => unreachable!(),
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl ::fbthrift::help::DeserializeExn for InitExn {
        type Success = ::std::primitive::i64;

        fn read_result<P>(p: &mut P) -> ::anyhow::Result<::std::result::Result<Self::Success, Self>>
        where
            P: ::fbthrift::ProtocolReader,
        {
            static RETURNS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("Success", ::fbthrift::TType::I64, 0),
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let mut once = false;
            let mut alt = ::std::option::Option::None;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                match ((fty, fid as ::std::primitive::i32), once) {
                    ((::fbthrift::TType::Stop, _), _) => {
                        p.read_field_end()?;
                        break;
                    }
                    ((::fbthrift::TType::I64, 0i32), false) => {
                        once = true;
                        alt = ::std::option::Option::Some(::std::result::Result::Ok(::fbthrift::Deserialize::read(p)?));
                    }
                    ((ty, _id), false) => p.skip(ty)?,
                    ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                        ::fbthrift::ApplicationException::new(
                            ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                            format!(
                                "unwanted extra union {} field ty {:?} id {}",
                                "InitExn",
                                badty,
                                badid,
                            ),
                        )
                    )),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            alt.ok_or_else(||
                ::fbthrift::ApplicationException::new(
                    ::fbthrift::ApplicationExceptionErrorCode::MissingResult,
                    format!("Empty union {}", "InitExn"),
                )
                .into(),
            )
        }
    }
}
