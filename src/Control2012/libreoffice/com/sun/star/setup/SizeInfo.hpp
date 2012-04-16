#ifndef INCLUDED_COM_SUN_STAR_SETUP_SIZEINFO_HPP
#define INCLUDED_COM_SUN_STAR_SETUP_SIZEINFO_HPP

#include "sal/config.h"

#include "com/sun/star/setup/SizeInfo.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace setup {

inline SizeInfo::SizeInfo() SAL_THROW( () )
    : nNormalSizeKB(0)
    , nNormalTempSizeKB(0)
    , nMinimalSizeKB(0)
    , nMinimalTempSizeKB(0)
{
}

inline SizeInfo::SizeInfo(const ::sal_Int32& nNormalSizeKB_, const ::sal_Int32& nNormalTempSizeKB_, const ::sal_Int32& nMinimalSizeKB_, const ::sal_Int32& nMinimalTempSizeKB_) SAL_THROW( () )
    : nNormalSizeKB(nNormalSizeKB_)
    , nNormalTempSizeKB(nNormalTempSizeKB_)
    , nMinimalSizeKB(nMinimalSizeKB_)
    , nMinimalTempSizeKB(nMinimalTempSizeKB_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace setup {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::setup::SizeInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.setup.SizeInfo", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::setup::SizeInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::setup::SizeInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SETUP_SIZEINFO_HPP
