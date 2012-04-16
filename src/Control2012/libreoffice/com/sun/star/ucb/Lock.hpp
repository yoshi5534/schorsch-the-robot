#ifndef INCLUDED_COM_SUN_STAR_UCB_LOCK_HPP
#define INCLUDED_COM_SUN_STAR_UCB_LOCK_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/Lock.hdl"

#include "com/sun/star/ucb/LockDepth.hpp"
#include "com/sun/star/ucb/LockEntry.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline Lock::Lock() SAL_THROW( () )
    : ::com::sun::star::ucb::LockEntry()
    , Depth(::com::sun::star::ucb::LockDepth_ZERO)
    , Owner()
    , Timeout(0)
    , LockTokens()
{
}

inline Lock::Lock(const ::com::sun::star::ucb::LockScope& Scope_, const ::com::sun::star::ucb::LockType& Type_, const ::com::sun::star::ucb::LockDepth& Depth_, const ::com::sun::star::uno::Any& Owner_, const ::sal_Int64& Timeout_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& LockTokens_) SAL_THROW( () )
    : ::com::sun::star::ucb::LockEntry(Scope_, Type_)
    , Depth(Depth_)
    , Owner(Owner_)
    , Timeout(Timeout_)
    , LockTokens(LockTokens_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::Lock const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::ucb::LockDepth >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int64 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::rtl::OUString > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.Lock", ::cppu::UnoType< ::com::sun::star::ucb::LockEntry >::get().getTypeLibType(), 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::Lock const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::Lock >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_LOCK_HPP
