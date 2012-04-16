#ifndef INCLUDED_COM_SUN_STAR_UTIL_SORTFIELD_HPP
#define INCLUDED_COM_SUN_STAR_UTIL_SORTFIELD_HPP

#include "sal/config.h"

#include "com/sun/star/util/SortField.hdl"

#include "com/sun/star/util/SortFieldType.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace util {

inline SortField::SortField() SAL_THROW( () )
    : Field(0)
    , SortAscending(false)
    , FieldType(::com::sun::star::util::SortFieldType_AUTOMATIC)
{
}

inline SortField::SortField(const ::sal_Int32& Field_, const ::sal_Bool& SortAscending_, const ::com::sun::star::util::SortFieldType& FieldType_) SAL_THROW( () )
    : Field(Field_)
    , SortAscending(SortAscending_)
    , FieldType(FieldType_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace util {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::util::SortField const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::util::SortFieldType >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.util.SortField", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::util::SortField const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::util::SortField >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UTIL_SORTFIELD_HPP
