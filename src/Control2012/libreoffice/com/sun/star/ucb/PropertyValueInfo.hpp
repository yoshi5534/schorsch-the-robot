#ifndef INCLUDED_COM_SUN_STAR_UCB_PROPERTYVALUEINFO_HPP
#define INCLUDED_COM_SUN_STAR_UCB_PROPERTYVALUEINFO_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/PropertyValueInfo.hdl"

#include "com/sun/star/ucb/PropertyValueState.hpp"
#include "com/sun/star/beans/PropertyValue.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline PropertyValueInfo::PropertyValueInfo() SAL_THROW( () )
    : ::com::sun::star::beans::PropertyValue()
    , ValueState(::com::sun::star::ucb::PropertyValueState_UNPROCESSED)
{
}

inline PropertyValueInfo::PropertyValueInfo(const ::rtl::OUString& Name_, const ::sal_Int32& Handle_, const ::com::sun::star::uno::Any& Value_, const ::com::sun::star::beans::PropertyState& State_, const ::com::sun::star::ucb::PropertyValueState& ValueState_) SAL_THROW( () )
    : ::com::sun::star::beans::PropertyValue(Name_, Handle_, Value_, State_)
    , ValueState(ValueState_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::PropertyValueInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::ucb::PropertyValueState >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.PropertyValueInfo", ::cppu::UnoType< ::com::sun::star::beans::PropertyValue >::get().getTypeLibType(), 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::PropertyValueInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::PropertyValueInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_PROPERTYVALUEINFO_HPP
