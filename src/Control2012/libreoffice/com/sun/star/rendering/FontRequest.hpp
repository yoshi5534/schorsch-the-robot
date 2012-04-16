#ifndef INCLUDED_COM_SUN_STAR_RENDERING_FONTREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_FONTREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/FontRequest.hdl"

#include "com/sun/star/lang/Locale.hpp"
#include "com/sun/star/rendering/FontInfo.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline FontRequest::FontRequest() SAL_THROW( () )
    : FontDescription()
    , CellSize(0)
    , ReferenceAdvancement(0)
    , Locale()
{
}

inline FontRequest::FontRequest(const ::com::sun::star::rendering::FontInfo& FontDescription_, const double& CellSize_, const double& ReferenceAdvancement_, const ::com::sun::star::lang::Locale& Locale_) SAL_THROW( () )
    : FontDescription(FontDescription_)
    , CellSize(CellSize_)
    , ReferenceAdvancement(ReferenceAdvancement_)
    , Locale(Locale_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::FontRequest const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::rendering::FontInfo >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::lang::Locale >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rendering.FontRequest", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::rendering::FontRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::rendering::FontRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_FONTREQUEST_HPP
