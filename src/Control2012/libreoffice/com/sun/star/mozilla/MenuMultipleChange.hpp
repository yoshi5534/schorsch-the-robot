#ifndef INCLUDED_COM_SUN_STAR_MOZILLA_MENUMULTIPLECHANGE_HPP
#define INCLUDED_COM_SUN_STAR_MOZILLA_MENUMULTIPLECHANGE_HPP

#include "sal/config.h"

#include "com/sun/star/mozilla/MenuMultipleChange.hdl"

#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace mozilla {

inline MenuMultipleChange::MenuMultipleChange() SAL_THROW( () )
    : ID(0)
    , GroupID(0)
    , PreItemID(0)
    , ItemText()
    , IsVisible(false)
    , IsActive(false)
    , IsCheckable(false)
    , IsChecked(false)
    , Image()
{
}

inline MenuMultipleChange::MenuMultipleChange(const ::sal_Int16& ID_, const ::sal_Int16& GroupID_, const ::sal_Int16& PreItemID_, const ::rtl::OUString& ItemText_, const ::sal_Bool& IsVisible_, const ::sal_Bool& IsActive_, const ::sal_Bool& IsCheckable_, const ::sal_Bool& IsChecked_, const ::com::sun::star::uno::Sequence< ::sal_Int8 >& Image_) SAL_THROW( () )
    : ID(ID_)
    , GroupID(GroupID_)
    , PreItemID(PreItemID_)
    , ItemText(ItemText_)
    , IsVisible(IsVisible_)
    , IsActive(IsActive_)
    , IsCheckable(IsCheckable_)
    , IsChecked(IsChecked_)
    , Image(Image_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace mozilla {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::mozilla::MenuMultipleChange const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int8 > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.mozilla.MenuMultipleChange", 0, 9, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::mozilla::MenuMultipleChange const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::mozilla::MenuMultipleChange >::get();
}

#endif // INCLUDED_COM_SUN_STAR_MOZILLA_MENUMULTIPLECHANGE_HPP
