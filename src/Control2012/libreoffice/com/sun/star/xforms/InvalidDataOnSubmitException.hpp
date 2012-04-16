#ifndef INCLUDED_COM_SUN_STAR_XFORMS_INVALIDDATAONSUBMITEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_XFORMS_INVALIDDATAONSUBMITEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/xforms/InvalidDataOnSubmitException.hdl"

#include "com/sun/star/util/VetoException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace xforms {

inline InvalidDataOnSubmitException::InvalidDataOnSubmitException() SAL_THROW( () )
    : ::com::sun::star::util::VetoException()
{ }

inline InvalidDataOnSubmitException::InvalidDataOnSubmitException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::util::VetoException(Message_, Context_)
{ }

InvalidDataOnSubmitException::InvalidDataOnSubmitException(InvalidDataOnSubmitException const & the_other): ::com::sun::star::util::VetoException(the_other) {}

InvalidDataOnSubmitException::~InvalidDataOnSubmitException() {}

InvalidDataOnSubmitException & InvalidDataOnSubmitException::operator =(InvalidDataOnSubmitException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::util::VetoException::operator =(the_other);
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace xforms {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xforms::InvalidDataOnSubmitException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::util::VetoException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.xforms.InvalidDataOnSubmitException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::xforms::InvalidDataOnSubmitException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::xforms::InvalidDataOnSubmitException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_XFORMS_INVALIDDATAONSUBMITEXCEPTION_HPP
