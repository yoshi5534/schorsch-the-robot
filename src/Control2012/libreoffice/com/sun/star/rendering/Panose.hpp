#ifndef INCLUDED_COM_SUN_STAR_RENDERING_PANOSE_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_PANOSE_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/Panose.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline Panose::Panose() SAL_THROW( () )
    : FamilyType(0)
    , SerifStyle(0)
    , Weight(0)
    , Proportion(0)
    , Contrast(0)
    , StrokeVariation(0)
    , ArmStyle(0)
    , Letterform(0)
    , Midline(0)
    , XHeight(0)
{
}

inline Panose::Panose(const ::sal_Int8& FamilyType_, const ::sal_Int8& SerifStyle_, const ::sal_Int8& Weight_, const ::sal_Int8& Proportion_, const ::sal_Int8& Contrast_, const ::sal_Int8& StrokeVariation_, const ::sal_Int8& ArmStyle_, const ::sal_Int8& Letterform_, const ::sal_Int8& Midline_, const ::sal_Int8& XHeight_) SAL_THROW( () )
    : FamilyType(FamilyType_)
    , SerifStyle(SerifStyle_)
    , Weight(Weight_)
    , Proportion(Proportion_)
    , Contrast(Contrast_)
    , StrokeVariation(StrokeVariation_)
    , ArmStyle(ArmStyle_)
    , Letterform(Letterform_)
    , Midline(Midline_)
    , XHeight(XHeight_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::Panose const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rendering.Panose", 0, 10, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::rendering::Panose const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::rendering::Panose >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_PANOSE_HPP
