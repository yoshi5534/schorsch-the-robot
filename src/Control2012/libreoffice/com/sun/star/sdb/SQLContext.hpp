#ifndef INCLUDED_COM_SUN_STAR_SDB_SQLCONTEXT_HPP
#define INCLUDED_COM_SUN_STAR_SDB_SQLCONTEXT_HPP

#include "sal/config.h"

#include "com/sun/star/sdb/SQLContext.hdl"

#include "com/sun/star/sdbc/SQLWarning.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace sdb {

inline SQLContext::SQLContext() SAL_THROW( () )
    : ::com::sun::star::sdbc::SQLWarning()
    , Details()
{ }

inline SQLContext::SQLContext(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& SQLState_, const ::sal_Int32& ErrorCode_, const ::com::sun::star::uno::Any& NextException_, const ::rtl::OUString& Details_) SAL_THROW( () )
    : ::com::sun::star::sdbc::SQLWarning(Message_, Context_, SQLState_, ErrorCode_, NextException_)
    , Details(Details_)
{ }

SQLContext::SQLContext(SQLContext const & the_other): ::com::sun::star::sdbc::SQLWarning(the_other), Details(the_other.Details) {}

SQLContext::~SQLContext() {}

SQLContext & SQLContext::operator =(SQLContext const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::sdbc::SQLWarning::operator =(the_other);
    Details = the_other.Details;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace sdb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sdb::SQLContext const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::sdbc::SQLWarning >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.sdb.SQLContext", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sdb::SQLContext const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sdb::SQLContext >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SDB_SQLCONTEXT_HPP
