#ifndef INCLUDED_COM_SUN_STAR_EMBED_UNREACHABLESTATEEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_UNREACHABLESTATEEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/embed/UnreachableStateException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace embed {

inline UnreachableStateException::UnreachableStateException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , CurrentState(0)
    , NextState(0)
{ }

inline UnreachableStateException::UnreachableStateException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::sal_Int32& CurrentState_, const ::sal_Int32& NextState_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , CurrentState(CurrentState_)
    , NextState(NextState_)
{ }

UnreachableStateException::UnreachableStateException(UnreachableStateException const & the_other): ::com::sun::star::uno::Exception(the_other), CurrentState(the_other.CurrentState), NextState(the_other.NextState) {}

UnreachableStateException::~UnreachableStateException() {}

UnreachableStateException & UnreachableStateException::operator =(UnreachableStateException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    CurrentState = the_other.CurrentState;
    NextState = the_other.NextState;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace embed {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::embed::UnreachableStateException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[2];
        const ::com::sun::star::uno::Type& rMemberType_long = ::cppu::UnoType< ::sal_Int32 >::get();
        aMemberRefs[0] = rMemberType_long.getTypeLibType();
        aMemberRefs[1] = rMemberType_long.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.embed.UnreachableStateException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 2,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::embed::UnreachableStateException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::embed::UnreachableStateException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_EMBED_UNREACHABLESTATEEXCEPTION_HPP
