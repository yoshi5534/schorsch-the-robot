#ifndef INCLUDED_COM_SUN_STAR_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/lang/ArrayIndexOutOfBoundsException.hdl"

#include "com/sun/star/lang/IndexOutOfBoundsException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace lang {

inline ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException() SAL_THROW( () )
    : ::com::sun::star::lang::IndexOutOfBoundsException()
{ }

inline ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::lang::IndexOutOfBoundsException(Message_, Context_)
{ }

ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(ArrayIndexOutOfBoundsException const & the_other): ::com::sun::star::lang::IndexOutOfBoundsException(the_other) {}

ArrayIndexOutOfBoundsException::~ArrayIndexOutOfBoundsException() {}

ArrayIndexOutOfBoundsException & ArrayIndexOutOfBoundsException::operator =(ArrayIndexOutOfBoundsException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::lang::IndexOutOfBoundsException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace lang {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::lang::ArrayIndexOutOfBoundsException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::lang::IndexOutOfBoundsException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.lang.ArrayIndexOutOfBoundsException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::lang::ArrayIndexOutOfBoundsException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::lang::ArrayIndexOutOfBoundsException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_HPP
