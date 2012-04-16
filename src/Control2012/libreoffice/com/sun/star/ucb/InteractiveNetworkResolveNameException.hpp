#ifndef INCLUDED_COM_SUN_STAR_UCB_INTERACTIVENETWORKRESOLVENAMEEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_INTERACTIVENETWORKRESOLVENAMEEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/InteractiveNetworkResolveNameException.hdl"

#include "com/sun/star/ucb/InteractiveNetworkException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline InteractiveNetworkResolveNameException::InteractiveNetworkResolveNameException() SAL_THROW( () )
    : ::com::sun::star::ucb::InteractiveNetworkException()
    , Server()
{ }

inline InteractiveNetworkResolveNameException::InteractiveNetworkResolveNameException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::rtl::OUString& Server_) SAL_THROW( () )
    : ::com::sun::star::ucb::InteractiveNetworkException(Message_, Context_, Classification_)
    , Server(Server_)
{ }

InteractiveNetworkResolveNameException::InteractiveNetworkResolveNameException(InteractiveNetworkResolveNameException const & the_other): ::com::sun::star::ucb::InteractiveNetworkException(the_other), Server(the_other.Server) {}

InteractiveNetworkResolveNameException::~InteractiveNetworkResolveNameException() {}

InteractiveNetworkResolveNameException & InteractiveNetworkResolveNameException::operator =(InteractiveNetworkResolveNameException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::ucb::InteractiveNetworkException::operator =(the_other);
    Server = the_other.Server;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::InteractiveNetworkResolveNameException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::ucb::InteractiveNetworkException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.InteractiveNetworkResolveNameException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::InteractiveNetworkResolveNameException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::InteractiveNetworkResolveNameException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_INTERACTIVENETWORKRESOLVENAMEEXCEPTION_HPP
