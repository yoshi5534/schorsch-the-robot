#ifndef INCLUDED_COM_SUN_STAR_RENDERING_TEXTURE_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_TEXTURE_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/Texture.hdl"

#include "com/sun/star/rendering/XBitmap.hpp"
#include "com/sun/star/rendering/StrokeAttributes.hpp"
#include "com/sun/star/rendering/XParametricPolyPolygon2D.hpp"
#include "com/sun/star/geometry/AffineMatrix2D.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline Texture::Texture() SAL_THROW( () )
    : AffineTransform()
    , Alpha(0)
    , NumberOfHatchPolygons(0)
    , Bitmap()
    , Gradient()
    , Hatching()
    , HatchAttributes()
    , RepeatModeX(0)
    , RepeatModeY(0)
{
}

inline Texture::Texture(const ::com::sun::star::geometry::AffineMatrix2D& AffineTransform_, const double& Alpha_, const ::sal_Int32& NumberOfHatchPolygons_, const ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XBitmap >& Bitmap_, const ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XParametricPolyPolygon2D >& Gradient_, const ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XParametricPolyPolygon2D >& Hatching_, const ::com::sun::star::rendering::StrokeAttributes& HatchAttributes_, const ::sal_Int8& RepeatModeX_, const ::sal_Int8& RepeatModeY_) SAL_THROW( () )
    : AffineTransform(AffineTransform_)
    , Alpha(Alpha_)
    , NumberOfHatchPolygons(NumberOfHatchPolygons_)
    , Bitmap(Bitmap_)
    , Gradient(Gradient_)
    , Hatching(Hatching_)
    , HatchAttributes(HatchAttributes_)
    , RepeatModeX(RepeatModeX_)
    , RepeatModeY(RepeatModeY_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::Texture const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::geometry::AffineMatrix2D >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XBitmap > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XParametricPolyPolygon2D > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XParametricPolyPolygon2D > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::rendering::StrokeAttributes >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rendering.Texture", 0, 9, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::rendering::Texture const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::rendering::Texture >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_TEXTURE_HPP
