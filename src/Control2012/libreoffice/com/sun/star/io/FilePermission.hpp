#ifndef INCLUDED_COM_SUN_STAR_IO_FILEPERMISSION_HPP
#define INCLUDED_COM_SUN_STAR_IO_FILEPERMISSION_HPP

#include "sal/config.h"

#include "com/sun/star/io/FilePermission.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace io {

inline FilePermission::FilePermission() SAL_THROW( () )
    : URL()
    , Actions()
{
}

inline FilePermission::FilePermission(const ::rtl::OUString& URL_, const ::rtl::OUString& Actions_) SAL_THROW( () )
    : URL(URL_)
    , Actions(Actions_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace io {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::io::FilePermission const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.io.FilePermission", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::io::FilePermission const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::io::FilePermission >::get();
}

#endif // INCLUDED_COM_SUN_STAR_IO_FILEPERMISSION_HPP
