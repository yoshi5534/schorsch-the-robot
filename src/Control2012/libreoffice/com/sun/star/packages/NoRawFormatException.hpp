#ifndef INCLUDED_COM_SUN_STAR_PACKAGES_NORAWFORMATEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_PACKAGES_NORAWFORMATEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/packages/NoRawFormatException.hdl"

#include "com/sun/star/io/IOException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace packages {

inline NoRawFormatException::NoRawFormatException() SAL_THROW( () )
    : ::com::sun::star::io::IOException()
{ }

inline NoRawFormatException::NoRawFormatException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::io::IOException(Message_, Context_)
{ }

NoRawFormatException::NoRawFormatException(NoRawFormatException const & the_other): ::com::sun::star::io::IOException(the_other) {}

NoRawFormatException::~NoRawFormatException() {}

NoRawFormatException & NoRawFormatException::operator =(NoRawFormatException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::io::IOException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace packages {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::packages::NoRawFormatException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::io::IOException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.packages.NoRawFormatException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::packages::NoRawFormatException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::packages::NoRawFormatException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_PACKAGES_NORAWFORMATEXCEPTION_HPP
