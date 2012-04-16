#ifndef INCLUDED_COM_SUN_STAR_JAVA_JAVANOTFOUNDEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_JAVA_JAVANOTFOUNDEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/java/JavaNotFoundException.hdl"

#include "com/sun/star/java/JavaInitializationException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace java {

inline JavaNotFoundException::JavaNotFoundException() SAL_THROW( () )
    : ::com::sun::star::java::JavaInitializationException()
{ }

inline JavaNotFoundException::JavaNotFoundException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::java::JavaInitializationException(Message_, Context_)
{ }

JavaNotFoundException::JavaNotFoundException(JavaNotFoundException const & the_other): ::com::sun::star::java::JavaInitializationException(the_other) {}

JavaNotFoundException::~JavaNotFoundException() {}

JavaNotFoundException & JavaNotFoundException::operator =(JavaNotFoundException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::java::JavaInitializationException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace java {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::java::JavaNotFoundException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::java::JavaInitializationException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.java.JavaNotFoundException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::java::JavaNotFoundException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::java::JavaNotFoundException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_JAVA_JAVANOTFOUNDEXCEPTION_HPP
