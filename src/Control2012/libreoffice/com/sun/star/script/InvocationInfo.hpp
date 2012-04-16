#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_INVOCATIONINFO_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_INVOCATIONINFO_HPP

#include "sal/config.h"

#include "com/sun/star/script/InvocationInfo.hdl"

#include "com/sun/star/script/MemberType.hpp"
#include "com/sun/star/reflection/ParamMode.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace script {

inline InvocationInfo::InvocationInfo() SAL_THROW( () )
    : aName()
    , eMemberType(::com::sun::star::script::MemberType_METHOD)
    , PropertyAttribute(0)
    , aType()
    , aParamTypes()
    , aParamModes()
{
}

inline InvocationInfo::InvocationInfo(const ::rtl::OUString& aName_, const ::com::sun::star::script::MemberType& eMemberType_, const ::sal_Int16& PropertyAttribute_, const ::com::sun::star::uno::Type& aType_, const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Type >& aParamTypes_, const ::com::sun::star::uno::Sequence< ::com::sun::star::reflection::ParamMode >& aParamModes_) SAL_THROW( () )
    : aName(aName_)
    , eMemberType(eMemberType_)
    , PropertyAttribute(PropertyAttribute_)
    , aType(aType_)
    , aParamTypes(aParamTypes_)
    , aParamModes(aParamModes_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::InvocationInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::script::MemberType >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Type >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::uno::Type > >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::reflection::ParamMode > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.script.InvocationInfo", 0, 6, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::script::InvocationInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::script::InvocationInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_INVOCATIONINFO_HPP
