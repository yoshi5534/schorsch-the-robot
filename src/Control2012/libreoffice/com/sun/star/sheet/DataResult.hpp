#ifndef INCLUDED_COM_SUN_STAR_SHEET_DATARESULT_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_DATARESULT_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/DataResult.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline DataResult::DataResult() SAL_THROW( () )
    : Flags(0)
    , Value(0)
{
}

inline DataResult::DataResult(const ::sal_Int32& Flags_, const double& Value_) SAL_THROW( () )
    : Flags(Flags_)
    , Value(Value_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::DataResult const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.DataResult", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::DataResult const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::DataResult >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_DATARESULT_HPP
