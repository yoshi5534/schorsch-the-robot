#ifndef INCLUDED_COM_SUN_STAR_UTIL_DURATION_HPP
#define INCLUDED_COM_SUN_STAR_UTIL_DURATION_HPP

#include "sal/config.h"

#include "com/sun/star/util/Duration.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace util {

inline Duration::Duration() SAL_THROW( () )
    : Negative(false)
    , Years(0)
    , Months(0)
    , Days(0)
    , Hours(0)
    , Minutes(0)
    , Seconds(0)
    , MilliSeconds(0)
{
}

inline Duration::Duration(const ::sal_Bool& Negative_, const ::sal_uInt16& Years_, const ::sal_uInt16& Months_, const ::sal_uInt16& Days_, const ::sal_uInt16& Hours_, const ::sal_uInt16& Minutes_, const ::sal_uInt16& Seconds_, const ::sal_uInt16& MilliSeconds_) SAL_THROW( () )
    : Negative(Negative_)
    , Years(Years_)
    , Months(Months_)
    , Days(Days_)
    , Hours(Hours_)
    , Minutes(Minutes_)
    , Seconds(Seconds_)
    , MilliSeconds(MilliSeconds_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace util {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::util::Duration const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.util.Duration", 0, 8, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::util::Duration const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::util::Duration >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UTIL_DURATION_HPP
