#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_SCRIPTEVENTDESCRIPTOR_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_SCRIPTEVENTDESCRIPTOR_HPP

#include "sal/config.h"

#include "com/sun/star/script/ScriptEventDescriptor.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace script {

inline ScriptEventDescriptor::ScriptEventDescriptor() SAL_THROW( () )
    : ListenerType()
    , EventMethod()
    , AddListenerParam()
    , ScriptType()
    , ScriptCode()
{
}

inline ScriptEventDescriptor::ScriptEventDescriptor(const ::rtl::OUString& ListenerType_, const ::rtl::OUString& EventMethod_, const ::rtl::OUString& AddListenerParam_, const ::rtl::OUString& ScriptType_, const ::rtl::OUString& ScriptCode_) SAL_THROW( () )
    : ListenerType(ListenerType_)
    , EventMethod(EventMethod_)
    , AddListenerParam(AddListenerParam_)
    , ScriptType(ScriptType_)
    , ScriptCode(ScriptCode_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::ScriptEventDescriptor const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.script.ScriptEventDescriptor", 0, 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::script::ScriptEventDescriptor const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::script::ScriptEventDescriptor >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_SCRIPTEVENTDESCRIPTOR_HPP
