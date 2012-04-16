#ifndef INCLUDED_COM_SUN_STAR_EMBED_XEMBEDDEDOBJECT_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_XEMBEDDEDOBJECT_HPP

#include "sal/config.h"

#include "com/sun/star/embed/XEmbeddedObject.hdl"

#include "com/sun/star/embed/XEmbeddedClient.hpp"
#include "com/sun/star/embed/VerbDescriptor.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/embed/NeedsRunningStateException.hpp"
#include "com/sun/star/embed/WrongStateException.hpp"
#include "com/sun/star/embed/UnreachableStateException.hpp"
#include "com/sun/star/util/XCloseable.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/embed/XVisualObject.hpp"
#include "com/sun/star/document/XEventBroadcaster.hpp"
#include "com/sun/star/embed/XStateChangeBroadcaster.hpp"
#include "com/sun/star/embed/XClassifiedObject.hpp"
#include "com/sun/star/embed/XComponentSupplier.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace embed {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::embed::XEmbeddedObject const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[6];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::embed::XVisualObject > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::embed::XClassifiedObject > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::embed::XComponentSupplier > >::get().getTypeLibType();
        aSuperTypes[3] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::embed::XStateChangeBroadcaster > >::get().getTypeLibType();
        aSuperTypes[4] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::document::XEventBroadcaster > >::get().getTypeLibType();
        aSuperTypes[5] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::util::XCloseable > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.embed.XEmbeddedObject", 6, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::embed::XEmbeddedObject > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::embed::XEmbeddedObject > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::embed::XEmbeddedObject::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::embed::XEmbeddedObject > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_EMBED_XEMBEDDEDOBJECT_HPP
