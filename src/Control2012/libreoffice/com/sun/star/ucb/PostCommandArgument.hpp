#ifndef INCLUDED_COM_SUN_STAR_UCB_POSTCOMMANDARGUMENT_HPP
#define INCLUDED_COM_SUN_STAR_UCB_POSTCOMMANDARGUMENT_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/PostCommandArgument.hdl"

#include "com/sun/star/io/XInputStream.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline PostCommandArgument::PostCommandArgument() SAL_THROW( () )
    : Source()
    , Sink()
{
}

inline PostCommandArgument::PostCommandArgument(const ::com::sun::star::uno::Reference< ::com::sun::star::io::XInputStream >& Source_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Sink_) SAL_THROW( () )
    : Source(Source_)
    , Sink(Sink_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::PostCommandArgument const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::io::XInputStream > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.PostCommandArgument", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::PostCommandArgument const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::PostCommandArgument >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_POSTCOMMANDARGUMENT_HPP
