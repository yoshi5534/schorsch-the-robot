#ifndef INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_TEMPLATEIDENTIFIER_HPP
#define INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_TEMPLATEIDENTIFIER_HPP

#include "sal/config.h"

#include "com/sun/star/configuration/backend/TemplateIdentifier.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace configuration { namespace backend {

inline TemplateIdentifier::TemplateIdentifier() SAL_THROW( () )
    : Name()
    , Component()
{
}

inline TemplateIdentifier::TemplateIdentifier(const ::rtl::OUString& Name_, const ::rtl::OUString& Component_) SAL_THROW( () )
    : Name(Name_)
    , Component(Component_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace configuration { namespace backend {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::configuration::backend::TemplateIdentifier const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.configuration.backend.TemplateIdentifier", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::configuration::backend::TemplateIdentifier const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::configuration::backend::TemplateIdentifier >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_TEMPLATEIDENTIFIER_HPP
