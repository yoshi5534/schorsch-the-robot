#ifndef INCLUDED_COM_SUN_STAR_RENDERING_FONTMETRICS_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_FONTMETRICS_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/FontMetrics.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline FontMetrics::FontMetrics() SAL_THROW( () )
    : Ascent(0)
    , Descent(0)
    , InternalLeading(0)
    , ExternalLeading(0)
    , ReferenceCharSize(0)
    , UnderlineOffset(0)
    , StrikeThroughOffset(0)
{
}

inline FontMetrics::FontMetrics(const double& Ascent_, const double& Descent_, const double& InternalLeading_, const double& ExternalLeading_, const double& ReferenceCharSize_, const double& UnderlineOffset_, const double& StrikeThroughOffset_) SAL_THROW( () )
    : Ascent(Ascent_)
    , Descent(Descent_)
    , InternalLeading(InternalLeading_)
    , ExternalLeading(ExternalLeading_)
    , ReferenceCharSize(ReferenceCharSize_)
    , UnderlineOffset(UnderlineOffset_)
    , StrikeThroughOffset(StrikeThroughOffset_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::FontMetrics const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rendering.FontMetrics", 0, 7, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::rendering::FontMetrics const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::rendering::FontMetrics >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_FONTMETRICS_HPP
