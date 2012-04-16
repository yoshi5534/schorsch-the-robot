#ifndef INCLUDED_COM_SUN_STAR_REFLECTION_PARAMINFO_HPP
#define INCLUDED_COM_SUN_STAR_REFLECTION_PARAMINFO_HPP

#include "sal/config.h"

#include "com/sun/star/reflection/ParamInfo.hdl"

#include "com/sun/star/reflection/XIdlClass.hpp"
#include "com/sun/star/reflection/ParamMode.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace reflection {

inline ParamInfo::ParamInfo() SAL_THROW( () )
    : aName()
    , aMode(::com::sun::star::reflection::ParamMode_IN)
    , aType()
{
}

inline ParamInfo::ParamInfo(const ::rtl::OUString& aName_, const ::com::sun::star::reflection::ParamMode& aMode_, const ::com::sun::star::uno::Reference< ::com::sun::star::reflection::XIdlClass >& aType_) SAL_THROW( () )
    : aName(aName_)
    , aMode(aMode_)
    , aType(aType_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace reflection {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::reflection::ParamInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::reflection::ParamMode >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::reflection::XIdlClass > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.reflection.ParamInfo", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::reflection::ParamInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::reflection::ParamInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_REFLECTION_PARAMINFO_HPP
