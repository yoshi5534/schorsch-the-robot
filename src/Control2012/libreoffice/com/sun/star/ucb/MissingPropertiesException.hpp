#ifndef INCLUDED_COM_SUN_STAR_UCB_MISSINGPROPERTIESEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_UCB_MISSINGPROPERTIESEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/MissingPropertiesException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline MissingPropertiesException::MissingPropertiesException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , Properties()
{ }

inline MissingPropertiesException::MissingPropertiesException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& Properties_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , Properties(Properties_)
{ }

MissingPropertiesException::MissingPropertiesException(MissingPropertiesException const & the_other): ::com::sun::star::uno::Exception(the_other), Properties(the_other.Properties) {}

MissingPropertiesException::~MissingPropertiesException() {}

MissingPropertiesException & MissingPropertiesException::operator =(MissingPropertiesException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    Properties = the_other.Properties;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::MissingPropertiesException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_seq_string = ::cppu::UnoType< ::cppu::UnoSequenceType< ::rtl::OUString > >::get();
        aMemberRefs[0] = rMemberType_seq_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.MissingPropertiesException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::MissingPropertiesException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::MissingPropertiesException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_MISSINGPROPERTIESEXCEPTION_HPP
