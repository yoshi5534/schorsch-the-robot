#ifndef INCLUDED_COM_SUN_STAR_SECURITY_ACCESSCONTROLEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_SECURITY_ACCESSCONTROLEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/security/AccessControlException.hdl"

#include "com/sun/star/uno/SecurityException.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace security {

inline AccessControlException::AccessControlException() SAL_THROW( () )
    : ::com::sun::star::uno::SecurityException()
    , LackingPermission()
{ }

inline AccessControlException::AccessControlException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Any& LackingPermission_) SAL_THROW( () )
    : ::com::sun::star::uno::SecurityException(Message_, Context_)
    , LackingPermission(LackingPermission_)
{ }

AccessControlException::AccessControlException(AccessControlException const & the_other): ::com::sun::star::uno::SecurityException(the_other), LackingPermission(the_other.LackingPermission) {}

AccessControlException::~AccessControlException() {}

AccessControlException & AccessControlException::operator =(AccessControlException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::SecurityException::operator =(the_other);
    LackingPermission = the_other.LackingPermission;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace security {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::security::AccessControlException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::uno::SecurityException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_any = ::cppu::UnoType< ::com::sun::star::uno::Any >::get();
        aMemberRefs[0] = rMemberType_any.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.security.AccessControlException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::security::AccessControlException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::security::AccessControlException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SECURITY_ACCESSCONTROLEXCEPTION_HPP
