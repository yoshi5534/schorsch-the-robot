#ifndef INCLUDED_COM_SUN_STAR_AWT_TREE_XTREECONTROL_HPP
#define INCLUDED_COM_SUN_STAR_AWT_TREE_XTREECONTROL_HPP

#include "sal/config.h"

#include "com/sun/star/awt/tree/XTreeControl.hdl"

#include "com/sun/star/awt/tree/XTreeEditListener.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/awt/Rectangle.hpp"
#include "com/sun/star/awt/tree/ExpandVetoException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/awt/tree/XTreeNode.hpp"
#include "com/sun/star/view/XMultiSelectionSupplier.hpp"
#include "com/sun/star/awt/tree/XTreeExpansionListener.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace awt { namespace tree {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::tree::XTreeControl const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::view::XMultiSelectionSupplier > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.awt.tree.XTreeControl", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::awt::tree::XTreeControl > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::awt::tree::XTreeControl > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::awt::tree::XTreeControl::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::awt::tree::XTreeControl > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_AWT_TREE_XTREECONTROL_HPP
