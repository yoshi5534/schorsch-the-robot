#ifndef INCLUDED_COM_SUN_STAR_CORBA_IOP_IOR_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_IOP_IOR_HPP

#include "sal/config.h"

#include "com/sun/star/corba/iop/IOR.hdl"

#include "com/sun/star/corba/iop/TaggedProfile.hpp"
#include "com/sun/star/corba/CorbaString8.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba { namespace iop {

inline IOR::IOR() SAL_THROW( () )
    : type_id()
    , profiles()
{
}

inline IOR::IOR(const ::com::sun::star::corba::CorbaString8& type_id_, const ::com::sun::star::uno::Sequence< ::com::sun::star::corba::iop::TaggedProfile >& profiles_) SAL_THROW( () )
    : type_id(type_id_)
    , profiles(profiles_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace corba { namespace iop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::iop::IOR const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::corba::CorbaString8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::corba::iop::TaggedProfile > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.iop.IOR", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::iop::IOR const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::iop::IOR >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_IOP_IOR_HPP
