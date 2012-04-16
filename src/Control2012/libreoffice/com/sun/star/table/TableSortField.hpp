#ifndef INCLUDED_COM_SUN_STAR_TABLE_TABLESORTFIELD_HPP
#define INCLUDED_COM_SUN_STAR_TABLE_TABLESORTFIELD_HPP

#include "sal/config.h"

#include "com/sun/star/table/TableSortField.hdl"

#include "com/sun/star/lang/Locale.hpp"
#include "com/sun/star/table/TableSortFieldType.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace table {

inline TableSortField::TableSortField() SAL_THROW( () )
    : Field(0)
    , IsAscending(false)
    , IsCaseSensitive(false)
    , FieldType(::com::sun::star::table::TableSortFieldType_AUTOMATIC)
    , CollatorLocale()
    , CollatorAlgorithm()
{
}

inline TableSortField::TableSortField(const ::sal_Int32& Field_, const ::sal_Bool& IsAscending_, const ::sal_Bool& IsCaseSensitive_, const ::com::sun::star::table::TableSortFieldType& FieldType_, const ::com::sun::star::lang::Locale& CollatorLocale_, const ::rtl::OUString& CollatorAlgorithm_) SAL_THROW( () )
    : Field(Field_)
    , IsAscending(IsAscending_)
    , IsCaseSensitive(IsCaseSensitive_)
    , FieldType(FieldType_)
    , CollatorLocale(CollatorLocale_)
    , CollatorAlgorithm(CollatorAlgorithm_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace table {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::table::TableSortField const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::table::TableSortFieldType >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::lang::Locale >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.table.TableSortField", 0, 6, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::table::TableSortField const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::table::TableSortField >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TABLE_TABLESORTFIELD_HPP
