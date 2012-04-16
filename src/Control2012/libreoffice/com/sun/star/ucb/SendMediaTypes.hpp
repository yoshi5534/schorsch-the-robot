#ifndef INCLUDED_COM_SUN_STAR_UCB_SENDMEDIATYPES_HPP
#define INCLUDED_COM_SUN_STAR_UCB_SENDMEDIATYPES_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/SendMediaTypes.hdl"

#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline SendMediaTypes::SendMediaTypes() SAL_THROW( () )
    : ProtocolType()
    , Value()
{
}

inline SendMediaTypes::SendMediaTypes(const ::rtl::OUString& ProtocolType_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& Value_) SAL_THROW( () )
    : ProtocolType(ProtocolType_)
    , Value(Value_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::SendMediaTypes const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::rtl::OUString > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.SendMediaTypes", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::SendMediaTypes const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::SendMediaTypes >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_SENDMEDIATYPES_HPP
