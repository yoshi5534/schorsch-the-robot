#ifndef INCLUDED_COM_SUN_STAR_CORBA_IIOP_LISTENPOINT_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_IIOP_LISTENPOINT_HPP

#include "sal/config.h"

#include "com/sun/star/corba/iiop/ListenPoint.hdl"

#include "com/sun/star/corba/CorbaString8.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba { namespace iiop {

inline ListenPoint::ListenPoint() SAL_THROW( () )
    : host()
    , port(0)
{
}

inline ListenPoint::ListenPoint(const ::com::sun::star::corba::CorbaString8& host_, const ::sal_uInt16& port_) SAL_THROW( () )
    : host(host_)
    , port(port_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace corba { namespace iiop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::iiop::ListenPoint const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::corba::CorbaString8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.iiop.ListenPoint", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::iiop::ListenPoint const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::iiop::ListenPoint >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_IIOP_LISTENPOINT_HPP
