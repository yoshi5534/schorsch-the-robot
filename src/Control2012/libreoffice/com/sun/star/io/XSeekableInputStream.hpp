#ifndef INCLUDED_COM_SUN_STAR_IO_XSEEKABLEINPUTSTREAM_HPP
#define INCLUDED_COM_SUN_STAR_IO_XSEEKABLEINPUTSTREAM_HPP

#include "sal/config.h"

#include "com/sun/star/io/XSeekableInputStream.hdl"

#include "com/sun/star/io/XSeekable.hpp"
#include "com/sun/star/io/XInputStream.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace io {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::io::XSeekableInputStream const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[2];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::io::XInputStream > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::io::XSeekable > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.io.XSeekableInputStream", 2, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::io::XSeekableInputStream > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::io::XSeekableInputStream > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::io::XSeekableInputStream::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::io::XSeekableInputStream > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_IO_XSEEKABLEINPUTSTREAM_HPP
