#ifndef INCLUDED_COM_SUN_STAR_JAVA_JAVAINITIALIZATIONEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_JAVA_JAVAINITIALIZATIONEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/java/JavaInitializationException.hdl"

#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace java {

inline JavaInitializationException::JavaInitializationException() SAL_THROW( () )
    : ::com::sun::star::uno::DeploymentException()
{ }

inline JavaInitializationException::JavaInitializationException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::uno::DeploymentException(Message_, Context_)
{ }

JavaInitializationException::JavaInitializationException(JavaInitializationException const & the_other): ::com::sun::star::uno::DeploymentException(the_other) {}

JavaInitializationException::~JavaInitializationException() {}

JavaInitializationException & JavaInitializationException::operator =(JavaInitializationException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::DeploymentException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace java {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::java::JavaInitializationException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::uno::DeploymentException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.java.JavaInitializationException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::java::JavaInitializationException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::java::JavaInitializationException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_JAVA_JAVAINITIALIZATIONEXCEPTION_HPP
