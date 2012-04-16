#ifndef INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTTABLEHEADERDATA_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTTABLEHEADERDATA_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/DataPilotTableHeaderData.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline DataPilotTableHeaderData::DataPilotTableHeaderData() SAL_THROW( () )
    : Dimension(0)
    , Hierarchy(0)
    , Level(0)
    , Flags(0)
    , MemberName()
{
}

inline DataPilotTableHeaderData::DataPilotTableHeaderData(const ::sal_Int32& Dimension_, const ::sal_Int32& Hierarchy_, const ::sal_Int32& Level_, const ::sal_Int32& Flags_, const ::rtl::OUString& MemberName_) SAL_THROW( () )
    : Dimension(Dimension_)
    , Hierarchy(Hierarchy_)
    , Level(Level_)
    , Flags(Flags_)
    , MemberName(MemberName_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::DataPilotTableHeaderData const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.DataPilotTableHeaderData", 0, 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::DataPilotTableHeaderData const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::DataPilotTableHeaderData >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTTABLEHEADERDATA_HPP
