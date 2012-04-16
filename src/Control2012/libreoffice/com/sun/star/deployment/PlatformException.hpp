#ifndef INCLUDED_COM_SUN_STAR_DEPLOYMENT_PLATFORMEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_DEPLOYMENT_PLATFORMEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/deployment/PlatformException.hdl"

#include "com/sun/star/deployment/XPackage.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace deployment {

inline PlatformException::PlatformException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , package()
{ }

inline PlatformException::PlatformException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackage >& package_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , package(package_)
{ }

PlatformException::PlatformException(PlatformException const & the_other): ::com::sun::star::uno::Exception(the_other), package(the_other.package) {}

PlatformException::~PlatformException() {}

PlatformException & PlatformException::operator =(PlatformException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    package = the_other.package;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace deployment {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::deployment::PlatformException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_deployment_XPackage = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackage > >::get();
        aMemberRefs[0] = rMemberType_com_sun_star_deployment_XPackage.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.deployment.PlatformException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::deployment::PlatformException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::deployment::PlatformException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DEPLOYMENT_PLATFORMEXCEPTION_HPP
