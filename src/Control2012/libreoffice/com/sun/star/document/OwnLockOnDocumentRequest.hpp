#ifndef INCLUDED_COM_SUN_STAR_DOCUMENT_OWNLOCKONDOCUMENTREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_DOCUMENT_OWNLOCKONDOCUMENTREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/document/OwnLockOnDocumentRequest.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace document {

inline OwnLockOnDocumentRequest::OwnLockOnDocumentRequest() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , DocumentURL()
    , TimeInfo()
    , IsStoring(false)
{ }

inline OwnLockOnDocumentRequest::OwnLockOnDocumentRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& DocumentURL_, const ::rtl::OUString& TimeInfo_, const ::sal_Bool& IsStoring_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , DocumentURL(DocumentURL_)
    , TimeInfo(TimeInfo_)
    , IsStoring(IsStoring_)
{ }

OwnLockOnDocumentRequest::OwnLockOnDocumentRequest(OwnLockOnDocumentRequest const & the_other): ::com::sun::star::uno::Exception(the_other), DocumentURL(the_other.DocumentURL), TimeInfo(the_other.TimeInfo), IsStoring(the_other.IsStoring) {}

OwnLockOnDocumentRequest::~OwnLockOnDocumentRequest() {}

OwnLockOnDocumentRequest & OwnLockOnDocumentRequest::operator =(OwnLockOnDocumentRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    DocumentURL = the_other.DocumentURL;
    TimeInfo = the_other.TimeInfo;
    IsStoring = the_other.IsStoring;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace document {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::document::OwnLockOnDocumentRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[3];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();
        aMemberRefs[1] = rMemberType_string.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_boolean = ::cppu::UnoType< ::sal_Bool >::get();
        aMemberRefs[2] = rMemberType_boolean.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.document.OwnLockOnDocumentRequest", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 3,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::document::OwnLockOnDocumentRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::document::OwnLockOnDocumentRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DOCUMENT_OWNLOCKONDOCUMENTREQUEST_HPP
