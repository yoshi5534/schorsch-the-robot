#ifndef INCLUDED_COM_SUN_STAR_TEXT_VERTORIENTATIONFORMAT_HPP
#define INCLUDED_COM_SUN_STAR_TEXT_VERTORIENTATIONFORMAT_HPP

#include "sal/config.h"

#include "com/sun/star/text/VertOrientationFormat.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace text {

inline VertOrientationFormat::VertOrientationFormat() SAL_THROW( () )
    : YPos(0)
    , VerticalOrientation(0)
    , VerticalRelation(0)
{
}

inline VertOrientationFormat::VertOrientationFormat(const ::sal_Int32& YPos_, const ::sal_Int16& VerticalOrientation_, const ::sal_Int16& VerticalRelation_) SAL_THROW( () )
    : YPos(YPos_)
    , VerticalOrientation(VerticalOrientation_)
    , VerticalRelation(VerticalRelation_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace text {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::text::VertOrientationFormat const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.text.VertOrientationFormat", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::text::VertOrientationFormat const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::text::VertOrientationFormat >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TEXT_VERTORIENTATIONFORMAT_HPP
