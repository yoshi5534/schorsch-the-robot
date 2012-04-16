#ifndef INCLUDED_COM_SUN_STAR_SYNC_SYNCINFO_HPP
#define INCLUDED_COM_SUN_STAR_SYNC_SYNCINFO_HPP

#include "sal/config.h"

#include "com/sun/star/sync/SyncInfo.hdl"

#include "com/sun/star/sync/FilterData.hpp"
#include "com/sun/star/sync/SyncScheme.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sync {

inline SyncInfo::SyncInfo() SAL_THROW( () )
    : ServerScheme()
    , ClientScheme()
    , SyncFilter()
    , SyncMode(0)
    , SyncOptions(0)
{
}

inline SyncInfo::SyncInfo(const ::com::sun::star::sync::SyncScheme& ServerScheme_, const ::com::sun::star::sync::SyncScheme& ClientScheme_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& SyncFilter_, const ::sal_uInt32& SyncMode_, const ::sal_uInt32& SyncOptions_) SAL_THROW( () )
    : ServerScheme(ServerScheme_)
    , ClientScheme(ClientScheme_)
    , SyncFilter(SyncFilter_)
    , SyncMode(SyncMode_)
    , SyncOptions(SyncOptions_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sync {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sync::SyncInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::sync::SyncScheme >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::sync::SyncScheme >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::rtl::OUString > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sync.SyncInfo", 0, 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sync::SyncInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sync::SyncInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SYNC_SYNCINFO_HPP
