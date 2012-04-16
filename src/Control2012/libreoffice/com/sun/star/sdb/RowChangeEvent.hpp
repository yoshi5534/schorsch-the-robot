#ifndef INCLUDED_COM_SUN_STAR_SDB_ROWCHANGEEVENT_HPP
#define INCLUDED_COM_SUN_STAR_SDB_ROWCHANGEEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/sdb/RowChangeEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sdb {

inline RowChangeEvent::RowChangeEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Action(0)
    , Rows(0)
{
}

inline RowChangeEvent::RowChangeEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int32& Action_, const ::sal_Int32& Rows_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Action(Action_)
    , Rows(Rows_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sdb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sdb::RowChangeEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sdb.RowChangeEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sdb::RowChangeEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sdb::RowChangeEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SDB_ROWCHANGEEVENT_HPP
