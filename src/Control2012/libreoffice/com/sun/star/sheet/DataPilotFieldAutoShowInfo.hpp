#ifndef INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDAUTOSHOWINFO_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDAUTOSHOWINFO_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/DataPilotFieldAutoShowInfo.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline DataPilotFieldAutoShowInfo::DataPilotFieldAutoShowInfo() SAL_THROW( () )
    : IsEnabled(false)
    , ShowItemsMode(0)
    , ItemCount(0)
    , DataField()
{
}

inline DataPilotFieldAutoShowInfo::DataPilotFieldAutoShowInfo(const ::sal_Bool& IsEnabled_, const ::sal_Int32& ShowItemsMode_, const ::sal_Int32& ItemCount_, const ::rtl::OUString& DataField_) SAL_THROW( () )
    : IsEnabled(IsEnabled_)
    , ShowItemsMode(ShowItemsMode_)
    , ItemCount(ItemCount_)
    , DataField(DataField_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::DataPilotFieldAutoShowInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.DataPilotFieldAutoShowInfo", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::DataPilotFieldAutoShowInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::DataPilotFieldAutoShowInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDAUTOSHOWINFO_HPP
