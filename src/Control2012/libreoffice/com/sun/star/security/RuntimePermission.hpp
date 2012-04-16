#ifndef INCLUDED_COM_SUN_STAR_SECURITY_RUNTIMEPERMISSION_HPP
#define INCLUDED_COM_SUN_STAR_SECURITY_RUNTIMEPERMISSION_HPP

#include "sal/config.h"

#include "com/sun/star/security/RuntimePermission.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace security {

inline RuntimePermission::RuntimePermission() SAL_THROW( () )
    : Name()
{
}

inline RuntimePermission::RuntimePermission(const ::rtl::OUString& Name_) SAL_THROW( () )
    : Name(Name_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace security {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::security::RuntimePermission const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.security.RuntimePermission", 0, 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::security::RuntimePermission const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::security::RuntimePermission >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SECURITY_RUNTIMEPERMISSION_HPP
