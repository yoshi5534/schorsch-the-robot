#ifndef INCLUDED_COM_SUN_STAR_CORBA_GIOP_MSGTYPE_1_1_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_GIOP_MSGTYPE_1_1_HPP

#include "sal/config.h"

#include "com/sun/star/corba/giop/MsgType_1_1.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::giop::MsgType_1_1 const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.corba.giop.MsgType_1_1",
                                       ::com::sun::star::corba::giop::MsgType_1_1_Request );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::giop::MsgType_1_1 const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::giop::MsgType_1_1 >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_GIOP_MSGTYPE_1_1_HPP
