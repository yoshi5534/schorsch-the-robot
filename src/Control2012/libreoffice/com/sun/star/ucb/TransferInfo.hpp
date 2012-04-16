#ifndef INCLUDED_COM_SUN_STAR_UCB_TRANSFERINFO_HPP
#define INCLUDED_COM_SUN_STAR_UCB_TRANSFERINFO_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/TransferInfo.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline TransferInfo::TransferInfo() SAL_THROW( () )
    : MoveData(false)
    , SourceURL()
    , NewTitle()
    , NameClash(0)
{
}

inline TransferInfo::TransferInfo(const ::sal_Bool& MoveData_, const ::rtl::OUString& SourceURL_, const ::rtl::OUString& NewTitle_, const ::sal_Int32& NameClash_) SAL_THROW( () )
    : MoveData(MoveData_)
    , SourceURL(SourceURL_)
    , NewTitle(NewTitle_)
    , NameClash(NameClash_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::TransferInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.TransferInfo", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::TransferInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::TransferInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_TRANSFERINFO_HPP
