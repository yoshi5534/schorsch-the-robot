#ifndef INCLUDED_COM_SUN_STAR_SHEET_GOALRESULT_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_GOALRESULT_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/GoalResult.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline GoalResult::GoalResult() SAL_THROW( () )
    : Divergence(0)
    , Result(0)
{
}

inline GoalResult::GoalResult(const double& Divergence_, const double& Result_) SAL_THROW( () )
    : Divergence(Divergence_)
    , Result(Result_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::GoalResult const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.GoalResult", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::GoalResult const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::GoalResult >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_GOALRESULT_HPP
