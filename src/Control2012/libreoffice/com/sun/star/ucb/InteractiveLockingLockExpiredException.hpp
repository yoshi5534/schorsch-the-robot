#ifndef INCLUDED_COM_SUN_STAR_UCB_INTERACTIVELOCKINGLOCKEXPIREDEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_INTERACTIVELOCKINGLOCKEXPIREDEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/InteractiveLockingLockExpiredException.hdl"

#include "com/sun/star/ucb/InteractiveLockingException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline InteractiveLockingLockExpiredException::InteractiveLockingLockExpiredException() SAL_THROW( () )
    : ::com::sun::star::ucb::InteractiveLockingException()
{ }

inline InteractiveLockingLockExpiredException::InteractiveLockingLockExpiredException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::rtl::OUString& Url_) SAL_THROW( () )
    : ::com::sun::star::ucb::InteractiveLockingException(Message_, Context_, Classification_, Url_)
{ }

InteractiveLockingLockExpiredException::InteractiveLockingLockExpiredException(InteractiveLockingLockExpiredException const & the_other): ::com::sun::star::ucb::InteractiveLockingException(the_other) {}

InteractiveLockingLockExpiredException::~InteractiveLockingLockExpiredException() {}

InteractiveLockingLockExpiredException & InteractiveLockingLockExpiredException::operator =(InteractiveLockingLockExpiredException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::ucb::InteractiveLockingException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::InteractiveLockingLockExpiredException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::ucb::InteractiveLockingException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.InteractiveLockingLockExpiredException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::InteractiveLockingLockExpiredException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::InteractiveLockingLockExpiredException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_INTERACTIVELOCKINGLOCKEXPIREDEXCEPTION_HPP
