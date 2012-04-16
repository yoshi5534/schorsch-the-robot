#ifndef INCLUDED_COM_SUN_STAR_DOCUMENT_XEMBEDDEDOBJECTSUPPLIER2_HPP
#define INCLUDED_COM_SUN_STAR_DOCUMENT_XEMBEDDEDOBJECTSUPPLIER2_HPP

#include "sal/config.h"

#include "com/sun/star/document/XEmbeddedObjectSupplier2.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/embed/XEmbeddedObject.hpp"
#include "com/sun/star/document/XEmbeddedObjectSupplier.hpp"
#include "com/sun/star/graphic/XGraphic.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace document {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::document::XEmbeddedObjectSupplier2 const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::document::XEmbeddedObjectSupplier > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.document.XEmbeddedObjectSupplier2", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::document::XEmbeddedObjectSupplier2 > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::document::XEmbeddedObjectSupplier2 > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::document::XEmbeddedObjectSupplier2::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::document::XEmbeddedObjectSupplier2 > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_DOCUMENT_XEMBEDDEDOBJECTSUPPLIER2_HPP
