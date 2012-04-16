#ifndef INCLUDED_COM_SUN_STAR_SDBC_DRIVERPROPERTYINFO_HPP
#define INCLUDED_COM_SUN_STAR_SDBC_DRIVERPROPERTYINFO_HPP

#include "sal/config.h"

#include "com/sun/star/sdbc/DriverPropertyInfo.hdl"

#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sdbc {

inline DriverPropertyInfo::DriverPropertyInfo() SAL_THROW( () )
    : Name()
    , Description()
    , IsRequired(false)
    , Value()
    , Choices()
{
}

inline DriverPropertyInfo::DriverPropertyInfo(const ::rtl::OUString& Name_, const ::rtl::OUString& Description_, const ::sal_Bool& IsRequired_, const ::rtl::OUString& Value_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& Choices_) SAL_THROW( () )
    : Name(Name_)
    , Description(Description_)
    , IsRequired(IsRequired_)
    , Value(Value_)
    , Choices(Choices_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sdbc {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sdbc::DriverPropertyInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::rtl::OUString > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sdbc.DriverPropertyInfo", 0, 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sdbc::DriverPropertyInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sdbc::DriverPropertyInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SDBC_DRIVERPROPERTYINFO_HPP
