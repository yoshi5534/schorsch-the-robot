#ifndef INCLUDED_COM_SUN_STAR_I18N_LINEBREAKUSEROPTIONS_HPP
#define INCLUDED_COM_SUN_STAR_I18N_LINEBREAKUSEROPTIONS_HPP

#include "sal/config.h"

#include "com/sun/star/i18n/LineBreakUserOptions.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace i18n {

inline LineBreakUserOptions::LineBreakUserOptions() SAL_THROW( () )
    : forbiddenBeginCharacters()
    , forbiddenEndCharacters()
    , applyForbiddenRules(false)
    , allowPunctuationOutsideMargin(false)
    , allowHyphenateEnglish(false)
{
}

inline LineBreakUserOptions::LineBreakUserOptions(const ::rtl::OUString& forbiddenBeginCharacters_, const ::rtl::OUString& forbiddenEndCharacters_, const ::sal_Bool& applyForbiddenRules_, const ::sal_Bool& allowPunctuationOutsideMargin_, const ::sal_Bool& allowHyphenateEnglish_) SAL_THROW( () )
    : forbiddenBeginCharacters(forbiddenBeginCharacters_)
    , forbiddenEndCharacters(forbiddenEndCharacters_)
    , applyForbiddenRules(applyForbiddenRules_)
    , allowPunctuationOutsideMargin(allowPunctuationOutsideMargin_)
    , allowHyphenateEnglish(allowHyphenateEnglish_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace i18n {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::i18n::LineBreakUserOptions const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.i18n.LineBreakUserOptions", 0, 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::i18n::LineBreakUserOptions const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::i18n::LineBreakUserOptions >::get();
}

#endif // INCLUDED_COM_SUN_STAR_I18N_LINEBREAKUSEROPTIONS_HPP
