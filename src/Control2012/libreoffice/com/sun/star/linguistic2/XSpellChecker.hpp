#ifndef INCLUDED_COM_SUN_STAR_LINGUISTIC2_XSPELLCHECKER_HPP
#define INCLUDED_COM_SUN_STAR_LINGUISTIC2_XSPELLCHECKER_HPP

#include "sal/config.h"

#include "com/sun/star/linguistic2/XSpellChecker.hdl"

#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/lang/Locale.hpp"
#include "com/sun/star/beans/PropertyValues.hpp"
#include "com/sun/star/linguistic2/XSpellAlternatives.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/linguistic2/XSupportedLocales.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace linguistic2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::linguistic2::XSpellChecker const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::linguistic2::XSupportedLocales > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.linguistic2.XSpellChecker", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::linguistic2::XSpellChecker > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::linguistic2::XSpellChecker > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::linguistic2::XSpellChecker::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::linguistic2::XSpellChecker > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_LINGUISTIC2_XSPELLCHECKER_HPP
