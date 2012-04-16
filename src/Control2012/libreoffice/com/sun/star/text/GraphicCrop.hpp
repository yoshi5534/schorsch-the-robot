#ifndef INCLUDED_COM_SUN_STAR_TEXT_GRAPHICCROP_HPP
#define INCLUDED_COM_SUN_STAR_TEXT_GRAPHICCROP_HPP

#include "sal/config.h"

#include "com/sun/star/text/GraphicCrop.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace text {

inline GraphicCrop::GraphicCrop() SAL_THROW( () )
    : Top(0)
    , Bottom(0)
    , Left(0)
    , Right(0)
{
}

inline GraphicCrop::GraphicCrop(const ::sal_Int32& Top_, const ::sal_Int32& Bottom_, const ::sal_Int32& Left_, const ::sal_Int32& Right_) SAL_THROW( () )
    : Top(Top_)
    , Bottom(Bottom_)
    , Left(Left_)
    , Right(Right_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace text {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::text::GraphicCrop const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.text.GraphicCrop", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::text::GraphicCrop const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::text::GraphicCrop >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TEXT_GRAPHICCROP_HPP
