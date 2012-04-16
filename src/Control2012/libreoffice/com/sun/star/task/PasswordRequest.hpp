#ifndef INCLUDED_COM_SUN_STAR_TASK_PASSWORDREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_TASK_PASSWORDREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/task/PasswordRequest.hdl"

#include "com/sun/star/task/ClassifiedInteractionRequest.hpp"
#include "com/sun/star/task/PasswordRequestMode.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace task {

inline PasswordRequest::PasswordRequest() SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest()
    , Mode(::com::sun::star::task::PasswordRequestMode_PASSWORD_CREATE)
{ }

inline PasswordRequest::PasswordRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::com::sun::star::task::PasswordRequestMode& Mode_) SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest(Message_, Context_, Classification_)
    , Mode(Mode_)
{ }

PasswordRequest::PasswordRequest(PasswordRequest const & the_other): ::com::sun::star::task::ClassifiedInteractionRequest(the_other), Mode(the_other.Mode) {}

PasswordRequest::~PasswordRequest() {}

PasswordRequest & PasswordRequest::operator =(PasswordRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::ClassifiedInteractionRequest::operator =(the_other);
    Mode = the_other.Mode;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace task {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::task::PasswordRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::ClassifiedInteractionRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_task_PasswordRequestMode = ::cppu::UnoType< ::com::sun::star::task::PasswordRequestMode >::get();
        aMemberRefs[0] = rMemberType_com_sun_star_task_PasswordRequestMode.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.task.PasswordRequest", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::task::PasswordRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::task::PasswordRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TASK_PASSWORDREQUEST_HPP
