#ifndef INCLUDED_COM_SUN_STAR_UCB_COMMANDFAILEDEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_COMMANDFAILEDEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/CommandFailedException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline CommandFailedException::CommandFailedException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , Reason()
{ }

inline CommandFailedException::CommandFailedException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Any& Reason_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , Reason(Reason_)
{ }

CommandFailedException::CommandFailedException(CommandFailedException const & the_other): ::com::sun::star::uno::Exception(the_other), Reason(the_other.Reason) {}

CommandFailedException::~CommandFailedException() {}

CommandFailedException & CommandFailedException::operator =(CommandFailedException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    Reason = the_other.Reason;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::CommandFailedException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_any = ::cppu::UnoType< ::com::sun::star::uno::Any >::get();
        aMemberRefs[0] = rMemberType_any.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.CommandFailedException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::CommandFailedException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::CommandFailedException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_COMMANDFAILEDEXCEPTION_HPP
