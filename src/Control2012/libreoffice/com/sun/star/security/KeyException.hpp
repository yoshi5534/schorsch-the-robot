#ifndef INCLUDED_COM_SUN_STAR_SECURITY_KEYEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_SECURITY_KEYEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/security/KeyException.hdl"

#include "com/sun/star/uno/SecurityException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace security {

inline KeyException::KeyException() SAL_THROW( () )
    : ::com::sun::star::uno::SecurityException()
{ }

inline KeyException::KeyException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::uno::SecurityException(Message_, Context_)
{ }

KeyException::KeyException(KeyException const & the_other): ::com::sun::star::uno::SecurityException(the_other) {}

KeyException::~KeyException() {}

KeyException & KeyException::operator =(KeyException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::SecurityException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace security {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::security::KeyException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::uno::SecurityException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.security.KeyException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::security::KeyException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::security::KeyException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SECURITY_KEYEXCEPTION_HPP
