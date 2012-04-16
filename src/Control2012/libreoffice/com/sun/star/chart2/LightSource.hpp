#ifndef INCLUDED_COM_SUN_STAR_CHART2_LIGHTSOURCE_HPP
#define INCLUDED_COM_SUN_STAR_CHART2_LIGHTSOURCE_HPP

#include "sal/config.h"

#include "com/sun/star/chart2/LightSource.hdl"

#include "com/sun/star/drawing/Direction3D.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace chart2 {

inline LightSource::LightSource() SAL_THROW( () )
    : nDiffuseColor(0)
    , aDirection()
    , bIsEnabled(false)
    , bSpecular(false)
{
}

inline LightSource::LightSource(const ::sal_Int32& nDiffuseColor_, const ::com::sun::star::drawing::Direction3D& aDirection_, const ::sal_Bool& bIsEnabled_, const ::sal_Bool& bSpecular_) SAL_THROW( () )
    : nDiffuseColor(nDiffuseColor_)
    , aDirection(aDirection_)
    , bIsEnabled(bIsEnabled_)
    , bSpecular(bSpecular_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace chart2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart2::LightSource const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::drawing::Direction3D >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.chart2.LightSource", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart2::LightSource const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart2::LightSource >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART2_LIGHTSOURCE_HPP
