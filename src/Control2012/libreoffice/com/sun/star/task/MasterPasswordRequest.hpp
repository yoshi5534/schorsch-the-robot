#ifndef INCLUDED_COM_SUN_STAR_TASK_MASTERPASSWORDREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_TASK_MASTERPASSWORDREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/task/MasterPasswordRequest.hdl"

#include "com/sun/star/task/PasswordRequest.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace task {

inline MasterPasswordRequest::MasterPasswordRequest() SAL_THROW( () )
    : ::com::sun::star::task::PasswordRequest()
{ }

inline MasterPasswordRequest::MasterPasswordRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::com::sun::star::task::PasswordRequestMode& Mode_) SAL_THROW( () )
    : ::com::sun::star::task::PasswordRequest(Message_, Context_, Classification_, Mode_)
{ }

MasterPasswordRequest::MasterPasswordRequest(MasterPasswordRequest const & the_other): ::com::sun::star::task::PasswordRequest(the_other) {}

MasterPasswordRequest::~MasterPasswordRequest() {}

MasterPasswordRequest & MasterPasswordRequest::operator =(MasterPasswordRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::PasswordRequest::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace task {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::task::MasterPasswordRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::PasswordRequest >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.task.MasterPasswordRequest", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::task::MasterPasswordRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::task::MasterPasswordRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TASK_MASTERPASSWORDREQUEST_HPP
