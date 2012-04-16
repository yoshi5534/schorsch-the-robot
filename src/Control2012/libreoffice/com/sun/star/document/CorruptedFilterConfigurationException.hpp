#ifndef INCLUDED_COM_SUN_STAR_DOCUMENT_CORRUPTEDFILTERCONFIGURATIONEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_DOCUMENT_CORRUPTEDFILTERCONFIGURATIONEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/document/CorruptedFilterConfigurationException.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace document {

inline CorruptedFilterConfigurationException::CorruptedFilterConfigurationException() SAL_THROW( () )
    : ::com::sun::star::uno::RuntimeException()
    , Details()
{ }

inline CorruptedFilterConfigurationException::CorruptedFilterConfigurationException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& Details_) SAL_THROW( () )
    : ::com::sun::star::uno::RuntimeException(Message_, Context_)
    , Details(Details_)
{ }

CorruptedFilterConfigurationException::CorruptedFilterConfigurationException(CorruptedFilterConfigurationException const & the_other): ::com::sun::star::uno::RuntimeException(the_other), Details(the_other.Details) {}

CorruptedFilterConfigurationException::~CorruptedFilterConfigurationException() {}

CorruptedFilterConfigurationException & CorruptedFilterConfigurationException::operator =(CorruptedFilterConfigurationException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::RuntimeException::operator =(the_other);
    Details = the_other.Details;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace document {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::document::CorruptedFilterConfigurationException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::uno::RuntimeException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.document.CorruptedFilterConfigurationException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::document::CorruptedFilterConfigurationException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::document::CorruptedFilterConfigurationException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DOCUMENT_CORRUPTEDFILTERCONFIGURATIONEXCEPTION_HPP
