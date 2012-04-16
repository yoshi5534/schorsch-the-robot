#ifndef INCLUDED_COM_SUN_STAR_UCB_CONTENTINFO_HPP
#define INCLUDED_COM_SUN_STAR_UCB_CONTENTINFO_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/ContentInfo.hdl"

#include "com/sun/star/beans/Property.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline ContentInfo::ContentInfo() SAL_THROW( () )
    : Type()
    , Attributes(0)
    , Properties()
{
}

inline ContentInfo::ContentInfo(const ::rtl::OUString& Type_, const ::sal_Int32& Attributes_, const ::com::sun::star::uno::Sequence< ::com::sun::star::beans::Property >& Properties_) SAL_THROW( () )
    : Type(Type_)
    , Attributes(Attributes_)
    , Properties(Properties_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::ContentInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::beans::Property > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.ContentInfo", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::ContentInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::ContentInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_CONTENTINFO_HPP
