#ifndef INCLUDED_COM_SUN_STAR_CHART2_SYMBOL_HPP
#define INCLUDED_COM_SUN_STAR_CHART2_SYMBOL_HPP

#include "sal/config.h"

#include "com/sun/star/chart2/Symbol.hdl"

#include "com/sun/star/awt/Size.hpp"
#include "com/sun/star/graphic/XGraphic.hpp"
#include "com/sun/star/chart2/SymbolStyle.hpp"
#include "com/sun/star/drawing/PolyPolygonBezierCoords.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace chart2 {

inline Symbol::Symbol() SAL_THROW( () )
    : Style(::com::sun::star::chart2::SymbolStyle_NONE)
    , PolygonCoords()
    , StandardSymbol(0)
    , Graphic()
    , Size()
    , BorderColor(0)
    , FillColor(0)
{
}

inline Symbol::Symbol(const ::com::sun::star::chart2::SymbolStyle& Style_, const ::com::sun::star::drawing::PolyPolygonBezierCoords& PolygonCoords_, const ::sal_Int32& StandardSymbol_, const ::com::sun::star::uno::Reference< ::com::sun::star::graphic::XGraphic >& Graphic_, const ::com::sun::star::awt::Size& Size_, const ::sal_Int32& BorderColor_, const ::sal_Int32& FillColor_) SAL_THROW( () )
    : Style(Style_)
    , PolygonCoords(PolygonCoords_)
    , StandardSymbol(StandardSymbol_)
    , Graphic(Graphic_)
    , Size(Size_)
    , BorderColor(BorderColor_)
    , FillColor(FillColor_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace chart2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart2::Symbol const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::chart2::SymbolStyle >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::drawing::PolyPolygonBezierCoords >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::graphic::XGraphic > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::awt::Size >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.chart2.Symbol", 0, 7, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart2::Symbol const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart2::Symbol >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART2_SYMBOL_HPP
