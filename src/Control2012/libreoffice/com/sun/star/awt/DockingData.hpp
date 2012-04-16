#ifndef INCLUDED_COM_SUN_STAR_AWT_DOCKINGDATA_HPP
#define INCLUDED_COM_SUN_STAR_AWT_DOCKINGDATA_HPP

#include "sal/config.h"

#include "com/sun/star/awt/DockingData.hdl"

#include "com/sun/star/awt/Rectangle.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline DockingData::DockingData() SAL_THROW( () )
    : TrackingRectangle()
    , bFloating(false)
{
}

inline DockingData::DockingData(const ::com::sun::star::awt::Rectangle& TrackingRectangle_, const ::sal_Bool& bFloating_) SAL_THROW( () )
    : TrackingRectangle(TrackingRectangle_)
    , bFloating(bFloating_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::DockingData const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::awt::Rectangle >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.DockingData", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::DockingData const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::DockingData >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_DOCKINGDATA_HPP
