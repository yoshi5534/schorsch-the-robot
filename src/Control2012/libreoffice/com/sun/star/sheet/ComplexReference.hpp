#ifndef INCLUDED_COM_SUN_STAR_SHEET_COMPLEXREFERENCE_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_COMPLEXREFERENCE_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/ComplexReference.hdl"

#include "com/sun/star/sheet/SingleReference.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline ComplexReference::ComplexReference() SAL_THROW( () )
    : Reference1()
    , Reference2()
{
}

inline ComplexReference::ComplexReference(const ::com::sun::star::sheet::SingleReference& Reference1_, const ::com::sun::star::sheet::SingleReference& Reference2_) SAL_THROW( () )
    : Reference1(Reference1_)
    , Reference2(Reference2_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::ComplexReference const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::sheet::SingleReference >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::sheet::SingleReference >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.ComplexReference", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::ComplexReference const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::ComplexReference >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_COMPLEXREFERENCE_HPP
