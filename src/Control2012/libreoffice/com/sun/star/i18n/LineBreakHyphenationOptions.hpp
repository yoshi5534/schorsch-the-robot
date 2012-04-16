#ifndef INCLUDED_COM_SUN_STAR_I18N_LINEBREAKHYPHENATIONOPTIONS_HPP
#define INCLUDED_COM_SUN_STAR_I18N_LINEBREAKHYPHENATIONOPTIONS_HPP

#include "sal/config.h"

#include "com/sun/star/i18n/LineBreakHyphenationOptions.hdl"

#include "com/sun/star/beans/PropertyValues.hpp"
#include "com/sun/star/linguistic2/XHyphenator.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace i18n {

inline LineBreakHyphenationOptions::LineBreakHyphenationOptions() SAL_THROW( () )
    : rHyphenator()
    , aHyphenationOptions()
    , hyphenIndex(0)
{
}

inline LineBreakHyphenationOptions::LineBreakHyphenationOptions(const ::com::sun::star::uno::Reference< ::com::sun::star::linguistic2::XHyphenator >& rHyphenator_, const ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue >& aHyphenationOptions_, const ::sal_Int32& hyphenIndex_) SAL_THROW( () )
    : rHyphenator(rHyphenator_)
    , aHyphenationOptions(aHyphenationOptions_)
    , hyphenIndex(hyphenIndex_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace i18n {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::i18n::LineBreakHyphenationOptions const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::linguistic2::XHyphenator > >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::beans::PropertyValue > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.i18n.LineBreakHyphenationOptions", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::i18n::LineBreakHyphenationOptions const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::i18n::LineBreakHyphenationOptions >::get();
}

#endif // INCLUDED_COM_SUN_STAR_I18N_LINEBREAKHYPHENATIONOPTIONS_HPP
