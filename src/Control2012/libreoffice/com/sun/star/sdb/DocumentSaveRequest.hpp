#ifndef INCLUDED_COM_SUN_STAR_SDB_DOCUMENTSAVEREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_SDB_DOCUMENTSAVEREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/sdb/DocumentSaveRequest.hdl"

#include "com/sun/star/ucb/XContent.hpp"
#include "com/sun/star/task/ClassifiedInteractionRequest.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace sdb {

inline DocumentSaveRequest::DocumentSaveRequest() SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest()
    , Content()
    , Name()
{ }

inline DocumentSaveRequest::DocumentSaveRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::com::sun::star::uno::Reference< ::com::sun::star::ucb::XContent >& Content_, const ::rtl::OUString& Name_) SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest(Message_, Context_, Classification_)
    , Content(Content_)
    , Name(Name_)
{ }

DocumentSaveRequest::DocumentSaveRequest(DocumentSaveRequest const & the_other): ::com::sun::star::task::ClassifiedInteractionRequest(the_other), Content(the_other.Content), Name(the_other.Name) {}

DocumentSaveRequest::~DocumentSaveRequest() {}

DocumentSaveRequest & DocumentSaveRequest::operator =(DocumentSaveRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::ClassifiedInteractionRequest::operator =(the_other);
    Content = the_other.Content;
    Name = the_other.Name;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace sdb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sdb::DocumentSaveRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::ClassifiedInteractionRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[2];
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_ucb_XContent = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::ucb::XContent > >::get();
        aMemberRefs[0] = rMemberType_com_sun_star_ucb_XContent.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[1] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.sdb.DocumentSaveRequest", rBaseType.getTypeLibType(), 2,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sdb::DocumentSaveRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sdb::DocumentSaveRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SDB_DOCUMENTSAVEREQUEST_HPP
