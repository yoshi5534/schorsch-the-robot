#ifndef INCLUDED_COM_SUN_STAR_AWT_ITEMLISTEVENT_HPP
#define INCLUDED_COM_SUN_STAR_AWT_ITEMLISTEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/awt/ItemListEvent.hdl"

#include "com/sun/star/beans/Optional.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace awt {

inline ItemListEvent::ItemListEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , ItemPosition(0)
    , ItemText()
    , ItemImageURL()
{
}

inline ItemListEvent::ItemListEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int32& ItemPosition_, const ::com::sun::star::beans::Optional< ::rtl::OUString >& ItemText_, const ::com::sun::star::beans::Optional< ::rtl::OUString >& ItemImageURL_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , ItemPosition(ItemPosition_)
    , ItemText(ItemText_)
    , ItemImageURL(ItemImageURL_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace awt {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::ItemListEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::beans::Optional< ::rtl::OUString > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::beans::Optional< ::rtl::OUString > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.awt.ItemListEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::ItemListEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::ItemListEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_ITEMLISTEVENT_HPP
