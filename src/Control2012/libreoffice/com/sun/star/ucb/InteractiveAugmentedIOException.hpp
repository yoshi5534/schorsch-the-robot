#ifndef INCLUDED_COM_SUN_STAR_UCB_INTERACTIVEAUGMENTEDIOEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_INTERACTIVEAUGMENTEDIOEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/InteractiveAugmentedIOException.hdl"

#include "com/sun/star/ucb/InteractiveIOException.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline InteractiveAugmentedIOException::InteractiveAugmentedIOException() SAL_THROW( () )
    : ::com::sun::star::ucb::InteractiveIOException()
    , Arguments()
{ }

inline InteractiveAugmentedIOException::InteractiveAugmentedIOException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::com::sun::star::ucb::IOErrorCode& Code_, const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any >& Arguments_) SAL_THROW( () )
    : ::com::sun::star::ucb::InteractiveIOException(Message_, Context_, Classification_, Code_)
    , Arguments(Arguments_)
{ }

InteractiveAugmentedIOException::InteractiveAugmentedIOException(InteractiveAugmentedIOException const & the_other): ::com::sun::star::ucb::InteractiveIOException(the_other), Arguments(the_other.Arguments) {}

InteractiveAugmentedIOException::~InteractiveAugmentedIOException() {}

InteractiveAugmentedIOException & InteractiveAugmentedIOException::operator =(InteractiveAugmentedIOException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::ucb::InteractiveIOException::operator =(the_other);
    Arguments = the_other.Arguments;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::InteractiveAugmentedIOException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::ucb::InteractiveIOException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_seq_any = ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::uno::Any > >::get();
        aMemberRefs[0] = rMemberType_seq_any.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.InteractiveAugmentedIOException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::InteractiveAugmentedIOException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::InteractiveAugmentedIOException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_INTERACTIVEAUGMENTEDIOEXCEPTION_HPP
