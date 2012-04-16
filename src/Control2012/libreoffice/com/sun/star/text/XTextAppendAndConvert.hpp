#ifndef INCLUDED_COM_SUN_STAR_TEXT_XTEXTAPPENDANDCONVERT_HPP
#define INCLUDED_COM_SUN_STAR_TEXT_XTEXTAPPENDANDCONVERT_HPP

#include "sal/config.h"

#include "com/sun/star/text/XTextAppendAndConvert.hdl"

#include "com/sun/star/text/XTextContentAppend.hpp"
#include "com/sun/star/text/XTextConvert.hpp"
#include "com/sun/star/text/XTextAppend.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace text {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::text::XTextAppendAndConvert const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[3];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::text::XTextAppend > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::text::XTextContentAppend > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::text::XTextConvert > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.text.XTextAppendAndConvert", 3, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::text::XTextAppendAndConvert > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::text::XTextAppendAndConvert > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::text::XTextAppendAndConvert::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::text::XTextAppendAndConvert > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_TEXT_XTEXTAPPENDANDCONVERT_HPP
