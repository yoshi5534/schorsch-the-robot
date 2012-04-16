#ifndef INCLUDED_COM_SUN_STAR_CORBA_GIOP_REQUESTHEADER_1_0_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_GIOP_REQUESTHEADER_1_0_HPP

#include "sal/config.h"

#include "com/sun/star/corba/giop/RequestHeader_1_0.hdl"

#include "com/sun/star/corba/CorbaString8.hpp"
#include "com/sun/star/corba/iop/ServiceContextList.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline RequestHeader_1_0::RequestHeader_1_0() SAL_THROW( () )
    : service_context()
    , request_id(0)
    , response_expected(false)
    , object_key()
    , operation()
    , requesting_principal()
{
}

inline RequestHeader_1_0::RequestHeader_1_0(const ::com::sun::star::uno::Sequence< ::com::sun::star::corba::iop::ServiceContext >& service_context_, const ::sal_uInt32& request_id_, const ::sal_Bool& response_expected_, const ::com::sun::star::uno::Sequence< ::sal_Int8 >& object_key_, const ::com::sun::star::corba::CorbaString8& operation_, const ::com::sun::star::uno::Sequence< ::sal_Int8 >& requesting_principal_) SAL_THROW( () )
    : service_context(service_context_)
    , request_id(request_id_)
    , response_expected(response_expected_)
    , object_key(object_key_)
    , operation(operation_)
    , requesting_principal(requesting_principal_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::giop::RequestHeader_1_0 const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::corba::iop::ServiceContext > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int8 > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::corba::CorbaString8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int8 > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.giop.RequestHeader_1_0", 0, 6, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::giop::RequestHeader_1_0 const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::giop::RequestHeader_1_0 >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_GIOP_REQUESTHEADER_1_0_HPP
