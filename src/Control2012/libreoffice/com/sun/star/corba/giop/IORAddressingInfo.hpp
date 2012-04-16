#ifndef INCLUDED_COM_SUN_STAR_CORBA_GIOP_IORADDRESSINGINFO_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_GIOP_IORADDRESSINGINFO_HPP

#include "sal/config.h"

#include "com/sun/star/corba/giop/IORAddressingInfo.hdl"

#include "com/sun/star/corba/iop/IOR.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline IORAddressingInfo::IORAddressingInfo() SAL_THROW( () )
    : selected_profile_index(0)
    , ior()
{
}

inline IORAddressingInfo::IORAddressingInfo(const ::sal_uInt32& selected_profile_index_, const ::com::sun::star::corba::iop::IOR& ior_) SAL_THROW( () )
    : selected_profile_index(selected_profile_index_)
    , ior(ior_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::giop::IORAddressingInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::corba::iop::IOR >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.giop.IORAddressingInfo", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::giop::IORAddressingInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::giop::IORAddressingInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_GIOP_IORADDRESSINGINFO_HPP
