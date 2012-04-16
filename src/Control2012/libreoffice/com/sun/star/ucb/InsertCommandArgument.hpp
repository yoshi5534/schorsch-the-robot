#ifndef INCLUDED_COM_SUN_STAR_UCB_INSERTCOMMANDARGUMENT_HPP
#define INCLUDED_COM_SUN_STAR_UCB_INSERTCOMMANDARGUMENT_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/InsertCommandArgument.hdl"

#include "com/sun/star/io/XInputStream.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline InsertCommandArgument::InsertCommandArgument() SAL_THROW( () )
    : Data()
    , ReplaceExisting(false)
{
}

inline InsertCommandArgument::InsertCommandArgument(const ::com::sun::star::uno::Reference< ::com::sun::star::io::XInputStream >& Data_, const ::sal_Bool& ReplaceExisting_) SAL_THROW( () )
    : Data(Data_)
    , ReplaceExisting(ReplaceExisting_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::InsertCommandArgument const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::io::XInputStream > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.InsertCommandArgument", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::InsertCommandArgument const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::InsertCommandArgument >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_INSERTCOMMANDARGUMENT_HPP
