#ifndef INCLUDED_COM_SUN_STAR_IO_UNKNOWNHOSTEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_IO_UNKNOWNHOSTEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/io/UnknownHostException.hdl"

#include "com/sun/star/io/IOException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace io {

inline UnknownHostException::UnknownHostException() SAL_THROW( () )
    : ::com::sun::star::io::IOException()
{ }

inline UnknownHostException::UnknownHostException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::io::IOException(Message_, Context_)
{ }

UnknownHostException::UnknownHostException(UnknownHostException const & the_other): ::com::sun::star::io::IOException(the_other) {}

UnknownHostException::~UnknownHostException() {}

UnknownHostException & UnknownHostException::operator =(UnknownHostException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::io::IOException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace io {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::io::UnknownHostException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::io::IOException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.io.UnknownHostException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::io::UnknownHostException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::io::UnknownHostException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_IO_UNKNOWNHOSTEXCEPTION_HPP
