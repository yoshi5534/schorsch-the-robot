#ifndef INCLUDED_COM_SUN_STAR_RENDERING_CARET_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_CARET_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/Caret.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline Caret::Caret() SAL_THROW( () )
    : MainCaretIndex(0)
    , SecondaryCaretIndex(0)
    , CaretAngle(0)
{
}

inline Caret::Caret(const ::sal_Int32& MainCaretIndex_, const ::sal_Int32& SecondaryCaretIndex_, const double& CaretAngle_) SAL_THROW( () )
    : MainCaretIndex(MainCaretIndex_)
    , SecondaryCaretIndex(SecondaryCaretIndex_)
    , CaretAngle(CaretAngle_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::Caret const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rendering.Caret", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::rendering::Caret const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::rendering::Caret >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_CARET_HPP
