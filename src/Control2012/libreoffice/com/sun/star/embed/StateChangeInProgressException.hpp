#ifndef INCLUDED_COM_SUN_STAR_EMBED_STATECHANGEINPROGRESSEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_STATECHANGEINPROGRESSEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/embed/StateChangeInProgressException.hdl"

#include "com/sun/star/embed/WrongStateException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace embed {

inline StateChangeInProgressException::StateChangeInProgressException() SAL_THROW( () )
    : ::com::sun::star::embed::WrongStateException()
    , TargetState(0)
{ }

inline StateChangeInProgressException::StateChangeInProgressException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::sal_Int32& TargetState_) SAL_THROW( () )
    : ::com::sun::star::embed::WrongStateException(Message_, Context_)
    , TargetState(TargetState_)
{ }

StateChangeInProgressException::StateChangeInProgressException(StateChangeInProgressException const & the_other): ::com::sun::star::embed::WrongStateException(the_other), TargetState(the_other.TargetState) {}

StateChangeInProgressException::~StateChangeInProgressException() {}

StateChangeInProgressException & StateChangeInProgressException::operator =(StateChangeInProgressException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::embed::WrongStateException::operator =(the_other);
    TargetState = the_other.TargetState;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace embed {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::embed::StateChangeInProgressException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::embed::WrongStateException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_long = ::cppu::UnoType< ::sal_Int32 >::get();
        aMemberRefs[0] = rMemberType_long.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.embed.StateChangeInProgressException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::embed::StateChangeInProgressException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::embed::StateChangeInProgressException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_EMBED_STATECHANGEINPROGRESSEXCEPTION_HPP
