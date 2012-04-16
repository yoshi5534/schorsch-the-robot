#ifndef INCLUDED_COM_SUN_STAR_I18N_CALENDAR_HPP
#define INCLUDED_COM_SUN_STAR_I18N_CALENDAR_HPP

#include "sal/config.h"

#include "com/sun/star/i18n/Calendar.hdl"

#include "com/sun/star/i18n/CalendarItem.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace i18n {

inline Calendar::Calendar() SAL_THROW( () )
    : Days()
    , Months()
    , Eras()
    , StartOfWeek()
    , MinimumNumberOfDaysForFirstWeek(0)
    , Default(false)
    , Name()
{
}

inline Calendar::Calendar(const ::com::sun::star::uno::Sequence< ::com::sun::star::i18n::CalendarItem >& Days_, const ::com::sun::star::uno::Sequence< ::com::sun::star::i18n::CalendarItem >& Months_, const ::com::sun::star::uno::Sequence< ::com::sun::star::i18n::CalendarItem >& Eras_, const ::rtl::OUString& StartOfWeek_, const ::sal_Int16& MinimumNumberOfDaysForFirstWeek_, const ::sal_Bool& Default_, const ::rtl::OUString& Name_) SAL_THROW( () )
    : Days(Days_)
    , Months(Months_)
    , Eras(Eras_)
    , StartOfWeek(StartOfWeek_)
    , MinimumNumberOfDaysForFirstWeek(MinimumNumberOfDaysForFirstWeek_)
    , Default(Default_)
    , Name(Name_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace i18n {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::i18n::Calendar const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::i18n::CalendarItem > >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::i18n::CalendarItem > >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::i18n::CalendarItem > >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.i18n.Calendar", 0, 7, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::i18n::Calendar const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::i18n::Calendar >::get();
}

#endif // INCLUDED_COM_SUN_STAR_I18N_CALENDAR_HPP
