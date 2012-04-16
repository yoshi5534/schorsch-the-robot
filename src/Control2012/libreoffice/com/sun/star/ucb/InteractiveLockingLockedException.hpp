#ifndef INCLUDED_COM_SUN_STAR_UCB_INTERACTIVELOCKINGLOCKEDEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_INTERACTIVELOCKINGLOCKEDEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/InteractiveLockingLockedException.hdl"

#include "com/sun/star/ucb/InteractiveLockingException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline InteractiveLockingLockedException::InteractiveLockingLockedException() SAL_THROW( () )
    : ::com::sun::star::ucb::InteractiveLockingException()
    , SelfOwned(false)
{ }

inline InteractiveLockingLockedException::InteractiveLockingLockedException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::rtl::OUString& Url_, const ::sal_Bool& SelfOwned_) SAL_THROW( () )
    : ::com::sun::star::ucb::InteractiveLockingException(Message_, Context_, Classification_, Url_)
    , SelfOwned(SelfOwned_)
{ }

InteractiveLockingLockedException::InteractiveLockingLockedException(InteractiveLockingLockedException const & the_other): ::com::sun::star::ucb::InteractiveLockingException(the_other), SelfOwned(the_other.SelfOwned) {}

InteractiveLockingLockedException::~InteractiveLockingLockedException() {}

InteractiveLockingLockedException & InteractiveLockingLockedException::operator =(InteractiveLockingLockedException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::ucb::InteractiveLockingException::operator =(the_other);
    SelfOwned = the_other.SelfOwned;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::InteractiveLockingLockedException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::ucb::InteractiveLockingException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_boolean = ::cppu::UnoType< ::sal_Bool >::get();
        aMemberRefs[0] = rMemberType_boolean.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.InteractiveLockingLockedException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::InteractiveLockingLockedException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::InteractiveLockingLockedException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_INTERACTIVELOCKINGLOCKEDEXCEPTION_HPP
