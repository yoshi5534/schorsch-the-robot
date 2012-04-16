#ifndef INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_STRATUMCREATIONEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_STRATUMCREATIONEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/configuration/backend/StratumCreationException.hdl"

#include "com/sun/star/configuration/backend/BackendSetupException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace configuration { namespace backend {

inline StratumCreationException::StratumCreationException() SAL_THROW( () )
    : ::com::sun::star::configuration::backend::BackendSetupException()
    , StratumService()
    , StratumData()
{ }

inline StratumCreationException::StratumCreationException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Any& BackendException_, const ::rtl::OUString& StratumService_, const ::rtl::OUString& StratumData_) SAL_THROW( () )
    : ::com::sun::star::configuration::backend::BackendSetupException(Message_, Context_, BackendException_)
    , StratumService(StratumService_)
    , StratumData(StratumData_)
{ }

StratumCreationException::StratumCreationException(StratumCreationException const & the_other): ::com::sun::star::configuration::backend::BackendSetupException(the_other), StratumService(the_other.StratumService), StratumData(the_other.StratumData) {}

StratumCreationException::~StratumCreationException() {}

StratumCreationException & StratumCreationException::operator =(StratumCreationException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::configuration::backend::BackendSetupException::operator =(the_other);
    StratumService = the_other.StratumService;
    StratumData = the_other.StratumData;
    return *this;
}

} } } } }

namespace com { namespace sun { namespace star { namespace configuration { namespace backend {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::configuration::backend::StratumCreationException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::configuration::backend::BackendSetupException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[2];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();
        aMemberRefs[1] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.configuration.backend.StratumCreationException", rBaseType.getTypeLibType(), 2,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::configuration::backend::StratumCreationException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::configuration::backend::StratumCreationException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CONFIGURATION_BACKEND_STRATUMCREATIONEXCEPTION_HPP
