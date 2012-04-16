#ifndef INCLUDED_COM_SUN_STAR_FRAME_STATUS_TEMPLATE_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_STATUS_TEMPLATE_HPP

#include "sal/config.h"

#include "com/sun/star/frame/status/Template.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace frame { namespace status {

inline Template::Template() SAL_THROW( () )
    : StyleName()
    , Value(0)
{
}

inline Template::Template(const ::rtl::OUString& StyleName_, const ::sal_Int32& Value_) SAL_THROW( () )
    : StyleName(StyleName_)
    , Value(Value_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace frame { namespace status {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::status::Template const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.frame.status.Template", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::frame::status::Template const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::frame::status::Template >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_STATUS_TEMPLATE_HPP
