#ifndef INCLUDED_COM_SUN_STAR_REFLECTION_XENUMTYPEDESCRIPTION_HPP
#define INCLUDED_COM_SUN_STAR_REFLECTION_XENUMTYPEDESCRIPTION_HPP

#include "sal/config.h"

#include "com/sun/star/reflection/XEnumTypeDescription.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/reflection/XTypeDescription.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace reflection {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::reflection::XEnumTypeDescription const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::reflection::XTypeDescription > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.reflection.XEnumTypeDescription", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::reflection::XEnumTypeDescription > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::reflection::XEnumTypeDescription > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::reflection::XEnumTypeDescription::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::reflection::XEnumTypeDescription > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_REFLECTION_XENUMTYPEDESCRIPTION_HPP
