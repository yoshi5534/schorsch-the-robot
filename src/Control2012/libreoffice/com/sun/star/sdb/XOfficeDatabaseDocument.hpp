#ifndef INCLUDED_COM_SUN_STAR_SDB_XOFFICEDATABASEDOCUMENT_HPP
#define INCLUDED_COM_SUN_STAR_SDB_XOFFICEDATABASEDOCUMENT_HPP

#include "sal/config.h"

#include "com/sun/star/sdb/XOfficeDatabaseDocument.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/sdbc/XDataSource.hpp"
#include "com/sun/star/document/XDocumentSubStorageSupplier.hpp"
#include "com/sun/star/sdb/XReportDocumentsSupplier.hpp"
#include "com/sun/star/sdb/XFormDocumentsSupplier.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace sdb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sdb::XOfficeDatabaseDocument const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[3];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::sdb::XFormDocumentsSupplier > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::sdb::XReportDocumentsSupplier > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::document::XDocumentSubStorageSupplier > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.sdb.XOfficeDatabaseDocument", 3, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::sdb::XOfficeDatabaseDocument > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::sdb::XOfficeDatabaseDocument > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::sdb::XOfficeDatabaseDocument::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::sdb::XOfficeDatabaseDocument > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_SDB_XOFFICEDATABASEDOCUMENT_HPP
