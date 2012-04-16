#ifndef INCLUDED_COM_SUN_STAR_CHART2_DATA_HIGHLIGHTEDRANGE_HPP
#define INCLUDED_COM_SUN_STAR_CHART2_DATA_HIGHLIGHTEDRANGE_HPP

#include "sal/config.h"

#include "com/sun/star/chart2/data/HighlightedRange.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace chart2 { namespace data {

inline HighlightedRange::HighlightedRange() SAL_THROW( () )
    : RangeRepresentation()
    , Index(0)
    , PreferredColor(0)
    , AllowMerginigWithOtherRanges(false)
{
}

inline HighlightedRange::HighlightedRange(const ::rtl::OUString& RangeRepresentation_, const ::sal_Int32& Index_, const ::sal_Int32& PreferredColor_, const ::sal_Bool& AllowMerginigWithOtherRanges_) SAL_THROW( () )
    : RangeRepresentation(RangeRepresentation_)
    , Index(Index_)
    , PreferredColor(PreferredColor_)
    , AllowMerginigWithOtherRanges(AllowMerginigWithOtherRanges_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace chart2 { namespace data {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart2::data::HighlightedRange const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.chart2.data.HighlightedRange", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart2::data::HighlightedRange const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart2::data::HighlightedRange >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART2_DATA_HIGHLIGHTEDRANGE_HPP
