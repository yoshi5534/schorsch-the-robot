#ifndef INCLUDED_COM_SUN_STAR_DRAWING_POLYPOLYGONBEZIERCOORDS_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_POLYPOLYGONBEZIERCOORDS_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/PolyPolygonBezierCoords.hdl"

#include "com/sun/star/drawing/FlagSequenceSequence.hpp"
#include "com/sun/star/drawing/PointSequenceSequence.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline PolyPolygonBezierCoords::PolyPolygonBezierCoords() SAL_THROW( () )
    : Coordinates()
    , Flags()
{
}

inline PolyPolygonBezierCoords::PolyPolygonBezierCoords(const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Sequence< ::com::sun::star::awt::Point > >& Coordinates_, const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Sequence< ::com::sun::star::drawing::PolygonFlags > >& Flags_) SAL_THROW( () )
    : Coordinates(Coordinates_)
    , Flags(Flags_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::PolyPolygonBezierCoords const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::cppu::UnoSequenceType< ::com::sun::star::awt::Point > > >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::cppu::UnoSequenceType< ::com::sun::star::drawing::PolygonFlags > > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.PolyPolygonBezierCoords", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::PolyPolygonBezierCoords const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::PolyPolygonBezierCoords >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_POLYPOLYGONBEZIERCOORDS_HPP
