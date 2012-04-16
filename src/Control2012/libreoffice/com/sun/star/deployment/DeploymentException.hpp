#ifndef INCLUDED_COM_SUN_STAR_DEPLOYMENT_DEPLOYMENTEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_DEPLOYMENT_DEPLOYMENTEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/deployment/DeploymentException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace deployment {

inline DeploymentException::DeploymentException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , Cause()
{ }

inline DeploymentException::DeploymentException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Any& Cause_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , Cause(Cause_)
{ }

DeploymentException::DeploymentException(DeploymentException const & the_other): ::com::sun::star::uno::Exception(the_other), Cause(the_other.Cause) {}

DeploymentException::~DeploymentException() {}

DeploymentException & DeploymentException::operator =(DeploymentException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    Cause = the_other.Cause;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace deployment {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::deployment::DeploymentException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_any = ::cppu::UnoType< ::com::sun::star::uno::Any >::get();
        aMemberRefs[0] = rMemberType_any.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.deployment.DeploymentException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::deployment::DeploymentException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::deployment::DeploymentException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DEPLOYMENT_DEPLOYMENTEXCEPTION_HPP
