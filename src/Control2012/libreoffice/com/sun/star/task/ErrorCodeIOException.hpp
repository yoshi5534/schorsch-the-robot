#ifndef INCLUDED_COM_SUN_STAR_TASK_ERRORCODEIOEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_TASK_ERRORCODEIOEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/task/ErrorCodeIOException.hdl"

#include "com/sun/star/io/IOException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace task {

inline ErrorCodeIOException::ErrorCodeIOException() SAL_THROW( () )
    : ::com::sun::star::io::IOException()
    , ErrCode(0)
{ }

inline ErrorCodeIOException::ErrorCodeIOException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::sal_Int32& ErrCode_) SAL_THROW( () )
    : ::com::sun::star::io::IOException(Message_, Context_)
    , ErrCode(ErrCode_)
{ }

ErrorCodeIOException::ErrorCodeIOException(ErrorCodeIOException const & the_other): ::com::sun::star::io::IOException(the_other), ErrCode(the_other.ErrCode) {}

ErrorCodeIOException::~ErrorCodeIOException() {}

ErrorCodeIOException & ErrorCodeIOException::operator =(ErrorCodeIOException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::io::IOException::operator =(the_other);
    ErrCode = the_other.ErrCode;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace task {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::task::ErrorCodeIOException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::io::IOException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_long = ::cppu::UnoType< ::sal_Int32 >::get();
        aMemberRefs[0] = rMemberType_long.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.task.ErrorCodeIOException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::task::ErrorCodeIOException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::task::ErrorCodeIOException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TASK_ERRORCODEIOEXCEPTION_HPP
