#ifndef INCLUDED_COM_SUN_STAR_I18N_FORMATELEMENT_HPP
#define INCLUDED_COM_SUN_STAR_I18N_FORMATELEMENT_HPP

#include "sal/config.h"

#include "com/sun/star/i18n/FormatElement.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace i18n {

inline FormatElement::FormatElement() SAL_THROW( () )
    : formatCode()
    , formatName()
    , formatKey()
    , formatType()
    , formatUsage()
    , formatIndex(0)
    , isDefault(false)
{
}

inline FormatElement::FormatElement(const ::rtl::OUString& formatCode_, const ::rtl::OUString& formatName_, const ::rtl::OUString& formatKey_, const ::rtl::OUString& formatType_, const ::rtl::OUString& formatUsage_, const ::sal_Int16& formatIndex_, const ::sal_Bool& isDefault_) SAL_THROW( () )
    : formatCode(formatCode_)
    , formatName(formatName_)
    , formatKey(formatKey_)
    , formatType(formatType_)
    , formatUsage(formatUsage_)
    , formatIndex(formatIndex_)
    , isDefault(isDefault_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace i18n {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::i18n::FormatElement const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.i18n.FormatElement", 0, 7, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::i18n::FormatElement const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::i18n::FormatElement >::get();
}

#endif // INCLUDED_COM_SUN_STAR_I18N_FORMATELEMENT_HPP
