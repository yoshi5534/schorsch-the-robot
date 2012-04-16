#ifndef INCLUDED_COM_SUN_STAR_UCB_EXPORTSTREAMINFO_HPP
#define INCLUDED_COM_SUN_STAR_UCB_EXPORTSTREAMINFO_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/ExportStreamInfo.hdl"

#include "com/sun/star/io/XOutputStream.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline ExportStreamInfo::ExportStreamInfo() SAL_THROW( () )
    : Target()
    , ForceBodies(false)
{
}

inline ExportStreamInfo::ExportStreamInfo(const ::com::sun::star::uno::Reference< ::com::sun::star::io::XOutputStream >& Target_, const ::sal_Bool& ForceBodies_) SAL_THROW( () )
    : Target(Target_)
    , ForceBodies(ForceBodies_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::ExportStreamInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::io::XOutputStream > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.ExportStreamInfo", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::ExportStreamInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::ExportStreamInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_EXPORTSTREAMINFO_HPP
