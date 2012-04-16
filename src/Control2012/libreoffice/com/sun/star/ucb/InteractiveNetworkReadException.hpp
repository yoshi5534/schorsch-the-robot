#ifndef INCLUDED_COM_SUN_STAR_UCB_INTERACTIVENETWORKREADEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_INTERACTIVENETWORKREADEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/InteractiveNetworkReadException.hdl"

#include "com/sun/star/ucb/InteractiveNetworkException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline InteractiveNetworkReadException::InteractiveNetworkReadException() SAL_THROW( () )
    : ::com::sun::star::ucb::InteractiveNetworkException()
    , Diagnostic()
{ }

inline InteractiveNetworkReadException::InteractiveNetworkReadException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::rtl::OUString& Diagnostic_) SAL_THROW( () )
    : ::com::sun::star::ucb::InteractiveNetworkException(Message_, Context_, Classification_)
    , Diagnostic(Diagnostic_)
{ }

InteractiveNetworkReadException::InteractiveNetworkReadException(InteractiveNetworkReadException const & the_other): ::com::sun::star::ucb::InteractiveNetworkException(the_other), Diagnostic(the_other.Diagnostic) {}

InteractiveNetworkReadException::~InteractiveNetworkReadException() {}

InteractiveNetworkReadException & InteractiveNetworkReadException::operator =(InteractiveNetworkReadException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::ucb::InteractiveNetworkException::operator =(the_other);
    Diagnostic = the_other.Diagnostic;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::InteractiveNetworkReadException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::ucb::InteractiveNetworkException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.InteractiveNetworkReadException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::InteractiveNetworkReadException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::InteractiveNetworkReadException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_INTERACTIVENETWORKREADEXCEPTION_HPP
