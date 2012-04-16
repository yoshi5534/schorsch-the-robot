#ifndef INCLUDED_COM_SUN_STAR_UCB_RULESET_HPP
#define INCLUDED_COM_SUN_STAR_UCB_RULESET_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/RuleSet.hdl"

#include "com/sun/star/ucb/Rule.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline RuleSet::RuleSet() SAL_THROW( () )
    : Rules()
    , HandleFolder(false)
{
}

inline RuleSet::RuleSet(const ::com::sun::star::uno::Sequence< ::com::sun::star::ucb::Rule >& Rules_, const ::sal_Bool& HandleFolder_) SAL_THROW( () )
    : Rules(Rules_)
    , HandleFolder(HandleFolder_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::RuleSet const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::ucb::Rule > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.RuleSet", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::RuleSet const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::RuleSet >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_RULESET_HPP
