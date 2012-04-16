#ifndef INCLUDED_COM_SUN_STAR_SHEET_TABLEFILTERFIELD_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_TABLEFILTERFIELD_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/TableFilterField.hdl"

#include "com/sun/star/sheet/FilterOperator.hpp"
#include "com/sun/star/sheet/FilterConnection.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline TableFilterField::TableFilterField() SAL_THROW( () )
    : Connection(::com::sun::star::sheet::FilterConnection_AND)
    , Field(0)
    , Operator(::com::sun::star::sheet::FilterOperator_EMPTY)
    , IsNumeric(false)
    , NumericValue(0)
    , StringValue()
{
}

inline TableFilterField::TableFilterField(const ::com::sun::star::sheet::FilterConnection& Connection_, const ::sal_Int32& Field_, const ::com::sun::star::sheet::FilterOperator& Operator_, const ::sal_Bool& IsNumeric_, const double& NumericValue_, const ::rtl::OUString& StringValue_) SAL_THROW( () )
    : Connection(Connection_)
    , Field(Field_)
    , Operator(Operator_)
    , IsNumeric(IsNumeric_)
    , NumericValue(NumericValue_)
    , StringValue(StringValue_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::TableFilterField const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::sheet::FilterConnection >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::sheet::FilterOperator >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.TableFilterField", 0, 6, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::TableFilterField const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::TableFilterField >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_TABLEFILTERFIELD_HPP
