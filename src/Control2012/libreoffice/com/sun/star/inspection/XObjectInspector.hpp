#ifndef INCLUDED_COM_SUN_STAR_INSPECTION_XOBJECTINSPECTOR_HPP
#define INCLUDED_COM_SUN_STAR_INSPECTION_XOBJECTINSPECTOR_HPP

#include "sal/config.h"

#include "com/sun/star/inspection/XObjectInspector.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/util/VetoException.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/inspection/XObjectInspectorUI.hpp"
#include "com/sun/star/inspection/XObjectInspectorModel.hpp"
#include "com/sun/star/frame/XDispatchProvider.hpp"
#include "com/sun/star/frame/XController.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace inspection {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::inspection::XObjectInspector const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[2];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::frame::XController > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::frame::XDispatchProvider > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.inspection.XObjectInspector", 2, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::inspection::XObjectInspector > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::inspection::XObjectInspector > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::inspection::XObjectInspector::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::inspection::XObjectInspector > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_INSPECTION_XOBJECTINSPECTOR_HPP
