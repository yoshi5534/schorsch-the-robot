#ifndef INCLUDED_COM_SUN_STAR_UI_CONTEXTMENUEXECUTEEVENT_HPP
#define INCLUDED_COM_SUN_STAR_UI_CONTEXTMENUEXECUTEEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/ui/ContextMenuExecuteEvent.hdl"

#include "com/sun/star/view/XSelectionSupplier.hpp"
#include "com/sun/star/container/XIndexContainer.hpp"
#include "com/sun/star/awt/XWindow.hpp"
#include "com/sun/star/awt/Point.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ui {

inline ContextMenuExecuteEvent::ContextMenuExecuteEvent() SAL_THROW( () )
    : SourceWindow()
    , ExecutePosition()
    , ActionTriggerContainer()
    , Selection()
{
}

inline ContextMenuExecuteEvent::ContextMenuExecuteEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::awt::XWindow >& SourceWindow_, const ::com::sun::star::awt::Point& ExecutePosition_, const ::com::sun::star::uno::Reference< ::com::sun::star::container::XIndexContainer >& ActionTriggerContainer_, const ::com::sun::star::uno::Reference< ::com::sun::star::view::XSelectionSupplier >& Selection_) SAL_THROW( () )
    : SourceWindow(SourceWindow_)
    , ExecutePosition(ExecutePosition_)
    , ActionTriggerContainer(ActionTriggerContainer_)
    , Selection(Selection_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ui {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ui::ContextMenuExecuteEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::awt::XWindow > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::awt::Point >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::container::XIndexContainer > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::view::XSelectionSupplier > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ui.ContextMenuExecuteEvent", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ui::ContextMenuExecuteEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ui::ContextMenuExecuteEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UI_CONTEXTMENUEXECUTEEVENT_HPP
