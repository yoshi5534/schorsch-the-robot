#ifndef INCLUDED_COM_SUN_STAR_RENDERING_FONTINFO_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_FONTINFO_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/FontInfo.hdl"

#include "com/sun/star/util/TriState.hpp"
#include "com/sun/star/rendering/Panose.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline FontInfo::FontInfo() SAL_THROW( () )
    : FontDescription()
    , FamilyName()
    , StyleName()
    , UnicodeRanges0(0)
    , UnicodeRanges1(0)
    , UnicodeRanges2(0)
    , UnicodeRanges3(0)
    , IsSymbolFont(::com::sun::star::util::TriState_NO)
    , IsVertical(::com::sun::star::util::TriState_NO)
{
}

inline FontInfo::FontInfo(const ::com::sun::star::rendering::Panose& FontDescription_, const ::rtl::OUString& FamilyName_, const ::rtl::OUString& StyleName_, const ::sal_Int32& UnicodeRanges0_, const ::sal_Int32& UnicodeRanges1_, const ::sal_Int32& UnicodeRanges2_, const ::sal_Int32& UnicodeRanges3_, const ::com::sun::star::util::TriState& IsSymbolFont_, const ::com::sun::star::util::TriState& IsVertical_) SAL_THROW( () )
    : FontDescription(FontDescription_)
    , FamilyName(FamilyName_)
    , StyleName(StyleName_)
    , UnicodeRanges0(UnicodeRanges0_)
    , UnicodeRanges1(UnicodeRanges1_)
    , UnicodeRanges2(UnicodeRanges2_)
    , UnicodeRanges3(UnicodeRanges3_)
    , IsSymbolFont(IsSymbolFont_)
    , IsVertical(IsVertical_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::FontInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::rendering::Panose >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::util::TriState >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::util::TriState >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rendering.FontInfo", 0, 9, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::rendering::FontInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::rendering::FontInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_FONTINFO_HPP
