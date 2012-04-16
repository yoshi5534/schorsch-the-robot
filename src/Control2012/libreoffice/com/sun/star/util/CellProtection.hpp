#ifndef INCLUDED_COM_SUN_STAR_UTIL_CELLPROTECTION_HPP
#define INCLUDED_COM_SUN_STAR_UTIL_CELLPROTECTION_HPP

#include "sal/config.h"

#include "com/sun/star/util/CellProtection.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace util {

inline CellProtection::CellProtection() SAL_THROW( () )
    : IsLocked(false)
    , IsFormulaHidden(false)
    , IsHidden(false)
    , IsPrintHidden(false)
{
}

inline CellProtection::CellProtection(const ::sal_Bool& IsLocked_, const ::sal_Bool& IsFormulaHidden_, const ::sal_Bool& IsHidden_, const ::sal_Bool& IsPrintHidden_) SAL_THROW( () )
    : IsLocked(IsLocked_)
    , IsFormulaHidden(IsFormulaHidden_)
    , IsHidden(IsHidden_)
    , IsPrintHidden(IsPrintHidden_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace util {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::util::CellProtection const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.util.CellProtection", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::util::CellProtection const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::util::CellProtection >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UTIL_CELLPROTECTION_HPP
