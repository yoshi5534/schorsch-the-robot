#ifndef INCLUDED_COM_SUN_STAR_RENDERING_STRINGCONTEXT_HPP
#define INCLUDED_COM_SUN_STAR_RENDERING_STRINGCONTEXT_HPP

#include "sal/config.h"

#include "com/sun/star/rendering/StringContext.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rendering {

inline StringContext::StringContext() SAL_THROW( () )
    : Text()
    , StartPosition(0)
    , Length(0)
{
}

inline StringContext::StringContext(const ::rtl::OUString& Text_, const ::sal_Int32& StartPosition_, const ::sal_Int32& Length_) SAL_THROW( () )
    : Text(Text_)
    , StartPosition(StartPosition_)
    , Length(Length_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace rendering {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rendering::StringContext const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rendering.StringContext", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::rendering::StringContext const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::rendering::StringContext >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RENDERING_STRINGCONTEXT_HPP
