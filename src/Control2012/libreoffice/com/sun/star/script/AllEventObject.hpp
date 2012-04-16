#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_ALLEVENTOBJECT_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_ALLEVENTOBJECT_HPP

#include "sal/config.h"

#include "com/sun/star/script/AllEventObject.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace script {

inline AllEventObject::AllEventObject() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Helper()
    , ListenerType()
    , MethodName()
    , Arguments()
{
}

inline AllEventObject::AllEventObject(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::uno::Any& Helper_, const ::com::sun::star::uno::Type& ListenerType_, const ::rtl::OUString& MethodName_, const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any >& Arguments_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Helper(Helper_)
    , ListenerType(ListenerType_)
    , MethodName(MethodName_)
    , Arguments(Arguments_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::AllEventObject const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Type >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::uno::Any > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.script.AllEventObject", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::script::AllEventObject const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::script::AllEventObject >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_ALLEVENTOBJECT_HPP
