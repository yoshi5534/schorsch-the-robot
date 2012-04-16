#ifndef INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDSORTINFO_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDSORTINFO_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/DataPilotFieldSortInfo.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline DataPilotFieldSortInfo::DataPilotFieldSortInfo() SAL_THROW( () )
    : Field()
    , IsAscending(false)
    , Mode(0)
{
}

inline DataPilotFieldSortInfo::DataPilotFieldSortInfo(const ::rtl::OUString& Field_, const ::sal_Bool& IsAscending_, const ::sal_Int32& Mode_) SAL_THROW( () )
    : Field(Field_)
    , IsAscending(IsAscending_)
    , Mode(Mode_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::DataPilotFieldSortInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.DataPilotFieldSortInfo", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::DataPilotFieldSortInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::DataPilotFieldSortInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDSORTINFO_HPP
