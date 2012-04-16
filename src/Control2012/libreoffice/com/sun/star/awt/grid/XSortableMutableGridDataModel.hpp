#ifndef INCLUDED_COM_SUN_STAR_AWT_GRID_XSORTABLEMUTABLEGRIDDATAMODEL_HPP
#define INCLUDED_COM_SUN_STAR_AWT_GRID_XSORTABLEMUTABLEGRIDDATAMODEL_HPP

#include "sal/config.h"

#include "com/sun/star/awt/grid/XSortableMutableGridDataModel.hdl"

#include "com/sun/star/awt/grid/XSortableGridData.hpp"
#include "com/sun/star/awt/grid/XMutableGridDataModel.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace awt { namespace grid {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::grid::XSortableMutableGridDataModel const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[2];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::awt::grid::XMutableGridDataModel > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::awt::grid::XSortableGridData > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.awt.grid.XSortableMutableGridDataModel", 2, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::awt::grid::XSortableMutableGridDataModel > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::awt::grid::XSortableMutableGridDataModel > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::awt::grid::XSortableMutableGridDataModel::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::awt::grid::XSortableMutableGridDataModel > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_AWT_GRID_XSORTABLEMUTABLEGRIDDATAMODEL_HPP
