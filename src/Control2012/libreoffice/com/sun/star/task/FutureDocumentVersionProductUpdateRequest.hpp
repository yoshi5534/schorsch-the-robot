#ifndef INCLUDED_COM_SUN_STAR_TASK_FUTUREDOCUMENTVERSIONPRODUCTUPDATEREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_TASK_FUTUREDOCUMENTVERSIONPRODUCTUPDATEREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/task/FutureDocumentVersionProductUpdateRequest.hdl"

#include "com/sun/star/task/ClassifiedInteractionRequest.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace task {

inline FutureDocumentVersionProductUpdateRequest::FutureDocumentVersionProductUpdateRequest() SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest()
    , DocumentURL()
    , DocumentODFVersion()
{ }

inline FutureDocumentVersionProductUpdateRequest::FutureDocumentVersionProductUpdateRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::rtl::OUString& DocumentURL_, const ::rtl::OUString& DocumentODFVersion_) SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest(Message_, Context_, Classification_)
    , DocumentURL(DocumentURL_)
    , DocumentODFVersion(DocumentODFVersion_)
{ }

FutureDocumentVersionProductUpdateRequest::FutureDocumentVersionProductUpdateRequest(FutureDocumentVersionProductUpdateRequest const & the_other): ::com::sun::star::task::ClassifiedInteractionRequest(the_other), DocumentURL(the_other.DocumentURL), DocumentODFVersion(the_other.DocumentODFVersion) {}

FutureDocumentVersionProductUpdateRequest::~FutureDocumentVersionProductUpdateRequest() {}

FutureDocumentVersionProductUpdateRequest & FutureDocumentVersionProductUpdateRequest::operator =(FutureDocumentVersionProductUpdateRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::ClassifiedInteractionRequest::operator =(the_other);
    DocumentURL = the_other.DocumentURL;
    DocumentODFVersion = the_other.DocumentODFVersion;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace task {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::task::FutureDocumentVersionProductUpdateRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::ClassifiedInteractionRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[2];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();
        aMemberRefs[1] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.task.FutureDocumentVersionProductUpdateRequest", rBaseType.getTypeLibType(), 2,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::task::FutureDocumentVersionProductUpdateRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::task::FutureDocumentVersionProductUpdateRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TASK_FUTUREDOCUMENTVERSIONPRODUCTUPDATEREQUEST_HPP
