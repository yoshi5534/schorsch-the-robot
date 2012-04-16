#ifndef INCLUDED_COM_SUN_STAR_SECURITY_DOCUMENTSIGNATUREINFORMATION_HPP
#define INCLUDED_COM_SUN_STAR_SECURITY_DOCUMENTSIGNATUREINFORMATION_HPP

#include "sal/config.h"

#include "com/sun/star/security/DocumentSignatureInformation.hdl"

#include "com/sun/star/security/XCertificate.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace security {

inline DocumentSignatureInformation::DocumentSignatureInformation() SAL_THROW( () )
    : Signer()
    , SignatureDate(0)
    , SignatureTime(0)
    , SignatureIsValid(false)
    , CertificateStatus(0)
    , PartialDocumentSignature(false)
{
}

inline DocumentSignatureInformation::DocumentSignatureInformation(const ::com::sun::star::uno::Reference< ::com::sun::star::security::XCertificate >& Signer_, const ::sal_Int32& SignatureDate_, const ::sal_Int32& SignatureTime_, const ::sal_Bool& SignatureIsValid_, const ::sal_Int32& CertificateStatus_, const ::sal_Bool& PartialDocumentSignature_) SAL_THROW( () )
    : Signer(Signer_)
    , SignatureDate(SignatureDate_)
    , SignatureTime(SignatureTime_)
    , SignatureIsValid(SignatureIsValid_)
    , CertificateStatus(CertificateStatus_)
    , PartialDocumentSignature(PartialDocumentSignature_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace security {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::security::DocumentSignatureInformation const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::security::XCertificate > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.security.DocumentSignatureInformation", 0, 6, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::security::DocumentSignatureInformation const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::security::DocumentSignatureInformation >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SECURITY_DOCUMENTSIGNATUREINFORMATION_HPP
