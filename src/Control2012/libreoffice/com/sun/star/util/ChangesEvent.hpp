#ifndef INCLUDED_COM_SUN_STAR_UTIL_CHANGESEVENT_HPP
#define INCLUDED_COM_SUN_STAR_UTIL_CHANGESEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/util/ChangesEvent.hdl"

#include "com/sun/star/util/ChangesSet.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace util {

inline ChangesEvent::ChangesEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Base()
    , Changes()
{
}

inline ChangesEvent::ChangesEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::com::sun::star::uno::Any& Base_, const ::com::sun::star::uno::Sequence< ::com::sun::star::util::ElementChange >& Changes_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Base(Base_)
    , Changes(Changes_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace util {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::util::ChangesEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::util::ElementChange > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.util.ChangesEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::util::ChangesEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::util::ChangesEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UTIL_CHANGESEVENT_HPP
