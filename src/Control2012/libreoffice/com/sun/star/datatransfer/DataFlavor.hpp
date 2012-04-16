#ifndef INCLUDED_COM_SUN_STAR_DATATRANSFER_DATAFLAVOR_HPP
#define INCLUDED_COM_SUN_STAR_DATATRANSFER_DATAFLAVOR_HPP

#include "sal/config.h"

#include "com/sun/star/datatransfer/DataFlavor.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace datatransfer {

inline DataFlavor::DataFlavor() SAL_THROW( () )
    : MimeType()
    , HumanPresentableName()
    , DataType()
{
}

inline DataFlavor::DataFlavor(const ::rtl::OUString& MimeType_, const ::rtl::OUString& HumanPresentableName_, const ::com::sun::star::uno::Type& DataType_) SAL_THROW( () )
    : MimeType(MimeType_)
    , HumanPresentableName(HumanPresentableName_)
    , DataType(DataType_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace datatransfer {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::datatransfer::DataFlavor const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Type >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.datatransfer.DataFlavor", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::datatransfer::DataFlavor const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::datatransfer::DataFlavor >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DATATRANSFER_DATAFLAVOR_HPP
