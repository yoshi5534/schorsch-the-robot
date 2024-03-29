#ifndef INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_DRAGSOURCEEVENT_HPP
#define INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_DRAGSOURCEEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/datatransfer/dnd/DragSourceEvent.hdl"

#include "com/sun/star/datatransfer/dnd/XDragSource.hpp"
#include "com/sun/star/datatransfer/dnd/XDragSourceContext.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace datatransfer { namespace dnd {

inline DragSourceEvent::DragSourceEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , DragSourceContext()
    , DragSource()
{
}

inline DragSourceEvent::DragSourceEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::dnd::XDragSourceContext >& DragSourceContext_, const ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::dnd::XDragSource >& DragSource_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , DragSourceContext(DragSourceContext_)
    , DragSource(DragSource_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace datatransfer { namespace dnd {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::datatransfer::dnd::DragSourceEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::dnd::XDragSourceContext > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::dnd::XDragSource > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.datatransfer.dnd.DragSourceEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::datatransfer::dnd::DragSourceEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::datatransfer::dnd::DragSourceEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_DRAGSOURCEEVENT_HPP
