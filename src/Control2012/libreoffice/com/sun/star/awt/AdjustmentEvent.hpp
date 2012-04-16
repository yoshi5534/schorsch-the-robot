#ifndef INCLUDED_COM_SUN_STAR_AWT_ADJUSTMENTEVENT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_ADJUSTMENTEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/awt/AdjustmentEvent.hdl"

#include "com/sun/star/awt/AdjustmentType.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline AdjustmentEvent::AdjustmentEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Value(0)
    , Type(::com::sun::star::awt::AdjustmentType_ADJUST_LINE)
{
}

inline AdjustmentEvent::AdjustmentEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int32& Value_, const ::com::sun::star::awt::AdjustmentType& Type_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Value(Value_)
    , Type(Type_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::AdjustmentEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::awt::AdjustmentType >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.AdjustmentEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::AdjustmentEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::AdjustmentEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_ADJUSTMENTEVENT_HPP
