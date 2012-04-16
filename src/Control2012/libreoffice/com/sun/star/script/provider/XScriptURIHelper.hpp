#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_PROVIDER_XSCRIPTURIHELPER_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_PROVIDER_XSCRIPTURIHELPER_HPP

#include "sal/config.h"

#include "com/sun/star/script/provider/XScriptURIHelper.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace script { namespace provider {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::provider::XScriptURIHelper const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.script.provider.XScriptURIHelper", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::script::provider::XScriptURIHelper > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::script::provider::XScriptURIHelper > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::script::provider::XScriptURIHelper::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::script::provider::XScriptURIHelper > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_PROVIDER_XSCRIPTURIHELPER_HPP
