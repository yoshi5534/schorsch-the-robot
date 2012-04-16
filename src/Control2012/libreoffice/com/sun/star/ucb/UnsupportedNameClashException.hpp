#ifndef INCLUDED_COM_SUN_STAR_UCB_UNSUPPORTEDNAMECLASHEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_UNSUPPORTEDNAMECLASHEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/UnsupportedNameClashException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline UnsupportedNameClashException::UnsupportedNameClashException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , NameClash(0)
{ }

inline UnsupportedNameClashException::UnsupportedNameClashException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::sal_Int32& NameClash_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , NameClash(NameClash_)
{ }

UnsupportedNameClashException::UnsupportedNameClashException(UnsupportedNameClashException const & the_other): ::com::sun::star::uno::Exception(the_other), NameClash(the_other.NameClash) {}

UnsupportedNameClashException::~UnsupportedNameClashException() {}

UnsupportedNameClashException & UnsupportedNameClashException::operator =(UnsupportedNameClashException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    NameClash = the_other.NameClash;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::UnsupportedNameClashException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_long = ::cppu::UnoType< ::sal_Int32 >::get();
        aMemberRefs[0] = rMemberType_long.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.UnsupportedNameClashException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::UnsupportedNameClashException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::UnsupportedNameClashException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_UNSUPPORTEDNAMECLASHEXCEPTION_HPP
