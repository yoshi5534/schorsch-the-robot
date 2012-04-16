#ifndef INCLUDED_COM_SUN_STAR_SYNC_SYNCSCHEME_HPP
#define INCLUDED_COM_SUN_STAR_SYNC_SYNCSCHEME_HPP

#include "sal/config.h"

#include "com/sun/star/sync/SyncScheme.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sync {

inline SyncScheme::SyncScheme() SAL_THROW( () )
    : Scheme()
    , Root()
{
}

inline SyncScheme::SyncScheme(const ::rtl::OUString& Scheme_, const ::rtl::OUString& Root_) SAL_THROW( () )
    : Scheme(Scheme_)
    , Root(Root_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sync {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sync::SyncScheme const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sync.SyncScheme", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sync::SyncScheme const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sync::SyncScheme >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SYNC_SYNCSCHEME_HPP
