#ifndef INCLUDED_COM_SUN_STAR_TASK_DOCUMENTMACROCONFIRMATIONREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_TASK_DOCUMENTMACROCONFIRMATIONREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/task/DocumentMacroConfirmationRequest.hdl"

#include "com/sun/star/security/DocumentSignatureInformation.hpp"
#include "com/sun/star/embed/XStorage.hpp"
#include "com/sun/star/task/ClassifiedInteractionRequest.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace task {

inline DocumentMacroConfirmationRequest::DocumentMacroConfirmationRequest() SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest()
    , DocumentURL()
    , DocumentStorage()
    , DocumentVersion()
    , DocumentSignatureInformation()
{ }

inline DocumentMacroConfirmationRequest::DocumentMacroConfirmationRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::rtl::OUString& DocumentURL_, const ::com::sun::star::uno::Reference< ::com::sun::star::embed::XStorage >& DocumentStorage_, const ::rtl::OUString& DocumentVersion_, const ::com::sun::star::uno::Sequence< ::com::sun::star::security::DocumentSignatureInformation >& DocumentSignatureInformation_) SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest(Message_, Context_, Classification_)
    , DocumentURL(DocumentURL_)
    , DocumentStorage(DocumentStorage_)
    , DocumentVersion(DocumentVersion_)
    , DocumentSignatureInformation(DocumentSignatureInformation_)
{ }

DocumentMacroConfirmationRequest::DocumentMacroConfirmationRequest(DocumentMacroConfirmationRequest const & the_other): ::com::sun::star::task::ClassifiedInteractionRequest(the_other), DocumentURL(the_other.DocumentURL), DocumentStorage(the_other.DocumentStorage), DocumentVersion(the_other.DocumentVersion), DocumentSignatureInformation(the_other.DocumentSignatureInformation) {}

DocumentMacroConfirmationRequest::~DocumentMacroConfirmationRequest() {}

DocumentMacroConfirmationRequest & DocumentMacroConfirmationRequest::operator =(DocumentMacroConfirmationRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::ClassifiedInteractionRequest::operator =(the_other);
    DocumentURL = the_other.DocumentURL;
    DocumentStorage = the_other.DocumentStorage;
    DocumentVersion = the_other.DocumentVersion;
    DocumentSignatureInformation = the_other.DocumentSignatureInformation;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace task {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::task::DocumentMacroConfirmationRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::ClassifiedInteractionRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[4];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_embed_XStorage = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::embed::XStorage > >::get();
        aMemberRefs[1] = rMemberType_com_sun_star_embed_XStorage.getTypeLibType();
        aMemberRefs[2] = rMemberType_string.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_seq_com_sun_star_security_DocumentSignatureInformation = ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::security::DocumentSignatureInformation > >::get();
        aMemberRefs[3] = rMemberType_seq_com_sun_star_security_DocumentSignatureInformation.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.task.DocumentMacroConfirmationRequest", rBaseType.getTypeLibType(), 4,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::task::DocumentMacroConfirmationRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::task::DocumentMacroConfirmationRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TASK_DOCUMENTMACROCONFIRMATIONREQUEST_HPP
