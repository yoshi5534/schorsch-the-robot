#ifndef INCLUDED_COM_SUN_STAR_CORBA_GIOP_REPLYHEADER_1_2_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_GIOP_REPLYHEADER_1_2_HPP

#include "sal/config.h"

#include "com/sun/star/corba/giop/ReplyHeader_1_2.hdl"

#include "com/sun/star/corba/giop/ReplyStatusType_1_2.hpp"
#include "com/sun/star/corba/iop/ServiceContextList.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline ReplyHeader_1_2::ReplyHeader_1_2() SAL_THROW( () )
    : request_id(0)
    , reply_status(::com::sun::star::corba::giop::ReplyStatusType_1_2_NO_EXCEPTION)
    , service_context()
{
}

inline ReplyHeader_1_2::ReplyHeader_1_2(const ::sal_uInt32& request_id_, const ::com::sun::star::corba::giop::ReplyStatusType_1_2& reply_status_, const ::com::sun::star::uno::Sequence< ::com::sun::star::corba::iop::ServiceContext >& service_context_) SAL_THROW( () )
    : request_id(request_id_)
    , reply_status(reply_status_)
    , service_context(service_context_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::giop::ReplyHeader_1_2 const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::corba::giop::ReplyStatusType_1_2 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::corba::iop::ServiceContext > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.giop.ReplyHeader_1_2", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::giop::ReplyHeader_1_2 const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::giop::ReplyHeader_1_2 >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_GIOP_REPLYHEADER_1_2_HPP
