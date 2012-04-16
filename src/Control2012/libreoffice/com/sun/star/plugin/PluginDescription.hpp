#ifndef INCLUDED_COM_SUN_STAR_PLUGIN_PLUGINDESCRIPTION_HPP
#define INCLUDED_COM_SUN_STAR_PLUGIN_PLUGINDESCRIPTION_HPP

#include "sal/config.h"

#include "com/sun/star/plugin/PluginDescription.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace plugin {

inline PluginDescription::PluginDescription() SAL_THROW( () )
    : PluginName()
    , Mimetype()
    , Extension()
    , Description()
{
}

inline PluginDescription::PluginDescription(const ::rtl::OUString& PluginName_, const ::rtl::OUString& Mimetype_, const ::rtl::OUString& Extension_, const ::rtl::OUString& Description_) SAL_THROW( () )
    : PluginName(PluginName_)
    , Mimetype(Mimetype_)
    , Extension(Extension_)
    , Description(Description_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace plugin {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::plugin::PluginDescription const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.plugin.PluginDescription", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::plugin::PluginDescription const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::plugin::PluginDescription >::get();
}

#endif // INCLUDED_COM_SUN_STAR_PLUGIN_PLUGINDESCRIPTION_HPP
