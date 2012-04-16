#ifndef INCLUDED_COM_SUN_STAR_LANG_LOCALE_HPP
#define INCLUDED_COM_SUN_STAR_LANG_LOCALE_HPP

#include "sal/config.h"

#include "com/sun/star/lang/Locale.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace lang {

inline Locale::Locale() SAL_THROW( () )
    : Language()
    , Country()
    , Variant()
{
}

inline Locale::Locale(const ::rtl::OUString& Language_, const ::rtl::OUString& Country_, const ::rtl::OUString& Variant_) SAL_THROW( () )
    : Language(Language_)
    , Country(Country_)
    , Variant(Variant_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace lang {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::lang::Locale const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.lang.Locale", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::lang::Locale const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::lang::Locale >::get();
}

#endif // INCLUDED_COM_SUN_STAR_LANG_LOCALE_HPP
