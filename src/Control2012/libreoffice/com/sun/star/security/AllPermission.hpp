#ifndef INCLUDED_COM_SUN_STAR_SECURITY_ALLPERMISSION_HPP
#define INCLUDED_COM_SUN_STAR_SECURITY_ALLPERMISSION_HPP

#include "sal/config.h"

#include "com/sun/star/security/AllPermission.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace security {

inline AllPermission::AllPermission() SAL_THROW( () )
    : dummy(0)
{
}

inline AllPermission::AllPermission(const ::sal_Int8& dummy_) SAL_THROW( () )
    : dummy(dummy_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace security {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::security::AllPermission const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.security.AllPermission", 0, 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::security::AllPermission const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::security::AllPermission >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SECURITY_ALLPERMISSION_HPP
