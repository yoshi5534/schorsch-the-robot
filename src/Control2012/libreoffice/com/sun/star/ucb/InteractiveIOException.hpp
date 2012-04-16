#ifndef INCLUDED_COM_SUN_STAR_UCB_INTERACTIVEIOEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_INTERACTIVEIOEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/InteractiveIOException.hdl"

#include "com/sun/star/ucb/IOErrorCode.hpp"
#include "com/sun/star/task/ClassifiedInteractionRequest.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline InteractiveIOException::InteractiveIOException() SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest()
    , Code(::com::sun::star::ucb::IOErrorCode_ABORT)
{ }

inline InteractiveIOException::InteractiveIOException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::com::sun::star::ucb::IOErrorCode& Code_) SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest(Message_, Context_, Classification_)
    , Code(Code_)
{ }

InteractiveIOException::InteractiveIOException(InteractiveIOException const & the_other): ::com::sun::star::task::ClassifiedInteractionRequest(the_other), Code(the_other.Code) {}

InteractiveIOException::~InteractiveIOException() {}

InteractiveIOException & InteractiveIOException::operator =(InteractiveIOException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::ClassifiedInteractionRequest::operator =(the_other);
    Code = the_other.Code;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::InteractiveIOException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::ClassifiedInteractionRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_ucb_IOErrorCode = ::cppu::UnoType< ::com::sun::star::ucb::IOErrorCode >::get();
        aMemberRefs[0] = rMemberType_com_sun_star_ucb_IOErrorCode.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.InteractiveIOException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::InteractiveIOException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::InteractiveIOException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_INTERACTIVEIOEXCEPTION_HPP
