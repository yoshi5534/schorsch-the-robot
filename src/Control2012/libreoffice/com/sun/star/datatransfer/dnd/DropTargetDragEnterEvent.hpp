#ifndef INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_DROPTARGETDRAGENTEREVENT_HPP
#define INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_DROPTARGETDRAGENTEREVENT_HPP

#include "sal/config.h"

#include "com/sun/star/datatransfer/dnd/DropTargetDragEnterEvent.hdl"

#include "com/sun/star/datatransfer/DataFlavor.hpp"
#include "com/sun/star/datatransfer/dnd/DropTargetDragEvent.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace datatransfer { namespace dnd {

inline DropTargetDragEnterEvent::DropTargetDragEnterEvent() SAL_THROW( () )
    : ::com::sun::star::datatransfer::dnd::DropTargetDragEvent()
    , SupportedDataFlavors()
{
}

inline DropTargetDragEnterEvent::DropTargetDragEnterEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int8& Dummy_, const ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::dnd::XDropTargetDragContext >& Context_, const ::sal_Int8& DropAction_, const ::sal_Int32& LocationX_, const ::sal_Int32& LocationY_, const ::sal_Int8& SourceActions_, const ::com::sun::star::uno::Sequence< ::com::sun::star::datatransfer::DataFlavor >& SupportedDataFlavors_) SAL_THROW( () )
    : ::com::sun::star::datatransfer::dnd::DropTargetDragEvent(Source_, Dummy_, Context_, DropAction_, LocationX_, LocationY_, SourceActions_)
    , SupportedDataFlavors(SupportedDataFlavors_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace datatransfer { namespace dnd {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::datatransfer::dnd::DropTargetDragEnterEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::datatransfer::DataFlavor > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.datatransfer.dnd.DropTargetDragEnterEvent", ::cppu::UnoType< ::com::sun::star::datatransfer::dnd::DropTargetDragEvent >::get().getTypeLibType(), 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::datatransfer::dnd::DropTargetDragEnterEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::datatransfer::dnd::DropTargetDragEnterEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_DROPTARGETDRAGENTEREVENT_HPP
