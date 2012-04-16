#ifndef INCLUDED_COM_SUN_STAR_UCB_RESULTSETEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_RESULTSETEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/ResultSetException.hdl"

#include "com/sun/star/sdbc/SQLException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline ResultSetException::ResultSetException() SAL_THROW( () )
    : ::com::sun::star::sdbc::SQLException()
{ }

inline ResultSetException::ResultSetException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& SQLState_, const ::sal_Int32& ErrorCode_, const ::com::sun::star::uno::Any& NextException_) SAL_THROW( () )
    : ::com::sun::star::sdbc::SQLException(Message_, Context_, SQLState_, ErrorCode_, NextException_)
{ }

ResultSetException::ResultSetException(ResultSetException const & the_other): ::com::sun::star::sdbc::SQLException(the_other) {}

ResultSetException::~ResultSetException() {}

ResultSetException & ResultSetException::operator =(ResultSetException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::sdbc::SQLException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::ResultSetException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::sdbc::SQLException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.ResultSetException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::ResultSetException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::ResultSetException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_RESULTSETEXCEPTION_HPP
