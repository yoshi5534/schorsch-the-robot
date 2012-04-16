#ifndef INCLUDED_COM_SUN_STAR_DRAWING_HOMOGENMATRIX_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_HOMOGENMATRIX_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/HomogenMatrix.hdl"

#include "com/sun/star/drawing/HomogenMatrixLine.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline HomogenMatrix::HomogenMatrix() SAL_THROW( () )
    : Line1()
    , Line2()
    , Line3()
    , Line4()
{
}

inline HomogenMatrix::HomogenMatrix(const ::com::sun::star::drawing::HomogenMatrixLine& Line1_, const ::com::sun::star::drawing::HomogenMatrixLine& Line2_, const ::com::sun::star::drawing::HomogenMatrixLine& Line3_, const ::com::sun::star::drawing::HomogenMatrixLine& Line4_) SAL_THROW( () )
    : Line1(Line1_)
    , Line2(Line2_)
    , Line3(Line3_)
    , Line4(Line4_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::HomogenMatrix const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::drawing::HomogenMatrixLine >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::drawing::HomogenMatrixLine >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::drawing::HomogenMatrixLine >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::drawing::HomogenMatrixLine >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.HomogenMatrix", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::HomogenMatrix const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::HomogenMatrix >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_HOMOGENMATRIX_HPP
