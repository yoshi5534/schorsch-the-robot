#ifndef INCLUDED_COM_SUN_STAR_OFFICE_XANNOTATION_HPP
#define INCLUDED_COM_SUN_STAR_OFFICE_XANNOTATION_HPP

#include "sal/config.h"

#include "com/sun/star/office/XAnnotation.hdl"

#include "com/sun/star/text/XText.hpp"
#include "com/sun/star/util/DateTime.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/geometry/RealSize2D.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/beans/XPropertySet.hpp"
#include "com/sun/star/geometry/RealPoint2D.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace office {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::office::XAnnotation const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[2];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::beans::XPropertySet > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.office.XAnnotation", 2, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::office::XAnnotation > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::office::XAnnotation > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::office::XAnnotation::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::office::XAnnotation > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_OFFICE_XANNOTATION_HPP
