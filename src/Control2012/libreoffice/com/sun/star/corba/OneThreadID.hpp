#ifndef INCLUDED_COM_SUN_STAR_CORBA_ONETHREADID_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_ONETHREADID_HPP

#include "sal/config.h"

#include "com/sun/star/corba/OneThreadID.hdl"

#include "com/sun/star/corba/OpaqueData.hpp"
#include "com/sun/star/corba/ObjectSystemID.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba {

inline OneThreadID::OneThreadID() SAL_THROW( () )
    : objSysID(0)
    , threadID()
{
}

inline OneThreadID::OneThreadID(const ::sal_uInt32& objSysID_, const ::com::sun::star::uno::Sequence< ::sal_Int8 >& threadID_) SAL_THROW( () )
    : objSysID(objSysID_)
    , threadID(threadID_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace corba {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::OneThreadID const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int8 > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.OneThreadID", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::OneThreadID const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::OneThreadID >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_ONETHREADID_HPP
