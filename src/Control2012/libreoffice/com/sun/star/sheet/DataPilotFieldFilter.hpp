#ifndef INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDFILTER_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDFILTER_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/DataPilotFieldFilter.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline DataPilotFieldFilter::DataPilotFieldFilter() SAL_THROW( () )
    : FieldName()
    , MatchValue()
{
}

inline DataPilotFieldFilter::DataPilotFieldFilter(const ::rtl::OUString& FieldName_, const ::rtl::OUString& MatchValue_) SAL_THROW( () )
    : FieldName(FieldName_)
    , MatchValue(MatchValue_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::DataPilotFieldFilter const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.DataPilotFieldFilter", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::DataPilotFieldFilter const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::DataPilotFieldFilter >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDFILTER_HPP
