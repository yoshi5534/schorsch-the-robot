#ifndef INCLUDED_COM_SUN_STAR_UCB_POSTCOMMANDARGUMENT2_HPP
#define INCLUDED_COM_SUN_STAR_UCB_POSTCOMMANDARGUMENT2_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/PostCommandArgument2.hdl"

#include "com/sun/star/ucb/PostCommandArgument.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline PostCommandArgument2::PostCommandArgument2() SAL_THROW( () )
    : ::com::sun::star::ucb::PostCommandArgument()
    , MediaType()
    , Referer()
{
}

inline PostCommandArgument2::PostCommandArgument2(const ::com::sun::star::uno::Reference< ::com::sun::star::io::XInputStream >& Source_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Sink_, const ::rtl::OUString& MediaType_, const ::rtl::OUString& Referer_) SAL_THROW( () )
    : ::com::sun::star::ucb::PostCommandArgument(Source_, Sink_)
    , MediaType(MediaType_)
    , Referer(Referer_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::PostCommandArgument2 const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.PostCommandArgument2", ::cppu::UnoType< ::com::sun::star::ucb::PostCommandArgument >::get().getTypeLibType(), 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::PostCommandArgument2 const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::PostCommandArgument2 >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_POSTCOMMANDARGUMENT2_HPP
