#ifndef INCLUDED_COM_SUN_STAR_IO_DATATRANSFEREVENT_HPP
#define INCLUDED_COM_SUN_STAR_IO_DATATRANSFEREVENT_HPP

#include "sal/config.h"

#include "com/sun/star/io/DataTransferEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace io {

inline DataTransferEvent::DataTransferEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , aException()
{
}

inline DataTransferEvent::DataTransferEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::uno::Any& aException_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , aException(aException_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace io {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::io::DataTransferEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.io.DataTransferEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::io::DataTransferEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::io::DataTransferEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_IO_DATATRANSFEREVENT_HPP
