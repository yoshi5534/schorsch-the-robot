#ifndef INCLUDED_COM_SUN_STAR_JAVA_MISSINGJAVARUNTIMEEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_JAVA_MISSINGJAVARUNTIMEEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/java/MissingJavaRuntimeException.hdl"

#include "com/sun/star/java/JavaInitializationException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace java {

inline MissingJavaRuntimeException::MissingJavaRuntimeException() SAL_THROW( () )
    : ::com::sun::star::java::JavaInitializationException()
    , URLRuntimeLib()
{ }

inline MissingJavaRuntimeException::MissingJavaRuntimeException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& URLRuntimeLib_) SAL_THROW( () )
    : ::com::sun::star::java::JavaInitializationException(Message_, Context_)
    , URLRuntimeLib(URLRuntimeLib_)
{ }

MissingJavaRuntimeException::MissingJavaRuntimeException(MissingJavaRuntimeException const & the_other): ::com::sun::star::java::JavaInitializationException(the_other), URLRuntimeLib(the_other.URLRuntimeLib) {}

MissingJavaRuntimeException::~MissingJavaRuntimeException() {}

MissingJavaRuntimeException & MissingJavaRuntimeException::operator =(MissingJavaRuntimeException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::java::JavaInitializationException::operator =(the_other);
    URLRuntimeLib = the_other.URLRuntimeLib;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace java {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::java::MissingJavaRuntimeException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::java::JavaInitializationException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.java.MissingJavaRuntimeException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::java::MissingJavaRuntimeException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::java::MissingJavaRuntimeException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_JAVA_MISSINGJAVARUNTIMEEXCEPTION_HPP
