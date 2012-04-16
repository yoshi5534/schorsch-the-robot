#ifndef INCLUDED_COM_SUN_STAR_AWT_GRID_GRIDCOLUMNEVENT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_GRID_GRIDCOLUMNEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/awt/grid/GridColumnEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt { namespace grid {

inline GridColumnEvent::GridColumnEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , AttributeName()
    , OldValue()
    , NewValue()
    , ColumnIndex(0)
{
}

inline GridColumnEvent::GridColumnEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::rtl::OUString& AttributeName_, const ::com::sun::star::uno::Any& OldValue_, const ::com::sun::star::uno::Any& NewValue_, const ::sal_Int32& ColumnIndex_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , AttributeName(AttributeName_)
    , OldValue(OldValue_)
    , NewValue(NewValue_)
    , ColumnIndex(ColumnIndex_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace awt { namespace grid {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::grid::GridColumnEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.grid.GridColumnEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::grid::GridColumnEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::grid::GridColumnEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_GRID_GRIDCOLUMNEVENT_HPP
