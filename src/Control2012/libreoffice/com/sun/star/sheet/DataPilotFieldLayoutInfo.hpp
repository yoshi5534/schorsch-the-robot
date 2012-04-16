#ifndef INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDLAYOUTINFO_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDLAYOUTINFO_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/DataPilotFieldLayoutInfo.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline DataPilotFieldLayoutInfo::DataPilotFieldLayoutInfo() SAL_THROW( () )
    : LayoutMode(0)
    , AddEmptyLines(false)
{
}

inline DataPilotFieldLayoutInfo::DataPilotFieldLayoutInfo(const ::sal_Int32& LayoutMode_, const ::sal_Bool& AddEmptyLines_) SAL_THROW( () )
    : LayoutMode(LayoutMode_)
    , AddEmptyLines(AddEmptyLines_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::DataPilotFieldLayoutInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.DataPilotFieldLayoutInfo", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::DataPilotFieldLayoutInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::DataPilotFieldLayoutInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDLAYOUTINFO_HPP
