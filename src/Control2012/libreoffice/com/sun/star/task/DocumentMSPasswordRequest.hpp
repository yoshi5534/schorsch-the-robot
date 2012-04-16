#ifndef INCLUDED_COM_SUN_STAR_TASK_DOCUMENTMSPASSWORDREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_TASK_DOCUMENTMSPASSWORDREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/task/DocumentMSPasswordRequest.hdl"

#include "com/sun/star/task/PasswordRequest.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace task {

inline DocumentMSPasswordRequest::DocumentMSPasswordRequest() SAL_THROW( () )
    : ::com::sun::star::task::PasswordRequest()
    , Name()
{ }

inline DocumentMSPasswordRequest::DocumentMSPasswordRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::com::sun::star::task::PasswordRequestMode& Mode_, const ::rtl::OUString& Name_) SAL_THROW( () )
    : ::com::sun::star::task::PasswordRequest(Message_, Context_, Classification_, Mode_)
    , Name(Name_)
{ }

DocumentMSPasswordRequest::DocumentMSPasswordRequest(DocumentMSPasswordRequest const & the_other): ::com::sun::star::task::PasswordRequest(the_other), Name(the_other.Name) {}

DocumentMSPasswordRequest::~DocumentMSPasswordRequest() {}

DocumentMSPasswordRequest & DocumentMSPasswordRequest::operator =(DocumentMSPasswordRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::PasswordRequest::operator =(the_other);
    Name = the_other.Name;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace task {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::task::DocumentMSPasswordRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::PasswordRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.task.DocumentMSPasswordRequest", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::task::DocumentMSPasswordRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::task::DocumentMSPasswordRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TASK_DOCUMENTMSPASSWORDREQUEST_HPP
