#ifndef INCLUDED_COM_SUN_STAR_SCANNER_SCANNEREXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_SCANNER_SCANNEREXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/scanner/ScannerException.hdl"

#include "com/sun/star/scanner/ScanError.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace scanner {

inline ScannerException::ScannerException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , Error(::com::sun::star::scanner::ScanError_ScanErrorNone)
{ }

inline ScannerException::ScannerException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::scanner::ScanError& Error_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , Error(Error_)
{ }

ScannerException::ScannerException(ScannerException const & the_other): ::com::sun::star::uno::Exception(the_other), Error(the_other.Error) {}

ScannerException::~ScannerException() {}

ScannerException & ScannerException::operator =(ScannerException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    Error = the_other.Error;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace scanner {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::scanner::ScannerException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_scanner_ScanError = ::cppu::UnoType< ::com::sun::star::scanner::ScanError >::get();
        aMemberRefs[0] = rMemberType_com_sun_star_scanner_ScanError.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.scanner.ScannerException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::scanner::ScannerException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::scanner::ScannerException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCANNER_SCANNEREXCEPTION_HPP
