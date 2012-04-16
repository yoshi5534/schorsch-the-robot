#ifndef INCLUDED_COM_SUN_STAR_SDB_APPLICATION_COPYTABLEROWEVENT_HPP
#define INCLUDED_COM_SUN_STAR_SDB_APPLICATION_COPYTABLEROWEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/sdb/application/CopyTableRowEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/sdbc/XResultSet.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sdb { namespace application {

inline CopyTableRowEvent::CopyTableRowEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , SourceData()
    , Error()
{
}

inline CopyTableRowEvent::CopyTableRowEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::uno::Reference< ::com::sun::star::sdbc::XResultSet >& SourceData_, const ::com::sun::star::uno::Any& Error_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , SourceData(SourceData_)
    , Error(Error_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace sdb { namespace application {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sdb::application::CopyTableRowEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::sdbc::XResultSet > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sdb.application.CopyTableRowEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sdb::application::CopyTableRowEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sdb::application::CopyTableRowEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SDB_APPLICATION_COPYTABLEROWEVENT_HPP
