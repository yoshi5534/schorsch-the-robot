#ifndef INCLUDED_COM_SUN_STAR_UTIL_TIME_HPP
#define INCLUDED_COM_SUN_STAR_UTIL_TIME_HPP

#include "sal/config.h"

#include "com/sun/star/util/Time.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace util {

inline Time::Time() SAL_THROW( () )
    : HundredthSeconds(0)
    , Seconds(0)
    , Minutes(0)
    , Hours(0)
{
}

inline Time::Time(const ::sal_uInt16& HundredthSeconds_, const ::sal_uInt16& Seconds_, const ::sal_uInt16& Minutes_, const ::sal_uInt16& Hours_) SAL_THROW( () )
    : HundredthSeconds(HundredthSeconds_)
    , Seconds(Seconds_)
    , Minutes(Minutes_)
    , Hours(Hours_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace util {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::util::Time const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.util.Time", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::util::Time const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::util::Time >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UTIL_TIME_HPP
