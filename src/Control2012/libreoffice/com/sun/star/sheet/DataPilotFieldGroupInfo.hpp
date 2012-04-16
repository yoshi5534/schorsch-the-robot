#ifndef INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDGROUPINFO_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDGROUPINFO_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/DataPilotFieldGroupInfo.hdl"

#include "com/sun/star/container/XNameAccess.hpp"
#include "com/sun/star/sheet/XDataPilotField.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline DataPilotFieldGroupInfo::DataPilotFieldGroupInfo() SAL_THROW( () )
    : HasAutoStart(false)
    , HasAutoEnd(false)
    , HasDateValues(false)
    , Start(0)
    , End(0)
    , Step(0)
    , GroupBy(0)
    , SourceField()
    , Groups()
{
}

inline DataPilotFieldGroupInfo::DataPilotFieldGroupInfo(const ::sal_Bool& HasAutoStart_, const ::sal_Bool& HasAutoEnd_, const ::sal_Bool& HasDateValues_, const double& Start_, const double& End_, const double& Step_, const ::sal_Int32& GroupBy_, const ::com::sun::star::uno::Reference< ::com::sun::star::sheet::XDataPilotField >& SourceField_, const ::com::sun::star::uno::Reference< ::com::sun::star::container::XNameAccess >& Groups_) SAL_THROW( () )
    : HasAutoStart(HasAutoStart_)
    , HasAutoEnd(HasAutoEnd_)
    , HasDateValues(HasDateValues_)
    , Start(Start_)
    , End(End_)
    , Step(Step_)
    , GroupBy(GroupBy_)
    , SourceField(SourceField_)
    , Groups(Groups_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::DataPilotFieldGroupInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::sheet::XDataPilotField > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::container::XNameAccess > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.DataPilotFieldGroupInfo", 0, 9, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::DataPilotFieldGroupInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::DataPilotFieldGroupInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDGROUPINFO_HPP
