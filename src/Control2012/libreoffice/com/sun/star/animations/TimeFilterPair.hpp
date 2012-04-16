#ifndef INCLUDED_COM_SUN_STAR_ANIMATIONS_TIMEFILTERPAIR_HPP
#define INCLUDED_COM_SUN_STAR_ANIMATIONS_TIMEFILTERPAIR_HPP

#include "sal/config.h"

#include "com/sun/star/animations/TimeFilterPair.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace animations {

inline TimeFilterPair::TimeFilterPair() SAL_THROW( () )
    : Time(0)
    , Progress(0)
{
}

inline TimeFilterPair::TimeFilterPair(const double& Time_, const double& Progress_) SAL_THROW( () )
    : Time(Time_)
    , Progress(Progress_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace animations {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::animations::TimeFilterPair const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.animations.TimeFilterPair", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::animations::TimeFilterPair const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::animations::TimeFilterPair >::get();
}

#endif // INCLUDED_COM_SUN_STAR_ANIMATIONS_TIMEFILTERPAIR_HPP
