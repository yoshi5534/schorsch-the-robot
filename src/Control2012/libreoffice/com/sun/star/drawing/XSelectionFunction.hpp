#ifndef INCLUDED_COM_SUN_STAR_DRAWING_XSELECTIONFUNCTION_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_XSELECTIONFUNCTION_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/XSelectionFunction.hdl"

#include "com/sun/star/awt/XMouseMotionHandler.hpp"
#include "com/sun/star/awt/XMouseClickHandler.hpp"
#include "com/sun/star/awt/XKeyHandler.hpp"
#include "com/sun/star/frame/XDispatch.hpp"
#include "com/sun/star/view/XSelectionChangeListener.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/lang/XServiceInfo.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::XSelectionFunction const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[7];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XServiceInfo > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::frame::XDispatch > >::get().getTypeLibType();
        aSuperTypes[3] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::awt::XKeyHandler > >::get().getTypeLibType();
        aSuperTypes[4] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::awt::XMouseClickHandler > >::get().getTypeLibType();
        aSuperTypes[5] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::awt::XMouseMotionHandler > >::get().getTypeLibType();
        aSuperTypes[6] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::view::XSelectionChangeListener > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.drawing.XSelectionFunction", 7, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::drawing::XSelectionFunction > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XSelectionFunction > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::drawing::XSelectionFunction::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XSelectionFunction > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_XSELECTIONFUNCTION_HPP
