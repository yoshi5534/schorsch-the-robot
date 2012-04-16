#ifndef INCLUDED_COM_SUN_STAR_DEPLOYMENT_INSTALLEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_DEPLOYMENT_INSTALLEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/deployment/InstallException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace deployment {

inline InstallException::InstallException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , displayName()
{ }

inline InstallException::InstallException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& displayName_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , displayName(displayName_)
{ }

InstallException::InstallException(InstallException const & the_other): ::com::sun::star::uno::Exception(the_other), displayName(the_other.displayName) {}

InstallException::~InstallException() {}

InstallException & InstallException::operator =(InstallException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    displayName = the_other.displayName;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace deployment {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::deployment::InstallException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.deployment.InstallException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::deployment::InstallException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::deployment::InstallException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DEPLOYMENT_INSTALLEXCEPTION_HPP
