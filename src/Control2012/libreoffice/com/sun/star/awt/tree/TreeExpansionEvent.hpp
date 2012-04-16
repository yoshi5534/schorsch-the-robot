#ifndef INCLUDED_COM_SUN_STAR_AWT_TREE_TREEEXPANSIONEVENT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_TREE_TREEEXPANSIONEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/awt/tree/TreeExpansionEvent.hdl"

#include "com/sun/star/awt/tree/XTreeNode.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt { namespace tree {

inline TreeExpansionEvent::TreeExpansionEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Node()
{
}

inline TreeExpansionEvent::TreeExpansionEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::uno::Reference< ::com::sun::star::awt::tree::XTreeNode >& Node_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Node(Node_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace awt { namespace tree {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::tree::TreeExpansionEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::awt::tree::XTreeNode > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.tree.TreeExpansionEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::tree::TreeExpansionEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::tree::TreeExpansionEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_TREE_TREEEXPANSIONEVENT_HPP
