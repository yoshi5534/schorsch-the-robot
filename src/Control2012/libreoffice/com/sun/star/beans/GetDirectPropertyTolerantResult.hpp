#ifndef INCLUDED_COM_SUN_STAR_BEANS_GETDIRECTPROPERTYTOLERANTRESULT_HPP
#define INCLUDED_COM_SUN_STAR_BEANS_GETDIRECTPROPERTYTOLERANTRESULT_HPP

#include "sal/config.h"

#include "com/sun/star/beans/GetDirectPropertyTolerantResult.hdl"

#include "com/sun/star/beans/GetPropertyTolerantResult.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace beans {

inline GetDirectPropertyTolerantResult::GetDirectPropertyTolerantResult() SAL_THROW( () )
    : ::com::sun::star::beans::GetPropertyTolerantResult()
    , Name()
{
}

inline GetDirectPropertyTolerantResult::GetDirectPropertyTolerantResult(const ::sal_Int16& Result_, const ::com::sun::star::beans::PropertyState& State_, const ::com::sun::star::uno::Any& Value_, const ::rtl::OUString& Name_) SAL_THROW( () )
    : ::com::sun::star::beans::GetPropertyTolerantResult(Result_, State_, Value_)
    , Name(Name_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace beans {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::beans::GetDirectPropertyTolerantResult const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.beans.GetDirectPropertyTolerantResult", ::cppu::UnoType< ::com::sun::star::beans::GetPropertyTolerantResult >::get().getTypeLibType(), 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::beans::GetDirectPropertyTolerantResult const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::beans::GetDirectPropertyTolerantResult >::get();
}

#endif // INCLUDED_COM_SUN_STAR_BEANS_GETDIRECTPROPERTYTOLERANTRESULT_HPP
