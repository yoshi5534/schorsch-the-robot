#ifndef INCLUDED_COM_SUN_STAR_UCB_SEARCHINFO_HPP
#define INCLUDED_COM_SUN_STAR_UCB_SEARCHINFO_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/SearchInfo.hdl"

#include "com/sun/star/ucb/SearchRecursion.hpp"
#include "com/sun/star/ucb/SearchCriterium.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline SearchInfo::SearchInfo() SAL_THROW( () )
    : Criteria()
    , Recursion(::com::sun::star::ucb::SearchRecursion_NONE)
    , IncludeBase(false)
    , RespectFolderViewRestrictions(false)
    , RespectDocViewRestrictions(false)
    , FollowIndirections(false)
{
}

inline SearchInfo::SearchInfo(const ::com::sun::star::uno::Sequence< ::com::sun::star::ucb::SearchCriterium >& Criteria_, const ::com::sun::star::ucb::SearchRecursion& Recursion_, const ::sal_Bool& IncludeBase_, const ::sal_Bool& RespectFolderViewRestrictions_, const ::sal_Bool& RespectDocViewRestrictions_, const ::sal_Bool& FollowIndirections_) SAL_THROW( () )
    : Criteria(Criteria_)
    , Recursion(Recursion_)
    , IncludeBase(IncludeBase_)
    , RespectFolderViewRestrictions(RespectFolderViewRestrictions_)
    , RespectDocViewRestrictions(RespectDocViewRestrictions_)
    , FollowIndirections(FollowIndirections_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::SearchInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::ucb::SearchCriterium > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::ucb::SearchRecursion >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.SearchInfo", 0, 6, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::SearchInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::SearchInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_SEARCHINFO_HPP
