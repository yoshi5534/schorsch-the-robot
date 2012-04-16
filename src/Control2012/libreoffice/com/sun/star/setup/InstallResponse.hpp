#ifndef INCLUDED_COM_SUN_STAR_SETUP_INSTALLRESPONSE_HPP
#define INCLUDED_COM_SUN_STAR_SETUP_INSTALLRESPONSE_HPP

#include "sal/config.h"

#include "com/sun/star/setup/InstallResponse.hdl"

#include "com/sun/star/setup/ResponseErrorCode.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace setup {

inline InstallResponse::InstallResponse() SAL_THROW( () )
    : bSuccess(false)
    , eErrorCode(::com::sun::star::setup::ResponseErrorCode_NOERROR)
    , nSizeNeeded(0)
    , bReboot(false)
    , bLogout(false)
{
}

inline InstallResponse::InstallResponse(const ::sal_Bool& bSuccess_, const ::com::sun::star::setup::ResponseErrorCode& eErrorCode_, const ::sal_Int32& nSizeNeeded_, const ::sal_Bool& bReboot_, const ::sal_Bool& bLogout_) SAL_THROW( () )
    : bSuccess(bSuccess_)
    , eErrorCode(eErrorCode_)
    , nSizeNeeded(nSizeNeeded_)
    , bReboot(bReboot_)
    , bLogout(bLogout_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace setup {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::setup::InstallResponse const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::setup::ResponseErrorCode >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.setup.InstallResponse", 0, 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::setup::InstallResponse const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::setup::InstallResponse >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SETUP_INSTALLRESPONSE_HPP
