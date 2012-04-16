#ifndef INCLUDED_COM_SUN_STAR_CORBA_GIOP_LOCATEREQUESTHEADER_1_0_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_GIOP_LOCATEREQUESTHEADER_1_0_HPP

#include "sal/config.h"

#include "com/sun/star/corba/giop/LocateRequestHeader_1_0.hdl"

#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline LocateRequestHeader_1_0::LocateRequestHeader_1_0() SAL_THROW( () )
    : request_id(0)
    , object_key()
{
}

inline LocateRequestHeader_1_0::LocateRequestHeader_1_0(const ::sal_uInt32& request_id_, const ::com::sun::star::uno::Sequence< ::sal_Int8 >& object_key_) SAL_THROW( () )
    : request_id(request_id_)
    , object_key(object_key_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::giop::LocateRequestHeader_1_0 const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int8 > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.giop.LocateRequestHeader_1_0", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::giop::LocateRequestHeader_1_0 const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::giop::LocateRequestHeader_1_0 >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_GIOP_LOCATEREQUESTHEADER_1_0_HPP
