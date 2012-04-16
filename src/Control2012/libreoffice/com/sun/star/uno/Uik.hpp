#ifndef INCLUDED_COM_SUN_STAR_UNO_UIK_HPP
#define INCLUDED_COM_SUN_STAR_UNO_UIK_HPP

#include "sal/config.h"

#include "com/sun/star/uno/Uik.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace uno {

inline Uik::Uik() SAL_THROW( () )
    : m_Data1(0)
    , m_Data2(0)
    , m_Data3(0)
    , m_Data4(0)
    , m_Data5(0)
{
}

inline Uik::Uik(const ::sal_uInt32& m_Data1_, const ::sal_uInt16& m_Data2_, const ::sal_uInt16& m_Data3_, const ::sal_uInt32& m_Data4_, const ::sal_uInt32& m_Data5_) SAL_THROW( () )
    : m_Data1(m_Data1_)
    , m_Data2(m_Data2_)
    , m_Data3(m_Data3_)
    , m_Data4(m_Data4_)
    , m_Data5(m_Data5_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace uno {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::uno::Uik const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.uno.Uik", 0, 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Uik const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Uik >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UNO_UIK_HPP
