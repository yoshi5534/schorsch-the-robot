#ifndef INCLUDED_COM_SUN_STAR_DOCUMENT_BROKENPACKAGEREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_DOCUMENT_BROKENPACKAGEREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/document/BrokenPackageRequest.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace document {

inline BrokenPackageRequest::BrokenPackageRequest() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , aName()
{ }

inline BrokenPackageRequest::BrokenPackageRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& aName_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , aName(aName_)
{ }

BrokenPackageRequest::BrokenPackageRequest(BrokenPackageRequest const & the_other): ::com::sun::star::uno::Exception(the_other), aName(the_other.aName) {}

BrokenPackageRequest::~BrokenPackageRequest() {}

BrokenPackageRequest & BrokenPackageRequest::operator =(BrokenPackageRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    aName = the_other.aName;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace document {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::document::BrokenPackageRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.document.BrokenPackageRequest", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::document::BrokenPackageRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::document::BrokenPackageRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DOCUMENT_BROKENPACKAGEREQUEST_HPP
