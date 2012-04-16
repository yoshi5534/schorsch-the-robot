#ifndef INCLUDED_COM_SUN_STAR_SHEET_MEMBERRESULT_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_MEMBERRESULT_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/MemberResult.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline MemberResult::MemberResult() SAL_THROW( () )
    : Name()
    , Caption()
    , Flags(0)
{
}

inline MemberResult::MemberResult(const ::rtl::OUString& Name_, const ::rtl::OUString& Caption_, const ::sal_Int32& Flags_) SAL_THROW( () )
    : Name(Name_)
    , Caption(Caption_)
    , Flags(Flags_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::MemberResult const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.MemberResult", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::MemberResult const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::MemberResult >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_MEMBERRESULT_HPP
