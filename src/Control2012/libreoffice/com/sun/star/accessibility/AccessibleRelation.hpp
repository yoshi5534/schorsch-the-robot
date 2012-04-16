#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLERELATION_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLERELATION_HPP

#include "sal/config.h"

#include "com/sun/star/accessibility/AccessibleRelation.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace accessibility {

inline AccessibleRelation::AccessibleRelation() SAL_THROW( () )
    : RelationType(0)
    , TargetSet()
{
}

inline AccessibleRelation::AccessibleRelation(const ::sal_Int16& RelationType_, const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >& TargetSet_) SAL_THROW( () )
    : RelationType(RelationType_)
    , TargetSet(TargetSet_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace accessibility {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::accessibility::AccessibleRelation const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.accessibility.AccessibleRelation", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::accessibility::AccessibleRelation const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::accessibility::AccessibleRelation >::get();
}

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLERELATION_HPP
