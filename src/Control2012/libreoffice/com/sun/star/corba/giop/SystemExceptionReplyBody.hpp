#ifndef INCLUDED_COM_SUN_STAR_CORBA_GIOP_SYSTEMEXCEPTIONREPLYBODY_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_GIOP_SYSTEMEXCEPTIONREPLYBODY_HPP

#include "sal/config.h"

#include "com/sun/star/corba/giop/SystemExceptionReplyBody.hdl"

#include "com/sun/star/corba/CorbaString8.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline SystemExceptionReplyBody::SystemExceptionReplyBody() SAL_THROW( () )
    : exception_id()
    , minor_code_value(0)
    , completion_status(0)
{
}

inline SystemExceptionReplyBody::SystemExceptionReplyBody(const ::com::sun::star::corba::CorbaString8& exception_id_, const ::sal_uInt32& minor_code_value_, const ::sal_uInt32& completion_status_) SAL_THROW( () )
    : exception_id(exception_id_)
    , minor_code_value(minor_code_value_)
    , completion_status(completion_status_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::giop::SystemExceptionReplyBody const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::corba::CorbaString8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.giop.SystemExceptionReplyBody", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::giop::SystemExceptionReplyBody const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::giop::SystemExceptionReplyBody >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_GIOP_SYSTEMEXCEPTIONREPLYBODY_HPP
