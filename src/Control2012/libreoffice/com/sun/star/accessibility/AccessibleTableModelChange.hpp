#ifndef INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLETABLEMODELCHANGE_HPP
#define INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLETABLEMODELCHANGE_HPP

#include "sal/config.h"

#include "com/sun/star/accessibility/AccessibleTableModelChange.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace accessibility {

inline AccessibleTableModelChange::AccessibleTableModelChange() SAL_THROW( () )
    : Type(0)
    , FirstRow(0)
    , LastRow(0)
    , FirstColumn(0)
    , LastColumn(0)
{
}

inline AccessibleTableModelChange::AccessibleTableModelChange(const ::sal_Int16& Type_, const ::sal_Int32& FirstRow_, const ::sal_Int32& LastRow_, const ::sal_Int32& FirstColumn_, const ::sal_Int32& LastColumn_) SAL_THROW( () )
    : Type(Type_)
    , FirstRow(FirstRow_)
    , LastRow(LastRow_)
    , FirstColumn(FirstColumn_)
    , LastColumn(LastColumn_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace accessibility {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::accessibility::AccessibleTableModelChange const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.accessibility.AccessibleTableModelChange", 0, 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::accessibility::AccessibleTableModelChange const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::accessibility::AccessibleTableModelChange >::get();
}

#endif // INCLUDED_COM_SUN_STAR_ACCESSIBILITY_ACCESSIBLETABLEMODELCHANGE_HPP
