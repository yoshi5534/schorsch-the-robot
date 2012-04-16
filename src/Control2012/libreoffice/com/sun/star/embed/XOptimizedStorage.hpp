#ifndef INCLUDED_COM_SUN_STAR_EMBED_XOPTIMIZEDSTORAGE_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_XOPTIMIZEDSTORAGE_HPP

#include "sal/config.h"

#include "com/sun/star/embed/XOptimizedStorage.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/packages/WrongPasswordException.hpp"
#include "com/sun/star/container/NoSuchElementException.hpp"
#include "com/sun/star/embed/StorageWrappedTargetException.hpp"
#include "com/sun/star/io/XInputStream.hpp"
#include "com/sun/star/beans/PropertyVetoException.hpp"
#include "com/sun/star/beans/PropertyValue.hpp"
#include "com/sun/star/io/IOException.hpp"
#include "com/sun/star/container/ElementExistException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/beans/UnknownPropertyException.hpp"
#include "com/sun/star/packages/NoRawFormatException.hpp"
#include "com/sun/star/embed/InvalidStorageException.hpp"
#include "com/sun/star/embed/XOptimizedStorage.hpp"
#include "com/sun/star/io/XStream.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace embed {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::embed::XOptimizedStorage const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.embed.XOptimizedStorage", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::embed::XOptimizedStorage > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::embed::XOptimizedStorage > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::embed::XOptimizedStorage::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::embed::XOptimizedStorage > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_EMBED_XOPTIMIZEDSTORAGE_HPP
