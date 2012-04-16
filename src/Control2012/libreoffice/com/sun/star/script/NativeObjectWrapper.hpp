#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_NATIVEOBJECTWRAPPER_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_NATIVEOBJECTWRAPPER_HPP

#include "sal/config.h"

#include "com/sun/star/script/NativeObjectWrapper.hdl"

#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace script {

inline NativeObjectWrapper::NativeObjectWrapper() SAL_THROW( () )
    : ObjectId()
{
}

inline NativeObjectWrapper::NativeObjectWrapper(const ::com::sun::star::uno::Any& ObjectId_) SAL_THROW( () )
    : ObjectId(ObjectId_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::NativeObjectWrapper const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.script.NativeObjectWrapper", 0, 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::script::NativeObjectWrapper const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::script::NativeObjectWrapper >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_NATIVEOBJECTWRAPPER_HPP
