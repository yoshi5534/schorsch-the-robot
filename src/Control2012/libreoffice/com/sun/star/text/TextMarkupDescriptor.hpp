#ifndef INCLUDED_COM_SUN_STAR_TEXT_TEXTMARKUPDESCRIPTOR_HPP
#define INCLUDED_COM_SUN_STAR_TEXT_TEXTMARKUPDESCRIPTOR_HPP

#include "sal/config.h"

#include "com/sun/star/text/TextMarkupDescriptor.hdl"

#include "com/sun/star/container/XStringKeyMap.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace text {

inline TextMarkupDescriptor::TextMarkupDescriptor() SAL_THROW( () )
    : nType(0)
    , aIdentifier()
    , nOffset(0)
    , nLength(0)
    , xMarkupInfoContainer()
{
}

inline TextMarkupDescriptor::TextMarkupDescriptor(const ::sal_Int32& nType_, const ::rtl::OUString& aIdentifier_, const ::sal_Int32& nOffset_, const ::sal_Int32& nLength_, const ::com::sun::star::uno::Reference< ::com::sun::star::container::XStringKeyMap >& xMarkupInfoContainer_) SAL_THROW( () )
    : nType(nType_)
    , aIdentifier(aIdentifier_)
    , nOffset(nOffset_)
    , nLength(nLength_)
    , xMarkupInfoContainer(xMarkupInfoContainer_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace text {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::text::TextMarkupDescriptor const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::container::XStringKeyMap > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.text.TextMarkupDescriptor", 0, 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::text::TextMarkupDescriptor const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::text::TextMarkupDescriptor >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TEXT_TEXTMARKUPDESCRIPTOR_HPP
