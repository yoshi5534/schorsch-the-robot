#ifndef INCLUDED_COM_SUN_STAR_CONNECTION_SOCKETPERMISSION_HPP
#define INCLUDED_COM_SUN_STAR_CONNECTION_SOCKETPERMISSION_HPP

#include "sal/config.h"

#include "com/sun/star/connection/SocketPermission.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace connection {

inline SocketPermission::SocketPermission() SAL_THROW( () )
    : Host()
    , Actions()
{
}

inline SocketPermission::SocketPermission(const ::rtl::OUString& Host_, const ::rtl::OUString& Actions_) SAL_THROW( () )
    : Host(Host_)
    , Actions(Actions_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace connection {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::connection::SocketPermission const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.connection.SocketPermission", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::connection::SocketPermission const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::connection::SocketPermission >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CONNECTION_SOCKETPERMISSION_HPP
