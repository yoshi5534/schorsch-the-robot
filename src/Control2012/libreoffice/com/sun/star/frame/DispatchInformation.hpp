#ifndef INCLUDED_COM_SUN_STAR_FRAME_DISPATCHINFORMATION_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_DISPATCHINFORMATION_HPP

#include "sal/config.h"

#include "com/sun/star/frame/DispatchInformation.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace frame {

inline DispatchInformation::DispatchInformation() SAL_THROW( () )
    : Command()
    , GroupId(0)
{
}

inline DispatchInformation::DispatchInformation(const ::rtl::OUString& Command_, const ::sal_Int16& GroupId_) SAL_THROW( () )
    : Command(Command_)
    , GroupId(GroupId_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace frame {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::DispatchInformation const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.frame.DispatchInformation", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::frame::DispatchInformation const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::frame::DispatchInformation >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_DISPATCHINFORMATION_HPP
