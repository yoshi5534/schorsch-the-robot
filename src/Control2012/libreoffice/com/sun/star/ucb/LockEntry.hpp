#ifndef INCLUDED_COM_SUN_STAR_UCB_LOCKENTRY_HPP
#define INCLUDED_COM_SUN_STAR_UCB_LOCKENTRY_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/LockEntry.hdl"

#include "com/sun/star/ucb/LockScope.hpp"
#include "com/sun/star/ucb/LockType.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline LockEntry::LockEntry() SAL_THROW( () )
    : Scope(::com::sun::star::ucb::LockScope_EXCLUSIVE)
    , Type(::com::sun::star::ucb::LockType_WRITE)
{
}

inline LockEntry::LockEntry(const ::com::sun::star::ucb::LockScope& Scope_, const ::com::sun::star::ucb::LockType& Type_) SAL_THROW( () )
    : Scope(Scope_)
    , Type(Type_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::LockEntry const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::ucb::LockScope >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::ucb::LockType >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.LockEntry", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::LockEntry const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::LockEntry >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_LOCKENTRY_HPP
