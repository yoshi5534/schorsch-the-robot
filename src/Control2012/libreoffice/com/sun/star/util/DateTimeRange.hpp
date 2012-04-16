#ifndef INCLUDED_COM_SUN_STAR_UTIL_DATETIMERANGE_HPP
#define INCLUDED_COM_SUN_STAR_UTIL_DATETIMERANGE_HPP

#include "sal/config.h"

#include "com/sun/star/util/DateTimeRange.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace util {

inline DateTimeRange::DateTimeRange() SAL_THROW( () )
    : StartHundredthSeconds(0)
    , StartSeconds(0)
    , StartMinutes(0)
    , StartHours(0)
    , StartDay(0)
    , StartMonth(0)
    , StartYear(0)
    , EndHundredthSeconds(0)
    , EndSeconds(0)
    , EndMinutes(0)
    , EndHours(0)
    , EndDay(0)
    , EndMonth(0)
    , EndYear(0)
{
}

inline DateTimeRange::DateTimeRange(const ::sal_uInt16& StartHundredthSeconds_, const ::sal_uInt16& StartSeconds_, const ::sal_uInt16& StartMinutes_, const ::sal_uInt16& StartHours_, const ::sal_uInt16& StartDay_, const ::sal_uInt16& StartMonth_, const ::sal_uInt16& StartYear_, const ::sal_uInt16& EndHundredthSeconds_, const ::sal_uInt16& EndSeconds_, const ::sal_uInt16& EndMinutes_, const ::sal_uInt16& EndHours_, const ::sal_uInt16& EndDay_, const ::sal_uInt16& EndMonth_, const ::sal_uInt16& EndYear_) SAL_THROW( () )
    : StartHundredthSeconds(StartHundredthSeconds_)
    , StartSeconds(StartSeconds_)
    , StartMinutes(StartMinutes_)
    , StartHours(StartHours_)
    , StartDay(StartDay_)
    , StartMonth(StartMonth_)
    , StartYear(StartYear_)
    , EndHundredthSeconds(EndHundredthSeconds_)
    , EndSeconds(EndSeconds_)
    , EndMinutes(EndMinutes_)
    , EndHours(EndHours_)
    , EndDay(EndDay_)
    , EndMonth(EndMonth_)
    , EndYear(EndYear_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace util {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::util::DateTimeRange const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.util.DateTimeRange", 0, 14, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::util::DateTimeRange const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::util::DateTimeRange >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UTIL_DATETIMERANGE_HPP
