#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_MODULEINFO_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_MODULEINFO_HPP

#include "sal/config.h"

#include "com/sun/star/script/ModuleInfo.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace script {

inline ModuleInfo::ModuleInfo() SAL_THROW( () )
    : ModuleObject()
    , ModuleType(0)
{
}

inline ModuleInfo::ModuleInfo(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& ModuleObject_, const ::sal_Int32& ModuleType_) SAL_THROW( () )
    : ModuleObject(ModuleObject_)
    , ModuleType(ModuleType_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::ModuleInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.script.ModuleInfo", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::script::ModuleInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::script::ModuleInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_MODULEINFO_HPP
