#ifndef INCLUDED_COM_SUN_STAR_RDF_XDOCUMENTMETADATAACCESS_HPP
#define INCLUDED_COM_SUN_STAR_RDF_XDOCUMENTMETADATAACCESS_HPP

#include "sal/config.h"

#include "com/sun/star/rdf/XDocumentMetadataAccess.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/lang/WrappedTargetException.hpp"
#include "com/sun/star/container/NoSuchElementException.hpp"
#include "com/sun/star/embed/XStorage.hpp"
#include "com/sun/star/io/IOException.hpp"
#include "com/sun/star/container/ElementExistException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/io/XInputStream.hpp"
#include "com/sun/star/rdf/XURI.hpp"
#include "com/sun/star/rdf/ParseException.hpp"
#include "com/sun/star/beans/StringPair.hpp"
#include "com/sun/star/datatransfer/UnsupportedFlavorException.hpp"
#include "com/sun/star/beans/PropertyValue.hpp"
#include "com/sun/star/rdf/XMetadatable.hpp"
#include "com/sun/star/task/XInteractionHandler.hpp"
#include "com/sun/star/rdf/XRepositorySupplier.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace rdf {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rdf::XDocumentMetadataAccess const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[2];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XURI > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XRepositorySupplier > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.rdf.XDocumentMetadataAccess", 2, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::rdf::XDocumentMetadataAccess > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XDocumentMetadataAccess > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::rdf::XDocumentMetadataAccess::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XDocumentMetadataAccess > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_RDF_XDOCUMENTMETADATAACCESS_HPP
