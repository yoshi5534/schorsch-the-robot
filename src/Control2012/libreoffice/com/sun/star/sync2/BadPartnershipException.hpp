#ifndef INCLUDED_COM_SUN_STAR_SYNC2_BADPARTNERSHIPEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_SYNC2_BADPARTNERSHIPEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/sync2/BadPartnershipException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace sync2 {

inline BadPartnershipException::BadPartnershipException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , Partnership()
{ }

inline BadPartnershipException::BadPartnershipException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& Partnership_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , Partnership(Partnership_)
{ }

BadPartnershipException::BadPartnershipException(BadPartnershipException const & the_other): ::com::sun::star::uno::Exception(the_other), Partnership(the_other.Partnership) {}

BadPartnershipException::~BadPartnershipException() {}

BadPartnershipException & BadPartnershipException::operator =(BadPartnershipException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    Partnership = the_other.Partnership;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace sync2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sync2::BadPartnershipException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.sync2.BadPartnershipException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sync2::BadPartnershipException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sync2::BadPartnershipException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SYNC2_BADPARTNERSHIPEXCEPTION_HPP
