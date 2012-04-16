#ifndef INCLUDED_COM_SUN_STAR_UCB_INTERACTIVECHAOSEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_INTERACTIVECHAOSEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/InteractiveCHAOSException.hdl"

#include "com/sun/star/task/ClassifiedInteractionRequest.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline InteractiveCHAOSException::InteractiveCHAOSException() SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest()
    , ID(0)
    , Arguments()
{ }

inline InteractiveCHAOSException::InteractiveCHAOSException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::sal_Int32& ID_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& Arguments_) SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest(Message_, Context_, Classification_)
    , ID(ID_)
    , Arguments(Arguments_)
{ }

InteractiveCHAOSException::InteractiveCHAOSException(InteractiveCHAOSException const & the_other): ::com::sun::star::task::ClassifiedInteractionRequest(the_other), ID(the_other.ID), Arguments(the_other.Arguments) {}

InteractiveCHAOSException::~InteractiveCHAOSException() {}

InteractiveCHAOSException & InteractiveCHAOSException::operator =(InteractiveCHAOSException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::ClassifiedInteractionRequest::operator =(the_other);
    ID = the_other.ID;
    Arguments = the_other.Arguments;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::InteractiveCHAOSException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::ClassifiedInteractionRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[2];
        const ::com::sun::star::uno::Type& rMemberType_long = ::cppu::UnoType< ::sal_Int32 >::get();
        aMemberRefs[0] = rMemberType_long.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_seq_string = ::cppu::UnoType< ::cppu::UnoSequenceType< ::rtl::OUString > >::get();
        aMemberRefs[1] = rMemberType_seq_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.InteractiveCHAOSException", rBaseType.getTypeLibType(), 2,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::InteractiveCHAOSException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::InteractiveCHAOSException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_INTERACTIVECHAOSEXCEPTION_HPP
