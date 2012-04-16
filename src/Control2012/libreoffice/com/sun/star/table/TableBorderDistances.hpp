#ifndef INCLUDED_COM_SUN_STAR_TABLE_TABLEBORDERDISTANCES_HPP
#define INCLUDED_COM_SUN_STAR_TABLE_TABLEBORDERDISTANCES_HPP

#include "sal/config.h"

#include "com/sun/star/table/TableBorderDistances.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace table {

inline TableBorderDistances::TableBorderDistances() SAL_THROW( () )
    : TopDistance(0)
    , IsTopDistanceValid(false)
    , BottomDistance(0)
    , IsBottomDistanceValid(false)
    , LeftDistance(0)
    , IsLeftDistanceValid(false)
    , RightDistance(0)
    , IsRightDistanceValid(false)
{
}

inline TableBorderDistances::TableBorderDistances(const ::sal_Int16& TopDistance_, const ::sal_Bool& IsTopDistanceValid_, const ::sal_Int16& BottomDistance_, const ::sal_Bool& IsBottomDistanceValid_, const ::sal_Int16& LeftDistance_, const ::sal_Bool& IsLeftDistanceValid_, const ::sal_Int16& RightDistance_, const ::sal_Bool& IsRightDistanceValid_) SAL_THROW( () )
    : TopDistance(TopDistance_)
    , IsTopDistanceValid(IsTopDistanceValid_)
    , BottomDistance(BottomDistance_)
    , IsBottomDistanceValid(IsBottomDistanceValid_)
    , LeftDistance(LeftDistance_)
    , IsLeftDistanceValid(IsLeftDistanceValid_)
    , RightDistance(RightDistance_)
    , IsRightDistanceValid(IsRightDistanceValid_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace table {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::table::TableBorderDistances const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.table.TableBorderDistances", 0, 8, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::table::TableBorderDistances const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::table::TableBorderDistances >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TABLE_TABLEBORDERDISTANCES_HPP
