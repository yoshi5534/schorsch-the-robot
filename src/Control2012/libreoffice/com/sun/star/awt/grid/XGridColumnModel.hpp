#ifndef INCLUDED_COM_SUN_STAR_AWT_GRID_XGRIDCOLUMNMODEL_HPP
#define INCLUDED_COM_SUN_STAR_AWT_GRID_XGRIDCOLUMNMODEL_HPP

#include "sal/config.h"

#include "com/sun/star/awt/grid/XGridColumnModel.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/lang/IndexOutOfBoundsException.hpp"
#include "com/sun/star/awt/grid/XGridColumn.hpp"
#include "com/sun/star/util/XCloneable.hpp"
#include "com/sun/star/container/XContainer.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace awt { namespace grid {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::grid::XGridColumnModel const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[3];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::container::XContainer > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::util::XCloneable > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.awt.grid.XGridColumnModel", 3, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::awt::grid::XGridColumnModel > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::awt::grid::XGridColumnModel > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::awt::grid::XGridColumnModel::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::awt::grid::XGridColumnModel > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_AWT_GRID_XGRIDCOLUMNMODEL_HPP
