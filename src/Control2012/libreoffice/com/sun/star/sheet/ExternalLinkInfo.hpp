#ifndef INCLUDED_COM_SUN_STAR_SHEET_EXTERNALLINKINFO_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_EXTERNALLINKINFO_HPP

#include "sal/config.h"

#include "com/sun/star/sheet/ExternalLinkInfo.hdl"

#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sheet {

inline ExternalLinkInfo::ExternalLinkInfo() SAL_THROW( () )
    : Type(0)
    , Data()
{
}

inline ExternalLinkInfo::ExternalLinkInfo(const ::sal_Int32& Type_, const ::com::sun::star::uno::Any& Data_) SAL_THROW( () )
    : Type(Type_)
    , Data(Data_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace sheet {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sheet::ExternalLinkInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sheet.ExternalLinkInfo", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sheet::ExternalLinkInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sheet::ExternalLinkInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SHEET_EXTERNALLINKINFO_HPP
