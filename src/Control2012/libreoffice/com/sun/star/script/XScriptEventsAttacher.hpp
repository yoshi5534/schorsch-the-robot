#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_XSCRIPTEVENTSATTACHER_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_XSCRIPTEVENTSATTACHER_HPP

#include "sal/config.h"

#include "com/sun/star/script/XScriptEventsAttacher.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/lang/ServiceNotRegisteredException.hpp"
#include "com/sun/star/script/CannotCreateAdapterException.hpp"
#include "com/sun/star/beans/IntrospectionException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/script/XScriptListener.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::XScriptEventsAttacher const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.script.XScriptEventsAttacher", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::script::XScriptEventsAttacher > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::script::XScriptEventsAttacher > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::script::XScriptEventsAttacher::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::script::XScriptEventsAttacher > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_XSCRIPTEVENTSATTACHER_HPP
