#ifndef INCLUDED_COM_SUN_STAR_I18N_NUMBERFORMATCODE_HPP
#define INCLUDED_COM_SUN_STAR_I18N_NUMBERFORMATCODE_HPP

#include "sal/config.h"

#include "com/sun/star/i18n/NumberFormatCode.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace i18n {

inline NumberFormatCode::NumberFormatCode() SAL_THROW( () )
    : Type(0)
    , Usage(0)
    , Code()
    , DefaultName()
    , NameID()
    , Index(0)
    , Default(false)
{
}

inline NumberFormatCode::NumberFormatCode(const ::sal_Int16& Type_, const ::sal_Int16& Usage_, const ::rtl::OUString& Code_, const ::rtl::OUString& DefaultName_, const ::rtl::OUString& NameID_, const ::sal_Int16& Index_, const ::sal_Bool& Default_) SAL_THROW( () )
    : Type(Type_)
    , Usage(Usage_)
    , Code(Code_)
    , DefaultName(DefaultName_)
    , NameID(NameID_)
    , Index(Index_)
    , Default(Default_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace i18n {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::i18n::NumberFormatCode const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.i18n.NumberFormatCode", 0, 7, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::i18n::NumberFormatCode const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::i18n::NumberFormatCode >::get();
}

#endif // INCLUDED_COM_SUN_STAR_I18N_NUMBERFORMATCODE_HPP
