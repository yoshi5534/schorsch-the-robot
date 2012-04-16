#ifndef INCLUDED_COM_SUN_STAR_UCB_UNSUPPORTEDOPENMODEEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_UNSUPPORTEDOPENMODEEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/UnsupportedOpenModeException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline UnsupportedOpenModeException::UnsupportedOpenModeException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , Mode(0)
{ }

inline UnsupportedOpenModeException::UnsupportedOpenModeException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::sal_Int16& Mode_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , Mode(Mode_)
{ }

UnsupportedOpenModeException::UnsupportedOpenModeException(UnsupportedOpenModeException const & the_other): ::com::sun::star::uno::Exception(the_other), Mode(the_other.Mode) {}

UnsupportedOpenModeException::~UnsupportedOpenModeException() {}

UnsupportedOpenModeException & UnsupportedOpenModeException::operator =(UnsupportedOpenModeException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    Mode = the_other.Mode;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::UnsupportedOpenModeException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_short = ::cppu::UnoType< ::sal_Int16 >::get();
        aMemberRefs[0] = rMemberType_short.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.UnsupportedOpenModeException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::UnsupportedOpenModeException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::UnsupportedOpenModeException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_UNSUPPORTEDOPENMODEEXCEPTION_HPP
