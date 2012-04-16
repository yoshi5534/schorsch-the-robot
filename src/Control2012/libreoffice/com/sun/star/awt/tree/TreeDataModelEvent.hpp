#ifndef INCLUDED_COM_SUN_STAR_AWT_TREE_TREEDATAMODELEVENT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_TREE_TREEDATAMODELEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/awt/tree/TreeDataModelEvent.hdl"

#include "com/sun/star/awt/tree/XTreeNode.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt { namespace tree {

inline TreeDataModelEvent::TreeDataModelEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Nodes()
    , ParentNode()
{
}

inline TreeDataModelEvent::TreeDataModelEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Reference< ::com::sun::star::awt::tree::XTreeNode > >& Nodes_, const ::com::sun::star::uno::Reference< ::com::sun::star::awt::tree::XTreeNode >& ParentNode_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Nodes(Nodes_)
    , ParentNode(ParentNode_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace awt { namespace tree {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::tree::TreeDataModelEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::uno::Reference< ::com::sun::star::awt::tree::XTreeNode > > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::awt::tree::XTreeNode > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.tree.TreeDataModelEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::tree::TreeDataModelEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::tree::TreeDataModelEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_TREE_TREEDATAMODELEVENT_HPP
