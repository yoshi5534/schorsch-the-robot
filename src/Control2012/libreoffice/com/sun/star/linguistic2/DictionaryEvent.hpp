#ifndef INCLUDED_COM_SUN_STAR_LINGUISTIC2_DICTIONARYEVENT_HPP
#define INCLUDED_COM_SUN_STAR_LINGUISTIC2_DICTIONARYEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/linguistic2/DictionaryEvent.hdl"

#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/linguistic2/XDictionaryEntry.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace linguistic2 {

inline DictionaryEvent::DictionaryEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , nEvent(0)
    , xDictionaryEntry()
{
}

inline DictionaryEvent::DictionaryEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::sal_Int16& nEvent_, const ::com::sun::star::uno::Reference< ::com::sun::star::linguistic2::XDictionaryEntry >& xDictionaryEntry_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , nEvent(nEvent_)
    , xDictionaryEntry(xDictionaryEntry_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace linguistic2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::linguistic2::DictionaryEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::linguistic2::XDictionaryEntry > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.linguistic2.DictionaryEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::linguistic2::DictionaryEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::linguistic2::DictionaryEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_LINGUISTIC2_DICTIONARYEVENT_HPP
