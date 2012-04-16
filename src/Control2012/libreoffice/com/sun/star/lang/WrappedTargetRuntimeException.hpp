#ifndef INCLUDED_COM_SUN_STAR_LANG_WRAPPEDTARGETRUNTIMEEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_LANG_WRAPPEDTARGETRUNTIMEEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/lang/WrappedTargetRuntimeException.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace lang {

inline WrappedTargetRuntimeException::WrappedTargetRuntimeException() SAL_THROW( () )
    : ::com::sun::star::uno::RuntimeException()
    , TargetException()
{ }

inline WrappedTargetRuntimeException::WrappedTargetRuntimeException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Any& TargetException_) SAL_THROW( () )
    : ::com::sun::star::uno::RuntimeException(Message_, Context_)
    , TargetException(TargetException_)
{ }

WrappedTargetRuntimeException::WrappedTargetRuntimeException(WrappedTargetRuntimeException const & the_other): ::com::sun::star::uno::RuntimeException(the_other), TargetException(the_other.TargetException) {}

WrappedTargetRuntimeException::~WrappedTargetRuntimeException() {}

WrappedTargetRuntimeException & WrappedTargetRuntimeException::operator =(WrappedTargetRuntimeException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::RuntimeException::operator =(the_other);
    TargetException = the_other.TargetException;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace lang {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::lang::WrappedTargetRuntimeException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::uno::RuntimeException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_any = ::cppu::UnoType< ::com::sun::star::uno::Any >::get();
        aMemberRefs[0] = rMemberType_any.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.lang.WrappedTargetRuntimeException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::lang::WrappedTargetRuntimeException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::lang::WrappedTargetRuntimeException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_LANG_WRAPPEDTARGETRUNTIMEEXCEPTION_HPP
