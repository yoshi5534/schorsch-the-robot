#ifndef INCLUDED_COM_SUN_STAR_TABLE_SHADOWFORMAT_HPP
#define INCLUDED_COM_SUN_STAR_TABLE_SHADOWFORMAT_HPP

#include "sal/config.h"

#include "com/sun/star/table/ShadowFormat.hdl"

#include "com/sun/star/table/ShadowLocation.hpp"
#include "com/sun/star/util/Color.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace table {

inline ShadowFormat::ShadowFormat() SAL_THROW( () )
    : Location(::com::sun::star::table::ShadowLocation_NONE)
    , ShadowWidth(0)
    , IsTransparent(false)
    , Color(0)
{
}

inline ShadowFormat::ShadowFormat(const ::com::sun::star::table::ShadowLocation& Location_, const ::sal_Int16& ShadowWidth_, const ::sal_Bool& IsTransparent_, const ::sal_Int32& Color_) SAL_THROW( () )
    : Location(Location_)
    , ShadowWidth(ShadowWidth_)
    , IsTransparent(IsTransparent_)
    , Color(Color_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace table {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::table::ShadowFormat const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::table::ShadowLocation >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.table.ShadowFormat", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::table::ShadowFormat const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::table::ShadowFormat >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TABLE_SHADOWFORMAT_HPP
