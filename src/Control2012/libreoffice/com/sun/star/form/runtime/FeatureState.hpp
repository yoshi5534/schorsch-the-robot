#ifndef INCLUDED_COM_SUN_STAR_FORM_RUNTIME_FEATURESTATE_HPP
#define INCLUDED_COM_SUN_STAR_FORM_RUNTIME_FEATURESTATE_HPP

#include "sal/config.h"

#include "com/sun/star/form/runtime/FeatureState.hdl"

#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace form { namespace runtime {

inline FeatureState::FeatureState() SAL_THROW( () )
    : Enabled(false)
    , State()
{
}

inline FeatureState::FeatureState(const ::sal_Bool& Enabled_, const ::com::sun::star::uno::Any& State_) SAL_THROW( () )
    : Enabled(Enabled_)
    , State(State_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace form { namespace runtime {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::form::runtime::FeatureState const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.form.runtime.FeatureState", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::form::runtime::FeatureState const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::form::runtime::FeatureState >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FORM_RUNTIME_FEATURESTATE_HPP
