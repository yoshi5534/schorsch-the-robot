#ifndef INCLUDED_COM_SUN_STAR_AWT_GRID_GRIDDATAEVENT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_GRID_GRIDDATAEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/awt/grid/GridDataEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt { namespace grid {

inline GridDataEvent::GridDataEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , FirstColumn(0)
    , LastColumn(0)
    , FirstRow(0)
    , LastRow(0)
{
}

inline GridDataEvent::GridDataEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int32& FirstColumn_, const ::sal_Int32& LastColumn_, const ::sal_Int32& FirstRow_, const ::sal_Int32& LastRow_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , FirstColumn(FirstColumn_)
    , LastColumn(LastColumn_)
    , FirstRow(FirstRow_)
    , LastRow(LastRow_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace awt { namespace grid {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::grid::GridDataEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.grid.GridDataEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::grid::GridDataEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::grid::GridDataEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_GRID_GRIDDATAEVENT_HPP
