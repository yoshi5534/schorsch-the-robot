#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_XTYPECONVERTER_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_XTYPECONVERTER_HPP

#include "sal/config.h"

#include "com/sun/star/script/XTypeConverter.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/TypeClass.hpp"
#include "com/sun/star/script/CannotConvertException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::XTypeConverter const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.script.XTypeConverter", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::script::XTypeConverter > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::script::XTypeConverter > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::script::XTypeConverter::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::script::XTypeConverter > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_XTYPECONVERTER_HPP
