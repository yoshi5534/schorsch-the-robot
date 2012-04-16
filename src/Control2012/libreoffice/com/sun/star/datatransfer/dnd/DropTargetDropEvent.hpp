#ifndef INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_DROPTARGETDROPEVENT_HPP
#define INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_DROPTARGETDROPEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/datatransfer/dnd/DropTargetDropEvent.hdl"

#include "com/sun/star/datatransfer/dnd/XDropTargetDropContext.hpp"
#include "com/sun/star/datatransfer/XTransferable.hpp"
#include "com/sun/star/datatransfer/dnd/DropTargetEvent.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace datatransfer { namespace dnd {

inline DropTargetDropEvent::DropTargetDropEvent() SAL_THROW( () )
    : ::com::sun::star::datatransfer::dnd::DropTargetEvent()
    , Context()
    , DropAction(0)
    , LocationX(0)
    , LocationY(0)
    , SourceActions(0)
    , Transferable()
{
}

inline DropTargetDropEvent::DropTargetDropEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int8& Dummy_, const ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::dnd::XDropTargetDropContext >& Context_, const ::sal_Int8& DropAction_, const ::sal_Int32& LocationX_, const ::sal_Int32& LocationY_, const ::sal_Int8& SourceActions_, const ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::XTransferable >& Transferable_) SAL_THROW( () )
    : ::com::sun::star::datatransfer::dnd::DropTargetEvent(Source_, Dummy_)
    , Context(Context_)
    , DropAction(DropAction_)
    , LocationX(LocationX_)
    , LocationY(LocationY_)
    , SourceActions(SourceActions_)
    , Transferable(Transferable_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace datatransfer { namespace dnd {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::datatransfer::dnd::DropTargetDropEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::dnd::XDropTargetDropContext > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::XTransferable > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.datatransfer.dnd.DropTargetDropEvent", ::cppu::UnoType< ::com::sun::star::datatransfer::dnd::DropTargetEvent >::get().getTypeLibType(), 6, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::datatransfer::dnd::DropTargetDropEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::datatransfer::dnd::DropTargetDropEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_DROPTARGETDROPEVENT_HPP
