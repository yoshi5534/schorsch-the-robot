#ifndef INCLUDED_COM_SUN_STAR_EMBED_XEMBEDPERSIST_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_XEMBEDPERSIST_HPP

#include "sal/config.h"

#include "com/sun/star/embed/XEmbedPersist.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/beans/PropertyValue.hpp"
#include "com/sun/star/embed/WrongStateException.hpp"
#include "com/sun/star/io/IOException.hpp"
#include "com/sun/star/embed/XStorage.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/embed/XCommonEmbedPersist.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace embed {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::embed::XEmbedPersist const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::embed::XCommonEmbedPersist > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.embed.XEmbedPersist", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::embed::XEmbedPersist > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::embed::XEmbedPersist > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::embed::XEmbedPersist::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::embed::XEmbedPersist > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_EMBED_XEMBEDPERSIST_HPP
