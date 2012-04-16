#ifndef INCLUDED_COM_SUN_STAR_SDBC_SQLEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_SDBC_SQLEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/sdbc/SQLException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace sdbc {

inline SQLException::SQLException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , SQLState()
    , ErrorCode(0)
    , NextException()
{ }

inline SQLException::SQLException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& SQLState_, const ::sal_Int32& ErrorCode_, const ::com::sun::star::uno::Any& NextException_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , SQLState(SQLState_)
    , ErrorCode(ErrorCode_)
    , NextException(NextException_)
{ }

SQLException::SQLException(SQLException const & the_other): ::com::sun::star::uno::Exception(the_other), SQLState(the_other.SQLState), ErrorCode(the_other.ErrorCode), NextException(the_other.NextException) {}

SQLException::~SQLException() {}

SQLException & SQLException::operator =(SQLException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    SQLState = the_other.SQLState;
    ErrorCode = the_other.ErrorCode;
    NextException = the_other.NextException;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace sdbc {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sdbc::SQLException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[3];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_long = ::cppu::UnoType< ::sal_Int32 >::get();
        aMemberRefs[1] = rMemberType_long.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_any = ::cppu::UnoType< ::com::sun::star::uno::Any >::get();
        aMemberRefs[2] = rMemberType_any.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.sdbc.SQLException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 3,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sdbc::SQLException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sdbc::SQLException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SDBC_SQLEXCEPTION_HPP
