#ifndef INCLUDED_COM_SUN_STAR_CHART2_INCREMENTDATA_HPP
#define INCLUDED_COM_SUN_STAR_CHART2_INCREMENTDATA_HPP

#include "sal/config.h"

#include "com/sun/star/chart2/IncrementData.hdl"

#include "com/sun/star/chart2/SubIncrement.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace chart2 {

inline IncrementData::IncrementData() SAL_THROW( () )
    : Distance()
    , PostEquidistant()
    , BaseValue()
    , SubIncrements()
{
}

inline IncrementData::IncrementData(const ::com::sun::star::uno::Any& Distance_, const ::com::sun::star::uno::Any& PostEquidistant_, const ::com::sun::star::uno::Any& BaseValue_, const ::com::sun::star::uno::Sequence< ::com::sun::star::chart2::SubIncrement >& SubIncrements_) SAL_THROW( () )
    : Distance(Distance_)
    , PostEquidistant(PostEquidistant_)
    , BaseValue(BaseValue_)
    , SubIncrements(SubIncrements_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace chart2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart2::IncrementData const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::chart2::SubIncrement > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.chart2.IncrementData", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart2::IncrementData const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart2::IncrementData >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART2_INCREMENTDATA_HPP
