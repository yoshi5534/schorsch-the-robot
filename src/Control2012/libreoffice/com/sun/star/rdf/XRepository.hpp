#ifndef INCLUDED_COM_SUN_STAR_RDF_XREPOSITORY_HPP
#define INCLUDED_COM_SUN_STAR_RDF_XREPOSITORY_HPP

#include "sal/config.h"

#include "com/sun/star/rdf/XRepository.hdl"

#include "com/sun/star/rdf/QueryException.hpp"
#include "com/sun/star/rdf/XQuerySelectResult.hpp"
#include "com/sun/star/rdf/XNode.hpp"
#include "com/sun/star/rdf/XResource.hpp"
#include "com/sun/star/io/XInputStream.hpp"
#include "com/sun/star/container/XEnumeration.hpp"
#include "com/sun/star/container/NoSuchElementException.hpp"
#include "com/sun/star/datatransfer/UnsupportedFlavorException.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/rdf/RepositoryException.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/rdf/XNamedGraph.hpp"
#include "com/sun/star/io/IOException.hpp"
#include "com/sun/star/rdf/XURI.hpp"
#include "com/sun/star/rdf/ParseException.hpp"
#include "com/sun/star/io/XOutputStream.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/container/ElementExistException.hpp"
#include "com/sun/star/rdf/XBlankNode.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace rdf {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rdf::XRepository const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.rdf.XRepository", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::rdf::XRepository > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XRepository > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::rdf::XRepository::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XRepository > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_RDF_XREPOSITORY_HPP
