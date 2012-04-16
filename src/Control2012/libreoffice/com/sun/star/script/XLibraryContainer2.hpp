#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_XLIBRARYCONTAINER2_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_XLIBRARYCONTAINER2_HPP

#include "sal/config.h"

#include "com/sun/star/script/XLibraryContainer2.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/container/ElementExistException.hpp"
#include "com/sun/star/container/NoSuchElementException.hpp"
#include "com/sun/star/script/XLibraryContainer.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::XLibraryContainer2 const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::script::XLibraryContainer > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.script.XLibraryContainer2", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::script::XLibraryContainer2 > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::script::XLibraryContainer2 > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::script::XLibraryContainer2::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::script::XLibraryContainer2 > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_XLIBRARYCONTAINER2_HPP
