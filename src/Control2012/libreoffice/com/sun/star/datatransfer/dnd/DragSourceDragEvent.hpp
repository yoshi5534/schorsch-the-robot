#ifndef INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_DRAGSOURCEDRAGEVENT_HPP
#define INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_DRAGSOURCEDRAGEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/datatransfer/dnd/DragSourceDragEvent.hdl"

#include "com/sun/star/datatransfer/dnd/DragSourceEvent.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace datatransfer { namespace dnd {

inline DragSourceDragEvent::DragSourceDragEvent() SAL_THROW( () )
    : ::com::sun::star::datatransfer::dnd::DragSourceEvent()
    , DropAction(0)
    , UserAction(0)
{
}

inline DragSourceDragEvent::DragSourceDragEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::dnd::XDragSourceContext >& DragSourceContext_, const ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::dnd::XDragSource >& DragSource_, const ::sal_Int8& DropAction_, const ::sal_Int8& UserAction_) SAL_THROW( () )
    : ::com::sun::star::datatransfer::dnd::DragSourceEvent(Source_, DragSourceContext_, DragSource_)
    , DropAction(DropAction_)
    , UserAction(UserAction_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace datatransfer { namespace dnd {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::datatransfer::dnd::DragSourceDragEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.datatransfer.dnd.DragSourceDragEvent", ::cppu::UnoType< ::com::sun::star::datatransfer::dnd::DragSourceEvent >::get().getTypeLibType(), 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::datatransfer::dnd::DragSourceDragEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::datatransfer::dnd::DragSourceDragEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_DRAGSOURCEDRAGEVENT_HPP