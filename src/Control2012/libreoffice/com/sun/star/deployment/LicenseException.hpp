#ifndef INCLUDED_COM_SUN_STAR_DEPLOYMENT_LICENSEEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_DEPLOYMENT_LICENSEEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/deployment/LicenseException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace deployment {

inline LicenseException::LicenseException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , ExtensionName()
    , Text()
    , AcceptBy()
{ }

inline LicenseException::LicenseException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& ExtensionName_, const ::rtl::OUString& Text_, const ::rtl::OUString& AcceptBy_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , ExtensionName(ExtensionName_)
    , Text(Text_)
    , AcceptBy(AcceptBy_)
{ }

LicenseException::LicenseException(LicenseException const & the_other): ::com::sun::star::uno::Exception(the_other), ExtensionName(the_other.ExtensionName), Text(the_other.Text), AcceptBy(the_other.AcceptBy) {}

LicenseException::~LicenseException() {}

LicenseException & LicenseException::operator =(LicenseException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    ExtensionName = the_other.ExtensionName;
    Text = the_other.Text;
    AcceptBy = the_other.AcceptBy;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace deployment {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::deployment::LicenseException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[3];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();
        aMemberRefs[1] = rMemberType_string.getTypeLibType();
        aMemberRefs[2] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.deployment.LicenseException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 3,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::deployment::LicenseException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::deployment::LicenseException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DEPLOYMENT_LICENSEEXCEPTION_HPP
