#ifndef INCLUDED_COM_SUN_STAR_SHEET_RESULTEVENT_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_RESULTEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/ResultEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline ResultEvent::ResultEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Value()
{
}

inline ResultEvent::ResultEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::uno::Any& Value_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Value(Value_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::ResultEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.ResultEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::ResultEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::ResultEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_RESULTEVENT_HPP
