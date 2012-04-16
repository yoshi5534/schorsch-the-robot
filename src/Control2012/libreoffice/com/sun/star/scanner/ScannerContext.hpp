#ifndef INCLUDED_COM_SUN_STAR_SCANNER_SCANNERCONTEXT_HPP
#define INCLUDED_COM_SUN_STAR_SCANNER_SCANNERCONTEXT_HPP

#include "sal/config.h"

#include "com/sun/star/scanner/ScannerContext.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace scanner {

inline ScannerContext::ScannerContext() SAL_THROW( () )
    : ScannerName()
    , InternalData(0)
{
}

inline ScannerContext::ScannerContext(const ::rtl::OUString& ScannerName_, const ::sal_Int32& InternalData_) SAL_THROW( () )
    : ScannerName(ScannerName_)
    , InternalData(InternalData_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace scanner {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::scanner::ScannerContext const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.scanner.ScannerContext", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::scanner::ScannerContext const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::scanner::ScannerContext >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCANNER_SCANNERCONTEXT_HPP
