#ifndef INCLUDED_COM_SUN_STAR_CHART2_RELATIVESIZE_HPP
#define INCLUDED_COM_SUN_STAR_CHART2_RELATIVESIZE_HPP

#include "sal/config.h"

#include "com/sun/star/chart2/RelativeSize.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace chart2 {

inline RelativeSize::RelativeSize() SAL_THROW( () )
    : Primary(0)
    , Secondary(0)
{
}

inline RelativeSize::RelativeSize(const double& Primary_, const double& Secondary_) SAL_THROW( () )
    : Primary(Primary_)
    , Secondary(Secondary_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace chart2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart2::RelativeSize const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.chart2.RelativeSize", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::chart2::RelativeSize const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::chart2::RelativeSize >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CHART2_RELATIVESIZE_HPP
