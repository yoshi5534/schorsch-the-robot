#ifndef INCLUDED_COM_SUN_STAR_EMBED_XOLESIMPLESTORAGE_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_XOLESIMPLESTORAGE_HPP

#include "sal/config.h"

#include "com/sun/star/embed/XOLESimpleStorage.hdl"

#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/embed/XTransactedObject.hpp"
#include "com/sun/star/embed/XClassifiedObject.hpp"
#include "com/sun/star/container/XNameContainer.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace embed {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::embed::XOLESimpleStorage const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[4];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::container::XNameContainer > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::embed::XTransactedObject > >::get().getTypeLibType();
        aSuperTypes[3] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::embed::XClassifiedObject > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.embed.XOLESimpleStorage", 4, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::embed::XOLESimpleStorage > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::embed::XOLESimpleStorage > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::embed::XOLESimpleStorage::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::embed::XOLESimpleStorage > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_EMBED_XOLESIMPLESTORAGE_HPP
