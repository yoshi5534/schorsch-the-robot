#ifndef INCLUDED_COM_SUN_STAR_RDF_XDOCUMENTREPOSITORY_HPP
#define INCLUDED_COM_SUN_STAR_RDF_XDOCUMENTREPOSITORY_HPP

#include "sal/config.h"

#include "com/sun/star/rdf/XDocumentRepository.hdl"

#include "com/sun/star/container/XEnumeration.hpp"
#include "com/sun/star/rdf/XRepository.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/beans/Pair.hpp"
#include "com/sun/star/rdf/RepositoryException.hpp"
#include "com/sun/star/rdf/XNode.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/rdf/XMetadatable.hpp"
#include "com/sun/star/rdf/XResource.hpp"
#include "com/sun/star/rdf/Statement.hpp"
#include "com/sun/star/rdf/XURI.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace rdf {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rdf::XDocumentRepository const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XRepository > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.rdf.XDocumentRepository", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::rdf::XDocumentRepository > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XDocumentRepository > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::rdf::XDocumentRepository::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XDocumentRepository > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_RDF_XDOCUMENTREPOSITORY_HPP
