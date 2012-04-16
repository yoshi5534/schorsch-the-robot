#ifndef INCLUDED_COM_SUN_STAR_PRESENTATION_PARAGRAPHTARGET_HPP
#define INCLUDED_COM_SUN_STAR_PRESENTATION_PARAGRAPHTARGET_HPP

#include "sal/config.h"

#include "com/sun/star/presentation/ParagraphTarget.hdl"

#include "com/sun/star/drawing/XShape.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace presentation {

inline ParagraphTarget::ParagraphTarget() SAL_THROW( () )
    : Shape()
    , Paragraph(0)
{
}

inline ParagraphTarget::ParagraphTarget(const ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XShape >& Shape_, const ::sal_Int16& Paragraph_) SAL_THROW( () )
    : Shape(Shape_)
    , Paragraph(Paragraph_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace presentation {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::presentation::ParagraphTarget const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XShape > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.presentation.ParagraphTarget", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::presentation::ParagraphTarget const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::presentation::ParagraphTarget >::get();
}

#endif // INCLUDED_COM_SUN_STAR_PRESENTATION_PARAGRAPHTARGET_HPP
