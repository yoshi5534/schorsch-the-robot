#ifndef INCLUDED_COM_SUN_STAR_FRAME_STATUS_VERB_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_STATUS_VERB_HPP

#include "sal/config.h"

#include "com/sun/star/frame/status/Verb.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace frame { namespace status {

inline Verb::Verb() SAL_THROW( () )
    : VerbId(0)
    , VerbName()
    , VerbIsOnMenu(false)
    , VerbIsConst(false)
{
}

inline Verb::Verb(const ::sal_Int32& VerbId_, const ::rtl::OUString& VerbName_, const ::sal_Bool& VerbIsOnMenu_, const ::sal_Bool& VerbIsConst_) SAL_THROW( () )
    : VerbId(VerbId_)
    , VerbName(VerbName_)
    , VerbIsOnMenu(VerbIsOnMenu_)
    , VerbIsConst(VerbIsConst_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace frame { namespace status {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::status::Verb const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.frame.status.Verb", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::frame::status::Verb const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::frame::status::Verb >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_STATUS_VERB_HPP
