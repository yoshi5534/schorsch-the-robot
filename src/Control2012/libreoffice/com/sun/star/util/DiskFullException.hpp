#ifndef INCLUDED_COM_SUN_STAR_UTIL_DISKFULLEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UTIL_DISKFULLEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/util/DiskFullException.hdl"

#include "com/sun/star/util/FileIOException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace util {

inline DiskFullException::DiskFullException() SAL_THROW( () )
    : ::com::sun::star::util::FileIOException()
{ }

inline DiskFullException::DiskFullException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::util::FileIOException(Message_, Context_)
{ }

DiskFullException::DiskFullException(DiskFullException const & the_other): ::com::sun::star::util::FileIOException(the_other) {}

DiskFullException::~DiskFullException() {}

DiskFullException & DiskFullException::operator =(DiskFullException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::util::FileIOException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace util {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::util::DiskFullException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::util::FileIOException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.util.DiskFullException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::util::DiskFullException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::util::DiskFullException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UTIL_DISKFULLEXCEPTION_HPP
