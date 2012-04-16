#ifndef INCLUDED_COM_SUN_STAR_RENDERING_STROKEATTRIBUTES_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_STROKEATTRIBUTES_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/StrokeAttributes.hdl"

#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline StrokeAttributes::StrokeAttributes() SAL_THROW( () )
    : StrokeWidth(0)
    , MiterLimit(0)
    , DashArray()
    , LineArray()
    , StartCapType(0)
    , EndCapType(0)
    , JoinType(0)
{
}

inline StrokeAttributes::StrokeAttributes(const double& StrokeWidth_, const double& MiterLimit_, const ::com::sun::star::uno::Sequence< double >& DashArray_, const ::com::sun::star::uno::Sequence< double >& LineArray_, const ::sal_Int8& StartCapType_, const ::sal_Int8& EndCapType_, const ::sal_Int8& JoinType_) SAL_THROW( () )
    : StrokeWidth(StrokeWidth_)
    , MiterLimit(MiterLimit_)
    , DashArray(DashArray_)
    , LineArray(LineArray_)
    , StartCapType(StartCapType_)
    , EndCapType(EndCapType_)
    , JoinType(JoinType_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::StrokeAttributes const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< double > >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< double > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rendering.StrokeAttributes", 0, 7, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::rendering::StrokeAttributes const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::rendering::StrokeAttributes >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_STROKEATTRIBUTES_HPP
