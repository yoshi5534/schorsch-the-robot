#ifndef INCLUDED_COM_SUN_STAR_CHART2_DATAPOINTLABEL_HPP
#define INCLUDED_COM_SUN_STAR_CHART2_DATAPOINTLABEL_HPP

#include "sal/config.h"

#include "com/sun/star/chart2/DataPointLabel.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace chart2 {

inline DataPointLabel::DataPointLabel() SAL_THROW( () )
    : ShowNumber(false)
    , ShowNumberInPercent(false)
    , ShowCategoryName(false)
    , ShowLegendSymbol(false)
{
}

inline DataPointLabel::DataPointLabel(const ::sal_Bool& ShowNumber_, const ::sal_Bool& ShowNumberInPercent_, const ::sal_Bool& ShowCategoryName_, const ::sal_Bool& ShowLegendSymbol_) SAL_THROW( () )
    : ShowNumber(ShowNumber_)
    , ShowNumberInPercent(ShowNumberInPercent_)
    , ShowCategoryName(ShowCategoryName_)
    , ShowLegendSymbol(ShowLegendSymbol_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace chart2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart2::DataPointLabel const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.chart2.DataPointLabel", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart2::DataPointLabel const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart2::DataPointLabel >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART2_DATAPOINTLABEL_HPP
