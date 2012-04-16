#ifndef INCLUDED_COM_SUN_STAR_UCB_INTERACTIVEAPPEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_INTERACTIVEAPPEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/InteractiveAppException.hdl"

#include "com/sun/star/task/ClassifiedInteractionRequest.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline InteractiveAppException::InteractiveAppException() SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest()
    , Code(0)
{ }

inline InteractiveAppException::InteractiveAppException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::sal_uInt32& Code_) SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest(Message_, Context_, Classification_)
    , Code(Code_)
{ }

InteractiveAppException::InteractiveAppException(InteractiveAppException const & the_other): ::com::sun::star::task::ClassifiedInteractionRequest(the_other), Code(the_other.Code) {}

InteractiveAppException::~InteractiveAppException() {}

InteractiveAppException & InteractiveAppException::operator =(InteractiveAppException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::ClassifiedInteractionRequest::operator =(the_other);
    Code = the_other.Code;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::InteractiveAppException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::ClassifiedInteractionRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_unsigned_long = ::cppu::UnoType< ::sal_uInt32 >::get();
        aMemberRefs[0] = rMemberType_unsigned_long.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.InteractiveAppException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::InteractiveAppException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::InteractiveAppException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_INTERACTIVEAPPEXCEPTION_HPP
