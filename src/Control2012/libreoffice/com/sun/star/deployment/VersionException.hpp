#ifndef INCLUDED_COM_SUN_STAR_DEPLOYMENT_VERSIONEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_DEPLOYMENT_VERSIONEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/deployment/VersionException.hdl"

#include "com/sun/star/deployment/XPackage.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace deployment {

inline VersionException::VersionException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , NewVersion()
    , NewDisplayName()
    , Deployed()
{ }

inline VersionException::VersionException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& NewVersion_, const ::rtl::OUString& NewDisplayName_, const ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackage >& Deployed_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , NewVersion(NewVersion_)
    , NewDisplayName(NewDisplayName_)
    , Deployed(Deployed_)
{ }

VersionException::VersionException(VersionException const & the_other): ::com::sun::star::uno::Exception(the_other), NewVersion(the_other.NewVersion), NewDisplayName(the_other.NewDisplayName), Deployed(the_other.Deployed) {}

VersionException::~VersionException() {}

VersionException & VersionException::operator =(VersionException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    NewVersion = the_other.NewVersion;
    NewDisplayName = the_other.NewDisplayName;
    Deployed = the_other.Deployed;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace deployment {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::deployment::VersionException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[3];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();
        aMemberRefs[1] = rMemberType_string.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_deployment_XPackage = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackage > >::get();
        aMemberRefs[2] = rMemberType_com_sun_star_deployment_XPackage.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.deployment.VersionException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 3,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::deployment::VersionException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::deployment::VersionException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DEPLOYMENT_VERSIONEXCEPTION_HPP
