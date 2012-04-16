#ifndef INCLUDED_COM_SUN_STAR_I18N_CURRENCY_HPP
#define INCLUDED_COM_SUN_STAR_I18N_CURRENCY_HPP

#include "sal/config.h"

#include "com/sun/star/i18n/Currency.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace i18n {

inline Currency::Currency() SAL_THROW( () )
    : ID()
    , Symbol()
    , BankSymbol()
    , Name()
    , Default(false)
    , UsedInCompatibleFormatCodes(false)
    , DecimalPlaces(0)
{
}

inline Currency::Currency(const ::rtl::OUString& ID_, const ::rtl::OUString& Symbol_, const ::rtl::OUString& BankSymbol_, const ::rtl::OUString& Name_, const ::sal_Bool& Default_, const ::sal_Bool& UsedInCompatibleFormatCodes_, const ::sal_Int16& DecimalPlaces_) SAL_THROW( () )
    : ID(ID_)
    , Symbol(Symbol_)
    , BankSymbol(BankSymbol_)
    , Name(Name_)
    , Default(Default_)
    , UsedInCompatibleFormatCodes(UsedInCompatibleFormatCodes_)
    , DecimalPlaces(DecimalPlaces_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace i18n {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::i18n::Currency const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.i18n.Currency", 0, 7, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::i18n::Currency const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::i18n::Currency >::get();
}

#endif // INCLUDED_COM_SUN_STAR_I18N_CURRENCY_HPP
