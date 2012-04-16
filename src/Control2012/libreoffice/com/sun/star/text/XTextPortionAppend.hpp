#ifndef INCLUDED_COM_SUN_STAR_TEXT_XTEXTPORTIONAPPEND_HPP
#define INCLUDED_COM_SUN_STAR_TEXT_XTEXTPORTIONAPPEND_HPP

#include "sal/config.h"

#include "com/sun/star/text/XTextPortionAppend.hdl"

#include "com/sun/star/beans/UnknownPropertyException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/beans/PropertyValues.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/text/XTextRange.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace text {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::text::XTextPortionAppend const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.text.XTextPortionAppend", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::text::XTextPortionAppend > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::text::XTextPortionAppend > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::text::XTextPortionAppend::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::text::XTextPortionAppend > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_TEXT_XTEXTPORTIONAPPEND_HPP
