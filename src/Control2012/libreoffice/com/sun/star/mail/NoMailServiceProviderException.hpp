#ifndef INCLUDED_COM_SUN_STAR_MAIL_NOMAILSERVICEPROVIDEREXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_MAIL_NOMAILSERVICEPROVIDEREXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/mail/NoMailServiceProviderException.hdl"

#include "com/sun/star/mail/MailException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace mail {

inline NoMailServiceProviderException::NoMailServiceProviderException() SAL_THROW( () )
    : ::com::sun::star::mail::MailException()
{ }

inline NoMailServiceProviderException::NoMailServiceProviderException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::mail::MailException(Message_, Context_)
{ }

NoMailServiceProviderException::NoMailServiceProviderException(NoMailServiceProviderException const & the_other): ::com::sun::star::mail::MailException(the_other) {}

NoMailServiceProviderException::~NoMailServiceProviderException() {}

NoMailServiceProviderException & NoMailServiceProviderException::operator =(NoMailServiceProviderException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::mail::MailException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace mail {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::mail::NoMailServiceProviderException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::mail::MailException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.mail.NoMailServiceProviderException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::mail::NoMailServiceProviderException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::mail::NoMailServiceProviderException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_MAIL_NOMAILSERVICEPROVIDEREXCEPTION_HPP
