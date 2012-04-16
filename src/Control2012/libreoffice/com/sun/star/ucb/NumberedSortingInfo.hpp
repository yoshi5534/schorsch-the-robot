#ifndef INCLUDED_COM_SUN_STAR_UCB_NUMBEREDSORTINGINFO_HPP
#define INCLUDED_COM_SUN_STAR_UCB_NUMBEREDSORTINGINFO_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/NumberedSortingInfo.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline NumberedSortingInfo::NumberedSortingInfo() SAL_THROW( () )
    : ColumnIndex(0)
    , Ascending(false)
{
}

inline NumberedSortingInfo::NumberedSortingInfo(const ::sal_Int32& ColumnIndex_, const ::sal_Bool& Ascending_) SAL_THROW( () )
    : ColumnIndex(ColumnIndex_)
    , Ascending(Ascending_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::NumberedSortingInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.NumberedSortingInfo", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::NumberedSortingInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::NumberedSortingInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_NUMBEREDSORTINGINFO_HPP
