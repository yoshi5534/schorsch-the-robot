#ifndef INCLUDED_COM_SUN_STAR_SHEET_NAMETOKEN_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_NAMETOKEN_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/NameToken.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline NameToken::NameToken() SAL_THROW( () )
    : Index(0)
    , Global(false)
{
}

inline NameToken::NameToken(const ::sal_Int32& Index_, const ::sal_Bool& Global_) SAL_THROW( () )
    : Index(Index_)
    , Global(Global_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::NameToken const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.NameToken", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::NameToken const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::NameToken >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_NAMETOKEN_HPP
