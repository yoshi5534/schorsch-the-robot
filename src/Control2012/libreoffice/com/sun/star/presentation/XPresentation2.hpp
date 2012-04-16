#ifndef INCLUDED_COM_SUN_STAR_PRESENTATION_XPRESENTATION2_HPP
#define INCLUDED_COM_SUN_STAR_PRESENTATION_XPRESENTATION2_HPP

#include "sal/config.h"

#include "com/sun/star/presentation/XPresentation2.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/beans/XPropertySet.hpp"
#include "com/sun/star/presentation/XSlideShowController.hpp"
#include "com/sun/star/presentation/XPresentation.hpp"
#include "com/sun/star/beans/PropertyValue.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace presentation {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::presentation::XPresentation2 const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[2];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::presentation::XPresentation > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::beans::XPropertySet > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.presentation.XPresentation2", 2, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::presentation::XPresentation2 > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::presentation::XPresentation2 > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::presentation::XPresentation2::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::presentation::XPresentation2 > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_PRESENTATION_XPRESENTATION2_HPP
