#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_FINISHENGINEEVENT_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_FINISHENGINEEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/script/FinishEngineEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/script/FinishReason.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace script {

inline FinishEngineEvent::FinishEngineEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Finish(::com::sun::star::script::FinishReason_OK)
    , ErrorMessage()
    , Return()
{
}

inline FinishEngineEvent::FinishEngineEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::script::FinishReason& Finish_, const ::rtl::OUString& ErrorMessage_, const ::com::sun::star::uno::Any& Return_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Finish(Finish_)
    , ErrorMessage(ErrorMessage_)
    , Return(Return_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::FinishEngineEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::script::FinishReason >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.script.FinishEngineEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::script::FinishEngineEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::script::FinishEngineEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_FINISHENGINEEVENT_HPP
