#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_SCRIPTEVENT_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_SCRIPTEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/script/ScriptEvent.hdl"

#include "com/sun/star/script/AllEventObject.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace script {

inline ScriptEvent::ScriptEvent() SAL_THROW( () )
    : ::com::sun::star::script::AllEventObject()
    , ScriptType()
    , ScriptCode()
{
}

inline ScriptEvent::ScriptEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::uno::Any& Helper_, const ::com::sun::star::uno::Type& ListenerType_, const ::rtl::OUString& MethodName_, const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any >& Arguments_, const ::rtl::OUString& ScriptType_, const ::rtl::OUString& ScriptCode_) SAL_THROW( () )
    : ::com::sun::star::script::AllEventObject(Source_, Helper_, ListenerType_, MethodName_, Arguments_)
    , ScriptType(ScriptType_)
    , ScriptCode(ScriptCode_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::ScriptEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.script.ScriptEvent", ::cppu::UnoType< ::com::sun::star::script::AllEventObject >::get().getTypeLibType(), 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::script::ScriptEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::script::ScriptEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_SCRIPTEVENT_HPP
