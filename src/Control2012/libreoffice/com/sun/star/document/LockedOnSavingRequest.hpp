#ifndef INCLUDED_COM_SUN_STAR_DOCUMENT_LOCKEDONSAVINGREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_DOCUMENT_LOCKEDONSAVINGREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/document/LockedOnSavingRequest.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace document {

inline LockedOnSavingRequest::LockedOnSavingRequest() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , DocumentURL()
    , UserInfo()
{ }

inline LockedOnSavingRequest::LockedOnSavingRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& DocumentURL_, const ::rtl::OUString& UserInfo_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , DocumentURL(DocumentURL_)
    , UserInfo(UserInfo_)
{ }

LockedOnSavingRequest::LockedOnSavingRequest(LockedOnSavingRequest const & the_other): ::com::sun::star::uno::Exception(the_other), DocumentURL(the_other.DocumentURL), UserInfo(the_other.UserInfo) {}

LockedOnSavingRequest::~LockedOnSavingRequest() {}

LockedOnSavingRequest & LockedOnSavingRequest::operator =(LockedOnSavingRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    DocumentURL = the_other.DocumentURL;
    UserInfo = the_other.UserInfo;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace document {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::document::LockedOnSavingRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[2];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();
        aMemberRefs[1] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.document.LockedOnSavingRequest", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 2,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::document::LockedOnSavingRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::document::LockedOnSavingRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DOCUMENT_LOCKEDONSAVINGREQUEST_HPP
