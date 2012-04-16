#ifndef INCLUDED_COM_SUN_STAR_DOCUMENT_LOCKFILEIGNOREREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_DOCUMENT_LOCKFILEIGNOREREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/document/LockFileIgnoreRequest.hdl"

#include "com/sun/star/io/IOException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace document {

inline LockFileIgnoreRequest::LockFileIgnoreRequest() SAL_THROW( () )
    : ::com::sun::star::io::IOException()
{ }

inline LockFileIgnoreRequest::LockFileIgnoreRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::io::IOException(Message_, Context_)
{ }

LockFileIgnoreRequest::LockFileIgnoreRequest(LockFileIgnoreRequest const & the_other): ::com::sun::star::io::IOException(the_other) {}

LockFileIgnoreRequest::~LockFileIgnoreRequest() {}

LockFileIgnoreRequest & LockFileIgnoreRequest::operator =(LockFileIgnoreRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::io::IOException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace document {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::document::LockFileIgnoreRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::io::IOException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.document.LockFileIgnoreRequest", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::document::LockFileIgnoreRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::document::LockFileIgnoreRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DOCUMENT_LOCKFILEIGNOREREQUEST_HPP
