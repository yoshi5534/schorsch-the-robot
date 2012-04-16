#ifndef INCLUDED_COM_SUN_STAR_UCB_INTERACTIVENETWORKGENERALEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_INTERACTIVENETWORKGENERALEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/InteractiveNetworkGeneralException.hdl"

#include "com/sun/star/ucb/InteractiveNetworkException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline InteractiveNetworkGeneralException::InteractiveNetworkGeneralException() SAL_THROW( () )
    : ::com::sun::star::ucb::InteractiveNetworkException()
{ }

inline InteractiveNetworkGeneralException::InteractiveNetworkGeneralException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_) SAL_THROW( () )
    : ::com::sun::star::ucb::InteractiveNetworkException(Message_, Context_, Classification_)
{ }

InteractiveNetworkGeneralException::InteractiveNetworkGeneralException(InteractiveNetworkGeneralException const & the_other): ::com::sun::star::ucb::InteractiveNetworkException(the_other) {}

InteractiveNetworkGeneralException::~InteractiveNetworkGeneralException() {}

InteractiveNetworkGeneralException & InteractiveNetworkGeneralException::operator =(InteractiveNetworkGeneralException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::ucb::InteractiveNetworkException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::InteractiveNetworkGeneralException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::ucb::InteractiveNetworkException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.InteractiveNetworkGeneralException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::InteractiveNetworkGeneralException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::InteractiveNetworkGeneralException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_INTERACTIVENETWORKGENERALEXCEPTION_HPP
