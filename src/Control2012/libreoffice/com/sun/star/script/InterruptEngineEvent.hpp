#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_INTERRUPTENGINEEVENT_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_INTERRUPTENGINEEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/script/InterruptEngineEvent.hdl"

#include "com/sun/star/script/InterruptReason.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace script {

inline InterruptEngineEvent::InterruptEngineEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Name()
    , SourceCode()
    , StartLine(0)
    , StartColumn(0)
    , EndLine(0)
    , EndColumn(0)
    , ErrorMessage()
    , Reason(::com::sun::star::script::InterruptReason_Cancel)
{
}

inline InterruptEngineEvent::InterruptEngineEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::rtl::OUString& Name_, const ::rtl::OUString& SourceCode_, const ::sal_Int32& StartLine_, const ::sal_Int32& StartColumn_, const ::sal_Int32& EndLine_, const ::sal_Int32& EndColumn_, const ::rtl::OUString& ErrorMessage_, const ::com::sun::star::script::InterruptReason& Reason_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Name(Name_)
    , SourceCode(SourceCode_)
    , StartLine(StartLine_)
    , StartColumn(StartColumn_)
    , EndLine(EndLine_)
    , EndColumn(EndColumn_)
    , ErrorMessage(ErrorMessage_)
    , Reason(Reason_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::InterruptEngineEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::script::InterruptReason >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.script.InterruptEngineEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 8, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::script::InterruptEngineEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::script::InterruptEngineEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_INTERRUPTENGINEEVENT_HPP
