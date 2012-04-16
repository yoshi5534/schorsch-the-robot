#ifndef INCLUDED_COM_SUN_STAR_I18N_LOCALEDATAITEM_HPP
#define INCLUDED_COM_SUN_STAR_I18N_LOCALEDATAITEM_HPP

#include "sal/config.h"

#include "com/sun/star/i18n/LocaleDataItem.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace i18n {

inline LocaleDataItem::LocaleDataItem() SAL_THROW( () )
    : unoID()
    , dateSeparator()
    , thousandSeparator()
    , decimalSeparator()
    , timeSeparator()
    , time100SecSeparator()
    , listSeparator()
    , quotationStart()
    , quotationEnd()
    , doubleQuotationStart()
    , doubleQuotationEnd()
    , timeAM()
    , timePM()
    , measurementSystem()
    , LongDateDayOfWeekSeparator()
    , LongDateDaySeparator()
    , LongDateMonthSeparator()
    , LongDateYearSeparator()
{
}

inline LocaleDataItem::LocaleDataItem(const ::rtl::OUString& unoID_, const ::rtl::OUString& dateSeparator_, const ::rtl::OUString& thousandSeparator_, const ::rtl::OUString& decimalSeparator_, const ::rtl::OUString& timeSeparator_, const ::rtl::OUString& time100SecSeparator_, const ::rtl::OUString& listSeparator_, const ::rtl::OUString& quotationStart_, const ::rtl::OUString& quotationEnd_, const ::rtl::OUString& doubleQuotationStart_, const ::rtl::OUString& doubleQuotationEnd_, const ::rtl::OUString& timeAM_, const ::rtl::OUString& timePM_, const ::rtl::OUString& measurementSystem_, const ::rtl::OUString& LongDateDayOfWeekSeparator_, const ::rtl::OUString& LongDateDaySeparator_, const ::rtl::OUString& LongDateMonthSeparator_, const ::rtl::OUString& LongDateYearSeparator_) SAL_THROW( () )
    : unoID(unoID_)
    , dateSeparator(dateSeparator_)
    , thousandSeparator(thousandSeparator_)
    , decimalSeparator(decimalSeparator_)
    , timeSeparator(timeSeparator_)
    , time100SecSeparator(time100SecSeparator_)
    , listSeparator(listSeparator_)
    , quotationStart(quotationStart_)
    , quotationEnd(quotationEnd_)
    , doubleQuotationStart(doubleQuotationStart_)
    , doubleQuotationEnd(doubleQuotationEnd_)
    , timeAM(timeAM_)
    , timePM(timePM_)
    , measurementSystem(measurementSystem_)
    , LongDateDayOfWeekSeparator(LongDateDayOfWeekSeparator_)
    , LongDateDaySeparator(LongDateDaySeparator_)
    , LongDateMonthSeparator(LongDateMonthSeparator_)
    , LongDateYearSeparator(LongDateYearSeparator_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace i18n {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::i18n::LocaleDataItem const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.i18n.LocaleDataItem", 0, 18, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::i18n::LocaleDataItem const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::i18n::LocaleDataItem >::get();
}

#endif // INCLUDED_COM_SUN_STAR_I18N_LOCALEDATAITEM_HPP
