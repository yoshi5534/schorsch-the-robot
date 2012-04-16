#ifndef INCLUDED_COM_SUN_STAR_UCB_INTERACTIVELOCKINGEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_INTERACTIVELOCKINGEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/InteractiveLockingException.hdl"

#include "com/sun/star/task/ClassifiedInteractionRequest.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline InteractiveLockingException::InteractiveLockingException() SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest()
    , Url()
{ }

inline InteractiveLockingException::InteractiveLockingException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::rtl::OUString& Url_) SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest(Message_, Context_, Classification_)
    , Url(Url_)
{ }

InteractiveLockingException::InteractiveLockingException(InteractiveLockingException const & the_other): ::com::sun::star::task::ClassifiedInteractionRequest(the_other), Url(the_other.Url) {}

InteractiveLockingException::~InteractiveLockingException() {}

InteractiveLockingException & InteractiveLockingException::operator =(InteractiveLockingException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::ClassifiedInteractionRequest::operator =(the_other);
    Url = the_other.Url;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::InteractiveLockingException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::ClassifiedInteractionRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.InteractiveLockingException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::InteractiveLockingException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::InteractiveLockingException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_INTERACTIVELOCKINGEXCEPTION_HPP
