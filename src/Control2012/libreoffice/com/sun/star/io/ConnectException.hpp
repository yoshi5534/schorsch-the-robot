#ifndef INCLUDED_COM_SUN_STAR_IO_CONNECTEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_IO_CONNECTEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/io/ConnectException.hdl"

#include "com/sun/star/io/SocketException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace io {

inline ConnectException::ConnectException() SAL_THROW( () )
    : ::com::sun::star::io::SocketException()
{ }

inline ConnectException::ConnectException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::io::SocketException(Message_, Context_)
{ }

ConnectException::ConnectException(ConnectException const & the_other): ::com::sun::star::io::SocketException(the_other) {}

ConnectException::~ConnectException() {}

ConnectException & ConnectException::operator =(ConnectException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::io::SocketException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace io {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::io::ConnectException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::io::SocketException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.io.ConnectException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::io::ConnectException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::io::ConnectException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_IO_CONNECTEXCEPTION_HPP
