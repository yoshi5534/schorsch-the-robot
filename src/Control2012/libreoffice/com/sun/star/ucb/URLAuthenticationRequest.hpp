#ifndef INCLUDED_COM_SUN_STAR_UCB_URLAUTHENTICATIONREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_UCB_URLAUTHENTICATIONREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/URLAuthenticationRequest.hdl"

#include "com/sun/star/ucb/AuthenticationRequest.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline URLAuthenticationRequest::URLAuthenticationRequest() SAL_THROW( () )
    : ::com::sun::star::ucb::AuthenticationRequest()
    , URL()
{ }

inline URLAuthenticationRequest::URLAuthenticationRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::rtl::OUString& ServerName_, const ::rtl::OUString& Diagnostic_, const ::sal_Bool& HasRealm_, const ::rtl::OUString& Realm_, const ::sal_Bool& HasUserName_, const ::rtl::OUString& UserName_, const ::sal_Bool& HasPassword_, const ::rtl::OUString& Password_, const ::sal_Bool& HasAccount_, const ::rtl::OUString& Account_, const ::rtl::OUString& URL_) SAL_THROW( () )
    : ::com::sun::star::ucb::AuthenticationRequest(Message_, Context_, Classification_, ServerName_, Diagnostic_, HasRealm_, Realm_, HasUserName_, UserName_, HasPassword_, Password_, HasAccount_, Account_)
    , URL(URL_)
{ }

URLAuthenticationRequest::URLAuthenticationRequest(URLAuthenticationRequest const & the_other): ::com::sun::star::ucb::AuthenticationRequest(the_other), URL(the_other.URL) {}

URLAuthenticationRequest::~URLAuthenticationRequest() {}

URLAuthenticationRequest & URLAuthenticationRequest::operator =(URLAuthenticationRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::ucb::AuthenticationRequest::operator =(the_other);
    URL = the_other.URL;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::URLAuthenticationRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::ucb::AuthenticationRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.URLAuthenticationRequest", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::URLAuthenticationRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::URLAuthenticationRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_URLAUTHENTICATIONREQUEST_HPP
