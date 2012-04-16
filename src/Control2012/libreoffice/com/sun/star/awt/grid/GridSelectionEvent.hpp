#ifndef INCLUDED_COM_SUN_STAR_AWT_GRID_GRIDSELECTIONEVENT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_GRID_GRIDSELECTIONEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/awt/grid/GridSelectionEvent.hdl"

#include "com/sun/star/awt/grid/SelectionEventType.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt { namespace grid {

inline GridSelectionEvent::GridSelectionEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Row(0)
    , Column(0)
    , Range(0)
    , Action(::com::sun::star::awt::grid::SelectionEventType_ADD)
{
}

inline GridSelectionEvent::GridSelectionEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int32& Row_, const ::sal_Int32& Column_, const ::sal_Int32& Range_, const ::com::sun::star::awt::grid::SelectionEventType& Action_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Row(Row_)
    , Column(Column_)
    , Range(Range_)
    , Action(Action_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace awt { namespace grid {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::grid::GridSelectionEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::awt::grid::SelectionEventType >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.grid.GridSelectionEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::grid::GridSelectionEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::grid::GridSelectionEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_GRID_GRIDSELECTIONEVENT_HPP
