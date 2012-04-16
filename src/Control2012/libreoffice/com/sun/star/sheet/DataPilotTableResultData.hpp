#ifndef INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTTABLERESULTDATA_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTTABLERESULTDATA_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/DataPilotTableResultData.hdl"

#include "com/sun/star/sheet/DataResult.hpp"
#include "com/sun/star/sheet/DataPilotFieldFilter.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline DataPilotTableResultData::DataPilotTableResultData() SAL_THROW( () )
    : FieldFilters()
    , DataFieldIndex(0)
    , Result()
{
}

inline DataPilotTableResultData::DataPilotTableResultData(const ::com::sun::star::uno::Sequence< ::com::sun::star::sheet::DataPilotFieldFilter >& FieldFilters_, const ::sal_Int32& DataFieldIndex_, const ::com::sun::star::sheet::DataResult& Result_) SAL_THROW( () )
    : FieldFilters(FieldFilters_)
    , DataFieldIndex(DataFieldIndex_)
    , Result(Result_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::DataPilotTableResultData const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::sheet::DataPilotFieldFilter > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::sheet::DataResult >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.DataPilotTableResultData", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::DataPilotTableResultData const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::DataPilotTableResultData >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTTABLERESULTDATA_HPP
