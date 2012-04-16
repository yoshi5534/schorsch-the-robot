#ifndef INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDREFERENCE_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDREFERENCE_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/DataPilotFieldReference.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline DataPilotFieldReference::DataPilotFieldReference() SAL_THROW( () )
    : ReferenceType(0)
    , ReferenceField()
    , ReferenceItemType(0)
    , ReferenceItemName()
{
}

inline DataPilotFieldReference::DataPilotFieldReference(const ::sal_Int32& ReferenceType_, const ::rtl::OUString& ReferenceField_, const ::sal_Int32& ReferenceItemType_, const ::rtl::OUString& ReferenceItemName_) SAL_THROW( () )
    : ReferenceType(ReferenceType_)
    , ReferenceField(ReferenceField_)
    , ReferenceItemType(ReferenceItemType_)
    , ReferenceItemName(ReferenceItemName_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::DataPilotFieldReference const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.DataPilotFieldReference", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::DataPilotFieldReference const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::DataPilotFieldReference >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_DATAPILOTFIELDREFERENCE_HPP
