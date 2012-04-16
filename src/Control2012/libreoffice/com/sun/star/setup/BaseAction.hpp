#ifndef INCLUDED_COM_SUN_STAR_SETUP_BASEACTION_HPP
#define INCLUDED_COM_SUN_STAR_SETUP_BASEACTION_HPP

#include "sal/config.h"

#include "com/sun/star/setup/BaseAction.hdl"

#include "com/sun/star/setup/ActionType.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace setup {

inline BaseAction::BaseAction() SAL_THROW( () )
    : eType(::com::sun::star::setup::ActionType_INVALID)
    , bDone(false)
    , bProcess(false)
{
}

inline BaseAction::BaseAction(const ::com::sun::star::setup::ActionType& eType_, const ::sal_Bool& bDone_, const ::sal_Bool& bProcess_) SAL_THROW( () )
    : eType(eType_)
    , bDone(bDone_)
    , bProcess(bProcess_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace setup {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::setup::BaseAction const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::setup::ActionType >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.setup.BaseAction", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::setup::BaseAction const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::setup::BaseAction >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SETUP_BASEACTION_HPP
