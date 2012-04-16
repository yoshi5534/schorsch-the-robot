#ifndef INCLUDED_COM_SUN_STAR_UCB_INTERACTIVEWRONGMEDIUMEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_INTERACTIVEWRONGMEDIUMEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/InteractiveWrongMediumException.hdl"

#include "com/sun/star/task/ClassifiedInteractionRequest.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline InteractiveWrongMediumException::InteractiveWrongMediumException() SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest()
    , Medium()
{ }

inline InteractiveWrongMediumException::InteractiveWrongMediumException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::com::sun::star::uno::Any& Medium_) SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest(Message_, Context_, Classification_)
    , Medium(Medium_)
{ }

InteractiveWrongMediumException::InteractiveWrongMediumException(InteractiveWrongMediumException const & the_other): ::com::sun::star::task::ClassifiedInteractionRequest(the_other), Medium(the_other.Medium) {}

InteractiveWrongMediumException::~InteractiveWrongMediumException() {}

InteractiveWrongMediumException & InteractiveWrongMediumException::operator =(InteractiveWrongMediumException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::ClassifiedInteractionRequest::operator =(the_other);
    Medium = the_other.Medium;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::InteractiveWrongMediumException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::ClassifiedInteractionRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_any = ::cppu::UnoType< ::com::sun::star::uno::Any >::get();
        aMemberRefs[0] = rMemberType_any.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.InteractiveWrongMediumException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::InteractiveWrongMediumException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::InteractiveWrongMediumException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_INTERACTIVEWRONGMEDIUMEXCEPTION_HPP
