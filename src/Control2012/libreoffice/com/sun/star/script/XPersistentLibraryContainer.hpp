#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_XPERSISTENTLIBRARYCONTAINER_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_XPERSISTENTLIBRARYCONTAINER_HPP

#include "sal/config.h"

#include "com/sun/star/script/XPersistentLibraryContainer.hdl"

#include "com/sun/star/script/XLibraryContainer2.hpp"
#include "com/sun/star/lang/WrappedTargetException.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/util/XModifiable.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::XPersistentLibraryContainer const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[2];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::util::XModifiable > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::script::XLibraryContainer2 > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.script.XPersistentLibraryContainer", 2, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::script::XPersistentLibraryContainer > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::script::XPersistentLibraryContainer > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::script::XPersistentLibraryContainer::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::script::XPersistentLibraryContainer > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_XPERSISTENTLIBRARYCONTAINER_HPP
