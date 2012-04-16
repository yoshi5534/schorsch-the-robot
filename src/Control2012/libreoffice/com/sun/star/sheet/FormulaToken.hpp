#ifndef INCLUDED_COM_SUN_STAR_SHEET_FORMULATOKEN_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_FORMULATOKEN_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/FormulaToken.hdl"

#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline FormulaToken::FormulaToken() SAL_THROW( () )
    : OpCode(0)
    , Data()
{
}

inline FormulaToken::FormulaToken(const ::sal_Int32& OpCode_, const ::com::sun::star::uno::Any& Data_) SAL_THROW( () )
    : OpCode(OpCode_)
    , Data(Data_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::FormulaToken const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.FormulaToken", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::FormulaToken const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::FormulaToken >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_FORMULATOKEN_HPP
