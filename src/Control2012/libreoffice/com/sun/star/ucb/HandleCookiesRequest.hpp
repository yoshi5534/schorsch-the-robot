#ifndef INCLUDED_COM_SUN_STAR_UCB_HANDLECOOKIESREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_UCB_HANDLECOOKIESREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/HandleCookiesRequest.hdl"

#include "com/sun/star/ucb/CookieRequest.hpp"
#include "com/sun/star/task/ClassifiedInteractionRequest.hpp"
#include "com/sun/star/ucb/Cookie.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline HandleCookiesRequest::HandleCookiesRequest() SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest()
    , URL()
    , Cookies()
    , Request(::com::sun::star::ucb::CookieRequest_RECEIVE)
{ }

inline HandleCookiesRequest::HandleCookiesRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::rtl::OUString& URL_, const ::com::sun::star::uno::Sequence< ::com::sun::star::ucb::Cookie >& Cookies_, const ::com::sun::star::ucb::CookieRequest& Request_) SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest(Message_, Context_, Classification_)
    , URL(URL_)
    , Cookies(Cookies_)
    , Request(Request_)
{ }

HandleCookiesRequest::HandleCookiesRequest(HandleCookiesRequest const & the_other): ::com::sun::star::task::ClassifiedInteractionRequest(the_other), URL(the_other.URL), Cookies(the_other.Cookies), Request(the_other.Request) {}

HandleCookiesRequest::~HandleCookiesRequest() {}

HandleCookiesRequest & HandleCookiesRequest::operator =(HandleCookiesRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::ClassifiedInteractionRequest::operator =(the_other);
    URL = the_other.URL;
    Cookies = the_other.Cookies;
    Request = the_other.Request;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::HandleCookiesRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::ClassifiedInteractionRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[3];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_seq_com_sun_star_ucb_Cookie = ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::ucb::Cookie > >::get();
        aMemberRefs[1] = rMemberType_seq_com_sun_star_ucb_Cookie.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_ucb_CookieRequest = ::cppu::UnoType< ::com::sun::star::ucb::CookieRequest >::get();
        aMemberRefs[2] = rMemberType_com_sun_star_ucb_CookieRequest.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.HandleCookiesRequest", rBaseType.getTypeLibType(), 3,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::HandleCookiesRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::HandleCookiesRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_HANDLECOOKIESREQUEST_HPP
