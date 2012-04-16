#ifndef INCLUDED_COM_SUN_STAR_UCB_SEARCHCOMMANDARGUMENT_HPP
#define INCLUDED_COM_SUN_STAR_UCB_SEARCHCOMMANDARGUMENT_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/SearchCommandArgument.hdl"

#include "com/sun/star/beans/Property.hpp"
#include "com/sun/star/ucb/SearchInfo.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline SearchCommandArgument::SearchCommandArgument() SAL_THROW( () )
    : Info()
    , Properties()
{
}

inline SearchCommandArgument::SearchCommandArgument(const ::com::sun::star::ucb::SearchInfo& Info_, const ::com::sun::star::uno::Sequence< ::com::sun::star::beans::Property >& Properties_) SAL_THROW( () )
    : Info(Info_)
    , Properties(Properties_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::SearchCommandArgument const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::ucb::SearchInfo >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::beans::Property > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.SearchCommandArgument", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::SearchCommandArgument const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::SearchCommandArgument >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_SEARCHCOMMANDARGUMENT_HPP
