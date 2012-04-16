#ifndef INCLUDED_COM_SUN_STAR_TASK_DOCUMENTMSPASSWORDREQUEST2_HPP
#define INCLUDED_COM_SUN_STAR_TASK_DOCUMENTMSPASSWORDREQUEST2_HPP

#include "sal/config.h"

#include "com/sun/star/task/DocumentMSPasswordRequest2.hdl"

#include "com/sun/star/task/DocumentMSPasswordRequest.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace task {

inline DocumentMSPasswordRequest2::DocumentMSPasswordRequest2() SAL_THROW( () )
    : ::com::sun::star::task::DocumentMSPasswordRequest()
    , IsRequestPasswordToModify(false)
{ }

inline DocumentMSPasswordRequest2::DocumentMSPasswordRequest2(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::com::sun::star::task::PasswordRequestMode& Mode_, const ::rtl::OUString& Name_, const ::sal_Bool& IsRequestPasswordToModify_) SAL_THROW( () )
    : ::com::sun::star::task::DocumentMSPasswordRequest(Message_, Context_, Classification_, Mode_, Name_)
    , IsRequestPasswordToModify(IsRequestPasswordToModify_)
{ }

DocumentMSPasswordRequest2::DocumentMSPasswordRequest2(DocumentMSPasswordRequest2 const & the_other): ::com::sun::star::task::DocumentMSPasswordRequest(the_other), IsRequestPasswordToModify(the_other.IsRequestPasswordToModify) {}

DocumentMSPasswordRequest2::~DocumentMSPasswordRequest2() {}

DocumentMSPasswordRequest2 & DocumentMSPasswordRequest2::operator =(DocumentMSPasswordRequest2 const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::DocumentMSPasswordRequest::operator =(the_other);
    IsRequestPasswordToModify = the_other.IsRequestPasswordToModify;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace task {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::task::DocumentMSPasswordRequest2 const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::DocumentMSPasswordRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_boolean = ::cppu::UnoType< ::sal_Bool >::get();
        aMemberRefs[0] = rMemberType_boolean.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.task.DocumentMSPasswordRequest2", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::task::DocumentMSPasswordRequest2 const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::task::DocumentMSPasswordRequest2 >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TASK_DOCUMENTMSPASSWORDREQUEST2_HPP
