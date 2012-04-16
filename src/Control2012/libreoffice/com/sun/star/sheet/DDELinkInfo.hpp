#ifndef INCLUDED_COM_SUN_STAR_SHEET_DDELINKINFO_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_DDELINKINFO_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/DDELinkInfo.hdl"

#include "com/sun/star/sheet/DDEItemInfo.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline DDELinkInfo::DDELinkInfo() SAL_THROW( () )
    : Service()
    , Topic()
    , Items()
{
}

inline DDELinkInfo::DDELinkInfo(const ::rtl::OUString& Service_, const ::rtl::OUString& Topic_, const ::com::sun::star::uno::Sequence< ::com::sun::star::sheet::DDEItemInfo >& Items_) SAL_THROW( () )
    : Service(Service_)
    , Topic(Topic_)
    , Items(Items_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::DDELinkInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::sheet::DDEItemInfo > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.DDELinkInfo", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::DDELinkInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::DDELinkInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_DDELINKINFO_HPP
