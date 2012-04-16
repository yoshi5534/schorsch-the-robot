#ifndef INCLUDED_COM_SUN_STAR_CHART2_FILLBITMAP_HPP
#define INCLUDED_COM_SUN_STAR_CHART2_FILLBITMAP_HPP

#include "sal/config.h"

#include "com/sun/star/chart2/FillBitmap.hdl"

#include "com/sun/star/awt/Point.hpp"
#include "com/sun/star/drawing/BitmapMode.hpp"
#include "com/sun/star/awt/Size.hpp"
#include "com/sun/star/drawing/RectanglePoint.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace chart2 {

inline FillBitmap::FillBitmap() SAL_THROW( () )
    : aURL()
    , aOffset()
    , aPositionOffset()
    , aRectanglePoint(::com::sun::star::drawing::RectanglePoint_LEFT_TOP)
    , bLogicalSize(false)
    , aSize()
    , aBitmapMode(::com::sun::star::drawing::BitmapMode_REPEAT)
{
}

inline FillBitmap::FillBitmap(const ::rtl::OUString& aURL_, const ::com::sun::star::awt::Point& aOffset_, const ::com::sun::star::awt::Point& aPositionOffset_, const ::com::sun::star::drawing::RectanglePoint& aRectanglePoint_, const ::sal_Bool& bLogicalSize_, const ::com::sun::star::awt::Size& aSize_, const ::com::sun::star::drawing::BitmapMode& aBitmapMode_) SAL_THROW( () )
    : aURL(aURL_)
    , aOffset(aOffset_)
    , aPositionOffset(aPositionOffset_)
    , aRectanglePoint(aRectanglePoint_)
    , bLogicalSize(bLogicalSize_)
    , aSize(aSize_)
    , aBitmapMode(aBitmapMode_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace chart2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart2::FillBitmap const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::awt::Point >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::awt::Point >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::drawing::RectanglePoint >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::awt::Size >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::drawing::BitmapMode >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.chart2.FillBitmap", 0, 7, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart2::FillBitmap const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart2::FillBitmap >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART2_FILLBITMAP_HPP
