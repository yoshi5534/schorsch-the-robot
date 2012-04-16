#ifndef INCLUDED_COM_SUN_STAR_UCB_CERTIFICATEVALIDATIONREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_UCB_CERTIFICATEVALIDATIONREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/CertificateValidationRequest.hdl"

#include "com/sun/star/security/XCertificate.hpp"
#include "com/sun/star/task/ClassifiedInteractionRequest.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline CertificateValidationRequest::CertificateValidationRequest() SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest()
    , CertificateValidity(0)
    , Certificate()
    , HostName()
{ }

inline CertificateValidationRequest::CertificateValidationRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::sal_Int32& CertificateValidity_, const ::com::sun::star::uno::Reference< ::com::sun::star::security::XCertificate >& Certificate_, const ::rtl::OUString& HostName_) SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest(Message_, Context_, Classification_)
    , CertificateValidity(CertificateValidity_)
    , Certificate(Certificate_)
    , HostName(HostName_)
{ }

CertificateValidationRequest::CertificateValidationRequest(CertificateValidationRequest const & the_other): ::com::sun::star::task::ClassifiedInteractionRequest(the_other), CertificateValidity(the_other.CertificateValidity), Certificate(the_other.Certificate), HostName(the_other.HostName) {}

CertificateValidationRequest::~CertificateValidationRequest() {}

CertificateValidationRequest & CertificateValidationRequest::operator =(CertificateValidationRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::ClassifiedInteractionRequest::operator =(the_other);
    CertificateValidity = the_other.CertificateValidity;
    Certificate = the_other.Certificate;
    HostName = the_other.HostName;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::CertificateValidationRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::ClassifiedInteractionRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[3];
        const ::com::sun::star::uno::Type& rMemberType_long = ::cppu::UnoType< ::sal_Int32 >::get();
        aMemberRefs[0] = rMemberType_long.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_security_XCertificate = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::security::XCertificate > >::get();
        aMemberRefs[1] = rMemberType_com_sun_star_security_XCertificate.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[2] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.CertificateValidationRequest", rBaseType.getTypeLibType(), 3,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::CertificateValidationRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::CertificateValidationRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_CERTIFICATEVALIDATIONREQUEST_HPP
