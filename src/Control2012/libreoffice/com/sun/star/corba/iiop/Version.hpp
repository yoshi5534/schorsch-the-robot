#ifndef INCLUDED_COM_SUN_STAR_CORBA_IIOP_VERSION_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_IIOP_VERSION_HPP

#include "sal/config.h"

#include "com/sun/star/corba/iiop/Version.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba { namespace iiop {

inline Version::Version() SAL_THROW( () )
    : major(0)
    , minor(0)
{
}

inline Version::Version(const ::sal_Int8& major_, const ::sal_Int8& minor_) SAL_THROW( () )
    : major(major_)
    , minor(minor_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace corba { namespace iiop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::iiop::Version const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.iiop.Version", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::iiop::Version const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::iiop::Version >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_IIOP_VERSION_HPP
