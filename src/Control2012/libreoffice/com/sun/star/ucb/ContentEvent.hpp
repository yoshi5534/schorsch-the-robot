#ifndef INCLUDED_COM_SUN_STAR_UCB_CONTENTEVENT_HPP
#define INCLUDED_COM_SUN_STAR_UCB_CONTENTEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/ContentEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/ucb/XContentIdentifier.hpp"
#include "com/sun/star/ucb/XContent.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline ContentEvent::ContentEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Action(0)
    , Content()
    , Id()
{
}

inline ContentEvent::ContentEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int32& Action_, const ::com::sun::star::uno::Reference< ::com::sun::star::ucb::XContent >& Content_, const ::com::sun::star::uno::Reference< ::com::sun::star::ucb::XContentIdentifier >& Id_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Action(Action_)
    , Content(Content_)
    , Id(Id_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::ContentEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::ucb::XContent > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::ucb::XContentIdentifier > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.ContentEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::ContentEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::ContentEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_CONTENTEVENT_HPP
