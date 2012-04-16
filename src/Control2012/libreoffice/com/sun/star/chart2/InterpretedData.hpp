#ifndef INCLUDED_COM_SUN_STAR_CHART2_INTERPRETEDDATA_HPP
#define INCLUDED_COM_SUN_STAR_CHART2_INTERPRETEDDATA_HPP

#include "sal/config.h"

#include "com/sun/star/chart2/InterpretedData.hdl"

#include "com/sun/star/chart2/data/XLabeledDataSequence.hpp"
#include "com/sun/star/chart2/XDataSeries.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace chart2 {

inline InterpretedData::InterpretedData() SAL_THROW( () )
    : Series()
    , Categories()
{
}

inline InterpretedData::InterpretedData(const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Reference< ::com::sun::star::chart2::XDataSeries > > >& Series_, const ::com::sun::star::uno::Reference< ::com::sun::star::chart2::data::XLabeledDataSequence >& Categories_) SAL_THROW( () )
    : Series(Series_)
    , Categories(Categories_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace chart2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart2::InterpretedData const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::cppu::UnoSequenceType< ::com::sun::star::uno::Reference< ::com::sun::star::chart2::XDataSeries > > > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::chart2::data::XLabeledDataSequence > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.chart2.InterpretedData", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart2::InterpretedData const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart2::InterpretedData >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART2_INTERPRETEDDATA_HPP
