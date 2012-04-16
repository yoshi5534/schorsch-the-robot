#ifndef INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_DRAGGESTUREEVENT_HPP
#define INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_DRAGGESTUREEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/datatransfer/dnd/DragGestureEvent.hdl"

#include "com/sun/star/datatransfer/dnd/XDragSource.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace datatransfer { namespace dnd {

inline DragGestureEvent::DragGestureEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , DragAction(0)
    , DragOriginX(0)
    , DragOriginY(0)
    , DragSource()
    , Event()
{
}

inline DragGestureEvent::DragGestureEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int8& DragAction_, const ::sal_Int32& DragOriginX_, const ::sal_Int32& DragOriginY_, const ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::dnd::XDragSource >& DragSource_, const ::com::sun::star::uno::Any& Event_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , DragAction(DragAction_)
    , DragOriginX(DragOriginX_)
    , DragOriginY(DragOriginY_)
    , DragSource(DragSource_)
    , Event(Event_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace datatransfer { namespace dnd {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::datatransfer::dnd::DragGestureEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::dnd::XDragSource > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.datatransfer.dnd.DragGestureEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::datatransfer::dnd::DragGestureEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::datatransfer::dnd::DragGestureEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_DRAGGESTUREEVENT_HPP
