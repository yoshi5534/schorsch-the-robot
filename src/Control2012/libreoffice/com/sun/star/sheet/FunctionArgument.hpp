#ifndef INCLUDED_COM_SUN_STAR_SHEET_FUNCTIONARGUMENT_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_FUNCTIONARGUMENT_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/FunctionArgument.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline FunctionArgument::FunctionArgument() SAL_THROW( () )
    : Name()
    , Description()
    , IsOptional(false)
{
}

inline FunctionArgument::FunctionArgument(const ::rtl::OUString& Name_, const ::rtl::OUString& Description_, const ::sal_Bool& IsOptional_) SAL_THROW( () )
    : Name(Name_)
    , Description(Description_)
    , IsOptional(IsOptional_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::FunctionArgument const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.FunctionArgument", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::FunctionArgument const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::FunctionArgument >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_FUNCTIONARGUMENT_HPP
