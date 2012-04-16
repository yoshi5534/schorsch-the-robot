#ifndef INCLUDED_COM_SUN_STAR_TABLE_CELLADDRESS_HPP
#define INCLUDED_COM_SUN_STAR_TABLE_CELLADDRESS_HPP

#include "sal/config.h"

#include "com/sun/star/table/CellAddress.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace table {

inline CellAddress::CellAddress() SAL_THROW( () )
    : Sheet(0)
    , Column(0)
    , Row(0)
{
}

inline CellAddress::CellAddress(const ::sal_Int16& Sheet_, const ::sal_Int32& Column_, const ::sal_Int32& Row_) SAL_THROW( () )
    : Sheet(Sheet_)
    , Column(Column_)
    , Row(Row_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace table {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::table::CellAddress const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.table.CellAddress", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::table::CellAddress const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::table::CellAddress >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TABLE_CELLADDRESS_HPP
