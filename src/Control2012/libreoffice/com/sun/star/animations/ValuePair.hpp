#ifndef INCLUDED_COM_SUN_STAR_ANIMATIONS_VALUEPAIR_HPP
#define INCLUDED_COM_SUN_STAR_ANIMATIONS_VALUEPAIR_HPP

#include "sal/config.h"

#include "com/sun/star/animations/ValuePair.hdl"

#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace animations {

inline ValuePair::ValuePair() SAL_THROW( () )
    : First()
    , Second()
{
}

inline ValuePair::ValuePair(const ::com::sun::star::uno::Any& First_, const ::com::sun::star::uno::Any& Second_) SAL_THROW( () )
    : First(First_)
    , Second(Second_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace animations {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::animations::ValuePair const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.animations.ValuePair", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::animations::ValuePair const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::animations::ValuePair >::get();
}

#endif // INCLUDED_COM_SUN_STAR_ANIMATIONS_VALUEPAIR_HPP
