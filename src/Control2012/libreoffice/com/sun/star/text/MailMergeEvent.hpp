#ifndef INCLUDED_COM_SUN_STAR_TEXT_MAILMERGEEVENT_HPP
#define INCLUDED_COM_SUN_STAR_TEXT_MAILMERGEEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/text/MailMergeEvent.hdl"

#include "com/sun/star/frame/XModel.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace text {

inline MailMergeEvent::MailMergeEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Model()
{
}

inline MailMergeEvent::MailMergeEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::uno::Reference< ::com::sun::star::frame::XModel >& Model_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Model(Model_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace text {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::text::MailMergeEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::frame::XModel > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.text.MailMergeEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::text::MailMergeEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::text::MailMergeEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TEXT_MAILMERGEEVENT_HPP
