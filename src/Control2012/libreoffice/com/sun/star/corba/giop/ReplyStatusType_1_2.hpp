#ifndef INCLUDED_COM_SUN_STAR_CORBA_GIOP_REPLYSTATUSTYPE_1_2_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_GIOP_REPLYSTATUSTYPE_1_2_HPP

#include "sal/config.h"

#include "com/sun/star/corba/giop/ReplyStatusType_1_2.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::giop::ReplyStatusType_1_2 const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.corba.giop.ReplyStatusType_1_2",
                                       ::com::sun::star::corba::giop::ReplyStatusType_1_2_NO_EXCEPTION );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::giop::ReplyStatusType_1_2 const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::giop::ReplyStatusType_1_2 >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_GIOP_REPLYSTATUSTYPE_1_2_HPP
