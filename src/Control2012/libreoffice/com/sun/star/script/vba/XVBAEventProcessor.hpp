#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_VBA_XVBAEVENTPROCESSOR_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_VBA_XVBAEVENTPROCESSOR_HPP

#include "sal/config.h"

#include "com/sun/star/script/vba/XVBAEventProcessor.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/util/VetoException.hpp"
#include "com/sun/star/script/provider/ScriptFrameworkErrorException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace script { namespace vba {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::vba::XVBAEventProcessor const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.script.vba.XVBAEventProcessor", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::script::vba::XVBAEventProcessor > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::script::vba::XVBAEventProcessor > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::script::vba::XVBAEventProcessor::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::script::vba::XVBAEventProcessor > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_VBA_XVBAEVENTPROCESSOR_HPP
