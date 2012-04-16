#ifndef INCLUDED_COM_SUN_STAR_CORBA_GIOP_TARGETADDRESS_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_GIOP_TARGETADDRESS_HPP

#include "sal/config.h"

#include "com/sun/star/corba/giop/TargetAddress.hdl"

#include "com/sun/star/corba/CorbaUnion.hpp"
#include "com/sun/star/corba/iop/TaggedProfile.hpp"
#include "com/sun/star/corba/giop/IORAddressingInfo.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline TargetAddress::TargetAddress() SAL_THROW( () )
    : ::com::sun::star::corba::CorbaUnion()
    , nDiscriminator(0)
    , object_key()
    , profile()
    , ior()
{
}

inline TargetAddress::TargetAddress(const ::sal_Int32& dummy_, const ::sal_Int16& nDiscriminator_, const ::com::sun::star::uno::Sequence< ::sal_Int8 >& object_key_, const ::com::sun::star::corba::iop::TaggedProfile& profile_, const ::com::sun::star::corba::giop::IORAddressingInfo& ior_) SAL_THROW( () )
    : ::com::sun::star::corba::CorbaUnion(dummy_)
    , nDiscriminator(nDiscriminator_)
    , object_key(object_key_)
    , profile(profile_)
    , ior(ior_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::giop::TargetAddress const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int8 > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::corba::iop::TaggedProfile >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::corba::giop::IORAddressingInfo >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.giop.TargetAddress", ::cppu::UnoType< ::com::sun::star::corba::CorbaUnion >::get().getTypeLibType(), 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::giop::TargetAddress const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::giop::TargetAddress >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_GIOP_TARGETADDRESS_HPP
