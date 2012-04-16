#ifndef INCLUDED_COM_SUN_STAR_CORBA_IOP_SERVICECONTEXT_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_IOP_SERVICECONTEXT_HPP

#include "sal/config.h"

#include "com/sun/star/corba/iop/ServiceContext.hdl"

#include "com/sun/star/corba/iop/ServiceId.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba { namespace iop {

inline ServiceContext::ServiceContext() SAL_THROW( () )
    : context_id(0)
    , context_data()
{
}

inline ServiceContext::ServiceContext(const ::sal_uInt32& context_id_, const ::com::sun::star::uno::Sequence< ::sal_Int8 >& context_data_) SAL_THROW( () )
    : context_id(context_id_)
    , context_data(context_data_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace corba { namespace iop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::iop::ServiceContext const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int8 > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.iop.ServiceContext", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::iop::ServiceContext const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::iop::ServiceContext >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_IOP_SERVICECONTEXT_HPP
