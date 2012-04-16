#ifndef INCLUDED_COM_SUN_STAR_REFLECTION_INVOCATIONTARGETEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_REFLECTION_INVOCATIONTARGETEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/reflection/InvocationTargetException.hdl"

#include "com/sun/star/lang/WrappedTargetException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace reflection {

inline InvocationTargetException::InvocationTargetException() SAL_THROW( () )
    : ::com::sun::star::lang::WrappedTargetException()
{ }

inline InvocationTargetException::InvocationTargetException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Any& TargetException_) SAL_THROW( () )
    : ::com::sun::star::lang::WrappedTargetException(Message_, Context_, TargetException_)
{ }

InvocationTargetException::InvocationTargetException(InvocationTargetException const & the_other): ::com::sun::star::lang::WrappedTargetException(the_other) {}

InvocationTargetException::~InvocationTargetException() {}

InvocationTargetException & InvocationTargetException::operator =(InvocationTargetException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::lang::WrappedTargetException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace reflection {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::reflection::InvocationTargetException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::lang::WrappedTargetException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.reflection.InvocationTargetException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::reflection::InvocationTargetException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::reflection::InvocationTargetException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_REFLECTION_INVOCATIONTARGETEXCEPTION_HPP
