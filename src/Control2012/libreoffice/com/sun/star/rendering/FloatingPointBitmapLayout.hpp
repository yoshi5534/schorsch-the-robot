#ifndef INCLUDED_COM_SUN_STAR_RENDERING_FLOATINGPOINTBITMAPLAYOUT_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_FLOATINGPOINTBITMAPLAYOUT_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/FloatingPointBitmapLayout.hdl"

#include "com/sun/star/rendering/XColorSpace.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline FloatingPointBitmapLayout::FloatingPointBitmapLayout() SAL_THROW( () )
    : ScanLines(0)
    , ScanLineBytes(0)
    , ScanLineStride(0)
    , PlaneStride(0)
    , ColorSpace()
    , NumComponents(0)
    , Endianness(0)
    , Format(0)
{
}

inline FloatingPointBitmapLayout::FloatingPointBitmapLayout(const ::sal_Int32& ScanLines_, const ::sal_Int32& ScanLineBytes_, const ::sal_Int32& ScanLineStride_, const ::sal_Int32& PlaneStride_, const ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XColorSpace >& ColorSpace_, const ::sal_Int32& NumComponents_, const ::sal_Int8& Endianness_, const ::sal_Int8& Format_) SAL_THROW( () )
    : ScanLines(ScanLines_)
    , ScanLineBytes(ScanLineBytes_)
    , ScanLineStride(ScanLineStride_)
    , PlaneStride(PlaneStride_)
    , ColorSpace(ColorSpace_)
    , NumComponents(NumComponents_)
    , Endianness(Endianness_)
    , Format(Format_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::FloatingPointBitmapLayout const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rendering::XColorSpace > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rendering.FloatingPointBitmapLayout", 0, 8, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::rendering::FloatingPointBitmapLayout const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::rendering::FloatingPointBitmapLayout >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_FLOATINGPOINTBITMAPLAYOUT_HPP
