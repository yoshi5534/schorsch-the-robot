#ifndef INCLUDED_COM_SUN_STAR_BRIDGE_OLEAUTOMATION_DECIMAL_HPP
#define INCLUDED_COM_SUN_STAR_BRIDGE_OLEAUTOMATION_DECIMAL_HPP

#include "sal/config.h"

#include "com/sun/star/bridge/oleautomation/Decimal.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace bridge { namespace oleautomation {

inline Decimal::Decimal() SAL_THROW( () )
    : Scale(0)
    , Sign(0)
    , LowValue(0)
    , MiddleValue(0)
    , HighValue(0)
{
}

inline Decimal::Decimal(const ::sal_Int8& Scale_, const ::sal_Int8& Sign_, const ::sal_uInt32& LowValue_, const ::sal_uInt32& MiddleValue_, const ::sal_uInt32& HighValue_) SAL_THROW( () )
    : Scale(Scale_)
    , Sign(Sign_)
    , LowValue(LowValue_)
    , MiddleValue(MiddleValue_)
    , HighValue(HighValue_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace bridge { namespace oleautomation {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::bridge::oleautomation::Decimal const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.bridge.oleautomation.Decimal", 0, 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::bridge::oleautomation::Decimal const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::bridge::oleautomation::Decimal >::get();
}

#endif // INCLUDED_COM_SUN_STAR_BRIDGE_OLEAUTOMATION_DECIMAL_HPP
