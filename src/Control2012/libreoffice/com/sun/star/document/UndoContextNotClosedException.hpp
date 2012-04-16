#ifndef INCLUDED_COM_SUN_STAR_DOCUMENT_UNDOCONTEXTNOTCLOSEDEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_DOCUMENT_UNDOCONTEXTNOTCLOSEDEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/document/UndoContextNotClosedException.hdl"

#include "com/sun/star/util/InvalidStateException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace document {

inline UndoContextNotClosedException::UndoContextNotClosedException() SAL_THROW( () )
    : ::com::sun::star::util::InvalidStateException()
{ }

inline UndoContextNotClosedException::UndoContextNotClosedException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::util::InvalidStateException(Message_, Context_)
{ }

UndoContextNotClosedException::UndoContextNotClosedException(UndoContextNotClosedException const & the_other): ::com::sun::star::util::InvalidStateException(the_other) {}

UndoContextNotClosedException::~UndoContextNotClosedException() {}

UndoContextNotClosedException & UndoContextNotClosedException::operator =(UndoContextNotClosedException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::util::InvalidStateException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace document {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::document::UndoContextNotClosedException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::util::InvalidStateException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.document.UndoContextNotClosedException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::document::UndoContextNotClosedException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::document::UndoContextNotClosedException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DOCUMENT_UNDOCONTEXTNOTCLOSEDEXCEPTION_HPP
