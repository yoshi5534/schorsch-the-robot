#ifndef INCLUDED_COM_SUN_STAR_RENDERING_INTEGERBITMAPLAYOUT_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_INTEGERBITMAPLAYOUT_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/IntegerBitmapLayout.hdl"

#include "com/sun/star/rendering/XBitmapPalette.hpp"
#include "com/sun/star/rendering/XIntegerBitmapColorSpace.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline IntegerBitmapLayout::IntegerBitmapLayout() SAL_THROW( () )
    : ScanLines(0)
    , ScanLineBytes(0)
    , ScanLineStride(0)
    , PlaneStride(0)
    , ColorSpace()
    , Palette()
    , IsMsbFirst(false)
{
}

inline IntegerBitmapLayout::IntegerBitmapLayout(const ::sal_Int32& ScanLines_, const ::sal_Int32& ScanLineBytes_, const ::sal_Int32& ScanLineStride_, const ::sal_Int32& PlaneStride_, const ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XIntegerBitmapColorSpace >& ColorSpace_, const ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XBitmapPalette >& Palette_, const ::sal_Bool& IsMsbFirst_) SAL_THROW( () )
    : ScanLines(ScanLines_)
    , ScanLineBytes(ScanLineBytes_)
    , ScanLineStride(ScanLineStride_)
    , PlaneStride(PlaneStride_)
    , ColorSpace(ColorSpace_)
    , Palette(Palette_)
    , IsMsbFirst(IsMsbFirst_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::IntegerBitmapLayout const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XIntegerBitmapColorSpace > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XBitmapPalette > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rendering.IntegerBitmapLayout", 0, 7, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::rendering::IntegerBitmapLayout const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::rendering::IntegerBitmapLayout >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_INTEGERBITMAPLAYOUT_HPP
