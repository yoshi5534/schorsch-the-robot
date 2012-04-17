#ifndef INCLUDED_COM_SUN_STAR_CORBA_IIOP_BIDIRIIOPSERVICECONTEXT_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_IIOP_BIDIRIIOPSERVICECONTEXT_HPP

#include "sal/config.h"

#include "com/sun/star/corba/iiop/BiDirIIOPServiceContext.hdl"

#include "com/sun/star/corba/iiop/ListenPointList.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba { namespace iiop {

inline BiDirIIOPServiceContext::BiDirIIOPServiceContext() SAL_THROW( () )
    : listen_points()
{
}

inline BiDirIIOPServiceContext::BiDirIIOPServiceContext(const ::com::sun::star::uno::Sequence< ::com::sun::star::corba::iiop::ListenPoint >& listen_points_) SAL_THROW( () )
    : listen_points(listen_points_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace corba { namespace iiop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::iiop::BiDirIIOPServiceContext const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::corba::iiop::ListenPoint > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.iiop.BiDirIIOPServiceContext", 0, 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::iiop::BiDirIIOPServiceContext const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::iiop::BiDirIIOPServiceContext >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_IIOP_BIDIRIIOPSERVICECONTEXT_HPP