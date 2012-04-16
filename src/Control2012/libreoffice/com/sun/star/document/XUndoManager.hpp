#ifndef INCLUDED_COM_SUN_STAR_DOCUMENT_XUNDOMANAGER_HPP
#define INCLUDED_COM_SUN_STAR_DOCUMENT_XUNDOMANAGER_HPP

#include "sal/config.h"

#include "com/sun/star/document/XUndoManager.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/document/UndoFailedException.hpp"
#include "com/sun/star/document/XUndoAction.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/document/XUndoManagerListener.hpp"
#include "com/sun/star/document/EmptyUndoStackException.hpp"
#include "com/sun/star/container/XChild.hpp"
#include "com/sun/star/util/XLockable.hpp"
#include "com/sun/star/util/InvalidStateException.hpp"
#include "com/sun/star/document/UndoContextNotClosedException.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace document {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::document::XUndoManager const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[2];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::util::XLockable > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::container::XChild > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.document.XUndoManager", 2, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::document::XUndoManager > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::document::XUndoManager > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::document::XUndoManager::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::document::XUndoManager > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_DOCUMENT_XUNDOMANAGER_HPP
