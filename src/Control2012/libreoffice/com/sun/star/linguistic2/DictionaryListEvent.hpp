#ifndef INCLUDED_COM_SUN_STAR_LINGUISTIC2_DICTIONARYLISTEVENT_HPP
#define INCLUDED_COM_SUN_STAR_LINGUISTIC2_DICTIONARYLISTEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/linguistic2/DictionaryListEvent.hdl"

#include "com/sun/star/linguistic2/DictionaryEvent.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace linguistic2 {

inline DictionaryListEvent::DictionaryListEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , nCondensedEvent(0)
    , aDictionaryEvents()
{
}

inline DictionaryListEvent::DictionaryListEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int16& nCondensedEvent_, const ::com::sun::star::uno::Sequence< ::com::sun::star::linguistic2::DictionaryEvent >& aDictionaryEvents_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , nCondensedEvent(nCondensedEvent_)
    , aDictionaryEvents(aDictionaryEvents_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace linguistic2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::linguistic2::DictionaryListEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::linguistic2::DictionaryEvent > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.linguistic2.DictionaryListEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::linguistic2::DictionaryListEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::linguistic2::DictionaryListEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_LINGUISTIC2_DICTIONARYLISTEVENT_HPP
