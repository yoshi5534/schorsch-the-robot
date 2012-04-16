#ifndef INCLUDED_COM_SUN_STAR_UCB_COOKIE_HPP
#define INCLUDED_COM_SUN_STAR_UCB_COOKIE_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/Cookie.hdl"

#include "com/sun/star/ucb/CookiePolicy.hpp"
#include "com/sun/star/util/DateTime.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline Cookie::Cookie() SAL_THROW( () )
    : Name()
    , Value()
    , Domain()
    , Path()
    , Expires()
    , Secure(false)
    , Policy(::com::sun::star::ucb::CookiePolicy_CONFIRM)
{
}

inline Cookie::Cookie(const ::rtl::OUString& Name_, const ::rtl::OUString& Value_, const ::rtl::OUString& Domain_, const ::rtl::OUString& Path_, const ::com::sun::star::util::DateTime& Expires_, const ::sal_Bool& Secure_, const ::com::sun::star::ucb::CookiePolicy& Policy_) SAL_THROW( () )
    : Name(Name_)
    , Value(Value_)
    , Domain(Domain_)
    , Path(Path_)
    , Expires(Expires_)
    , Secure(Secure_)
    , Policy(Policy_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::Cookie const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::util::DateTime >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::ucb::CookiePolicy >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.Cookie", 0, 7, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::Cookie const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::Cookie >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_COOKIE_HPP
