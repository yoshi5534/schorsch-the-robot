#ifndef INCLUDED_COM_SUN_STAR_ANIMATIONS_TARGETPROPERTIES_HPP
#define INCLUDED_COM_SUN_STAR_ANIMATIONS_TARGETPROPERTIES_HPP

#include "sal/config.h"

#include "com/sun/star/animations/TargetProperties.hdl"

#include "com/sun/star/beans/NamedValue.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace animations {

inline TargetProperties::TargetProperties() SAL_THROW( () )
    : Target()
    , Properties()
{
}

inline TargetProperties::TargetProperties(const ::com::sun::star::uno::Any& Target_, const ::com::sun::star::uno::Sequence< ::com::sun::star::beans::NamedValue >& Properties_) SAL_THROW( () )
    : Target(Target_)
    , Properties(Properties_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace animations {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::animations::TargetProperties const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::beans::NamedValue > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.animations.TargetProperties", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::animations::TargetProperties const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::animations::TargetProperties >::get();
}

#endif // INCLUDED_COM_SUN_STAR_ANIMATIONS_TARGETPROPERTIES_HPP
