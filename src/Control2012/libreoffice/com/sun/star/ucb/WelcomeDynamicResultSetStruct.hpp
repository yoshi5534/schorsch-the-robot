#ifndef INCLUDED_COM_SUN_STAR_UCB_WELCOMEDYNAMICRESULTSETSTRUCT_HPP
#define INCLUDED_COM_SUN_STAR_UCB_WELCOMEDYNAMICRESULTSETSTRUCT_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/WelcomeDynamicResultSetStruct.hdl"

#include "com/sun/star/sdbc/XResultSet.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline WelcomeDynamicResultSetStruct::WelcomeDynamicResultSetStruct() SAL_THROW( () )
    : Old()
    , New()
{
}

inline WelcomeDynamicResultSetStruct::WelcomeDynamicResultSetStruct(const ::com::sun::star::uno::Reference< ::com::sun::star::sdbc::XResultSet >& Old_, const ::com::sun::star::uno::Reference< ::com::sun::star::sdbc::XResultSet >& New_) SAL_THROW( () )
    : Old(Old_)
    , New(New_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::WelcomeDynamicResultSetStruct const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::sdbc::XResultSet > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::sdbc::XResultSet > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.WelcomeDynamicResultSetStruct", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::WelcomeDynamicResultSetStruct const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::WelcomeDynamicResultSetStruct >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_WELCOMEDYNAMICRESULTSETSTRUCT_HPP
