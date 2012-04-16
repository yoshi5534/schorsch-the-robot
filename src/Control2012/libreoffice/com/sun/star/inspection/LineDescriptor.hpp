#ifndef INCLUDED_COM_SUN_STAR_INSPECTION_LINEDESCRIPTOR_HPP
#define INCLUDED_COM_SUN_STAR_INSPECTION_LINEDESCRIPTOR_HPP

#include "sal/config.h"

#include "com/sun/star/inspection/LineDescriptor.hdl"

#include "com/sun/star/graphic/XGraphic.hpp"
#include "com/sun/star/inspection/XPropertyControl.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace inspection {

inline LineDescriptor::LineDescriptor() SAL_THROW( () )
    : DisplayName()
    , Control()
    , HelpURL()
    , HasPrimaryButton(false)
    , PrimaryButtonId()
    , PrimaryButtonImageURL()
    , PrimaryButtonImage()
    , HasSecondaryButton(false)
    , SecondaryButtonId()
    , SecondaryButtonImageURL()
    , SecondaryButtonImage()
    , IndentLevel(0)
    , Category()
{
}

inline LineDescriptor::LineDescriptor(const ::rtl::OUString& DisplayName_, const ::com::sun::star::uno::Reference< ::com::sun::star::inspection::XPropertyControl >& Control_, const ::rtl::OUString& HelpURL_, const ::sal_Bool& HasPrimaryButton_, const ::rtl::OUString& PrimaryButtonId_, const ::rtl::OUString& PrimaryButtonImageURL_, const ::com::sun::star::uno::Reference< ::com::sun::star::graphic::XGraphic >& PrimaryButtonImage_, const ::sal_Bool& HasSecondaryButton_, const ::rtl::OUString& SecondaryButtonId_, const ::rtl::OUString& SecondaryButtonImageURL_, const ::com::sun::star::uno::Reference< ::com::sun::star::graphic::XGraphic >& SecondaryButtonImage_, const ::sal_Int16& IndentLevel_, const ::rtl::OUString& Category_) SAL_THROW( () )
    : DisplayName(DisplayName_)
    , Control(Control_)
    , HelpURL(HelpURL_)
    , HasPrimaryButton(HasPrimaryButton_)
    , PrimaryButtonId(PrimaryButtonId_)
    , PrimaryButtonImageURL(PrimaryButtonImageURL_)
    , PrimaryButtonImage(PrimaryButtonImage_)
    , HasSecondaryButton(HasSecondaryButton_)
    , SecondaryButtonId(SecondaryButtonId_)
    , SecondaryButtonImageURL(SecondaryButtonImageURL_)
    , SecondaryButtonImage(SecondaryButtonImage_)
    , IndentLevel(IndentLevel_)
    , Category(Category_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace inspection {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::inspection::LineDescriptor const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::inspection::XPropertyControl > >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::graphic::XGraphic > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::graphic::XGraphic > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.inspection.LineDescriptor", 0, 13, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::inspection::LineDescriptor const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::inspection::LineDescriptor >::get();
}

#endif // INCLUDED_COM_SUN_STAR_INSPECTION_LINEDESCRIPTOR_HPP
