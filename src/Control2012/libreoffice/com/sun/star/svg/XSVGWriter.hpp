#ifndef INCLUDED_COM_SUN_STAR_SVG_XSVGWRITER_HPP
#define INCLUDED_COM_SUN_STAR_SVG_XSVGWRITER_HPP

#include "sal/config.h"

#include "com/sun/star/svg/XSVGWriter.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/xml/sax/XDocumentHandler.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace svg {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::svg::XSVGWriter const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.svg.XSVGWriter", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::svg::XSVGWriter > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::svg::XSVGWriter > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::svg::XSVGWriter::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::svg::XSVGWriter > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_SVG_XSVGWRITER_HPP
