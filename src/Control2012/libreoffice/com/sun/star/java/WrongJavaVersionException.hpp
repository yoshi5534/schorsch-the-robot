#ifndef INCLUDED_COM_SUN_STAR_JAVA_WRONGJAVAVERSIONEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_JAVA_WRONGJAVAVERSIONEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/java/WrongJavaVersionException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace java {

inline WrongJavaVersionException::WrongJavaVersionException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , LowestSupportedVersion()
    , HighestSupportedVersion()
    , DetectedVersion()
{ }

inline WrongJavaVersionException::WrongJavaVersionException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& LowestSupportedVersion_, const ::rtl::OUString& HighestSupportedVersion_, const ::rtl::OUString& DetectedVersion_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , LowestSupportedVersion(LowestSupportedVersion_)
    , HighestSupportedVersion(HighestSupportedVersion_)
    , DetectedVersion(DetectedVersion_)
{ }

WrongJavaVersionException::WrongJavaVersionException(WrongJavaVersionException const & the_other): ::com::sun::star::uno::Exception(the_other), LowestSupportedVersion(the_other.LowestSupportedVersion), HighestSupportedVersion(the_other.HighestSupportedVersion), DetectedVersion(the_other.DetectedVersion) {}

WrongJavaVersionException::~WrongJavaVersionException() {}

WrongJavaVersionException & WrongJavaVersionException::operator =(WrongJavaVersionException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    LowestSupportedVersion = the_other.LowestSupportedVersion;
    HighestSupportedVersion = the_other.HighestSupportedVersion;
    DetectedVersion = the_other.DetectedVersion;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace java {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::java::WrongJavaVersionException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[3];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();
        aMemberRefs[1] = rMemberType_string.getTypeLibType();
        aMemberRefs[2] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.java.WrongJavaVersionException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 3,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::java::WrongJavaVersionException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::java::WrongJavaVersionException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_JAVA_WRONGJAVAVERSIONEXCEPTION_HPP
