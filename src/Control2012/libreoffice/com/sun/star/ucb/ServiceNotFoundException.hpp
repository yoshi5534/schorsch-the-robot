#ifndef INCLUDED_COM_SUN_STAR_UCB_SERVICENOTFOUNDEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_SERVICENOTFOUNDEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/ServiceNotFoundException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline ServiceNotFoundException::ServiceNotFoundException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
{ }

inline ServiceNotFoundException::ServiceNotFoundException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
{ }

ServiceNotFoundException::ServiceNotFoundException(ServiceNotFoundException const & the_other): ::com::sun::star::uno::Exception(the_other) {}

ServiceNotFoundException::~ServiceNotFoundException() {}

ServiceNotFoundException & ServiceNotFoundException::operator =(ServiceNotFoundException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::ServiceNotFoundException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.ServiceNotFoundException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::ServiceNotFoundException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::ServiceNotFoundException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_SERVICENOTFOUNDEXCEPTION_HPP
