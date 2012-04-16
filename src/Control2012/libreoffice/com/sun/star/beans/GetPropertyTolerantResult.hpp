#ifndef INCLUDED_COM_SUN_STAR_BEANS_GETPROPERTYTOLERANTRESULT_HPP
#define INCLUDED_COM_SUN_STAR_BEANS_GETPROPERTYTOLERANTRESULT_HPP

#include "sal/config.h"

#include "com/sun/star/beans/GetPropertyTolerantResult.hdl"

#include "com/sun/star/beans/PropertyState.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace beans {

inline GetPropertyTolerantResult::GetPropertyTolerantResult() SAL_THROW( () )
    : Result(0)
    , State(::com::sun::star::beans::PropertyState_DIRECT_VALUE)
    , Value()
{
}

inline GetPropertyTolerantResult::GetPropertyTolerantResult(const ::sal_Int16& Result_, const ::com::sun::star::beans::PropertyState& State_, const ::com::sun::star::uno::Any& Value_) SAL_THROW( () )
    : Result(Result_)
    , State(State_)
    , Value(Value_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace beans {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::beans::GetPropertyTolerantResult const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::beans::PropertyState >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.beans.GetPropertyTolerantResult", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::beans::GetPropertyTolerantResult const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::beans::GetPropertyTolerantResult >::get();
}

#endif // INCLUDED_COM_SUN_STAR_BEANS_GETPROPERTYTOLERANTRESULT_HPP
