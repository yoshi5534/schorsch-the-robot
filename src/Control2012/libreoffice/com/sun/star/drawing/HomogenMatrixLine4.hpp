#ifndef INCLUDED_COM_SUN_STAR_DRAWING_HOMOGENMATRIXLINE4_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_HOMOGENMATRIXLINE4_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/HomogenMatrixLine4.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline HomogenMatrixLine4::HomogenMatrixLine4() SAL_THROW( () )
    : Column1(0)
    , Column2(0)
    , Column3(0)
    , Column4(0)
{
}

inline HomogenMatrixLine4::HomogenMatrixLine4(const double& Column1_, const double& Column2_, const double& Column3_, const double& Column4_) SAL_THROW( () )
    : Column1(Column1_)
    , Column2(Column2_)
    , Column3(Column3_)
    , Column4(Column4_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::HomogenMatrixLine4 const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.HomogenMatrixLine4", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::HomogenMatrixLine4 const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::HomogenMatrixLine4 >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_HOMOGENMATRIXLINE4_HPP
