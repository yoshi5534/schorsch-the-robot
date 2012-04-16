#ifndef INCLUDED_COM_SUN_STAR_SHEET_SOLVERCONSTRAINT_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_SOLVERCONSTRAINT_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/SolverConstraint.hdl"

#include "com/sun/star/sheet/SolverConstraintOperator.hpp"
#include "com/sun/star/table/CellAddress.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline SolverConstraint::SolverConstraint() SAL_THROW( () )
    : Left()
    , Operator(::com::sun::star::sheet::SolverConstraintOperator_LESS_EQUAL)
    , Right()
{
}

inline SolverConstraint::SolverConstraint(const ::com::sun::star::table::CellAddress& Left_, const ::com::sun::star::sheet::SolverConstraintOperator& Operator_, const ::com::sun::star::uno::Any& Right_) SAL_THROW( () )
    : Left(Left_)
    , Operator(Operator_)
    , Right(Right_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::SolverConstraint const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::table::CellAddress >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::sheet::SolverConstraintOperator >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.SolverConstraint", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::SolverConstraint const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::SolverConstraint >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_SOLVERCONSTRAINT_HPP
