#ifndef INCLUDED_COM_SUN_STAR_UCB_GLOBALTRANSFERCOMMANDARGUMENT_HPP
#define INCLUDED_COM_SUN_STAR_UCB_GLOBALTRANSFERCOMMANDARGUMENT_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/GlobalTransferCommandArgument.hdl"

#include "com/sun/star/ucb/TransferCommandOperation.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline GlobalTransferCommandArgument::GlobalTransferCommandArgument() SAL_THROW( () )
    : Operation(::com::sun::star::ucb::TransferCommandOperation_COPY)
    , SourceURL()
    , TargetURL()
    , NewTitle()
    , NameClash(0)
{
}

inline GlobalTransferCommandArgument::GlobalTransferCommandArgument(const ::com::sun::star::ucb::TransferCommandOperation& Operation_, const ::rtl::OUString& SourceURL_, const ::rtl::OUString& TargetURL_, const ::rtl::OUString& NewTitle_, const ::sal_Int32& NameClash_) SAL_THROW( () )
    : Operation(Operation_)
    , SourceURL(SourceURL_)
    , TargetURL(TargetURL_)
    , NewTitle(NewTitle_)
    , NameClash(NameClash_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::GlobalTransferCommandArgument const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::ucb::TransferCommandOperation >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.GlobalTransferCommandArgument", 0, 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::GlobalTransferCommandArgument const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::GlobalTransferCommandArgument >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_GLOBALTRANSFERCOMMANDARGUMENT_HPP
