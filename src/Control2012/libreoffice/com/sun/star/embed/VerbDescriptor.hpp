#ifndef INCLUDED_COM_SUN_STAR_EMBED_VERBDESCRIPTOR_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_VERBDESCRIPTOR_HPP

#include "sal/config.h"

#include "com/sun/star/embed/VerbDescriptor.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace embed {

inline VerbDescriptor::VerbDescriptor() SAL_THROW( () )
    : VerbID(0)
    , VerbName()
    , VerbFlags(0)
    , VerbAttributes(0)
{
}

inline VerbDescriptor::VerbDescriptor(const ::sal_Int32& VerbID_, const ::rtl::OUString& VerbName_, const ::sal_Int32& VerbFlags_, const ::sal_Int32& VerbAttributes_) SAL_THROW( () )
    : VerbID(VerbID_)
    , VerbName(VerbName_)
    , VerbFlags(VerbFlags_)
    , VerbAttributes(VerbAttributes_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace embed {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::embed::VerbDescriptor const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.embed.VerbDescriptor", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::embed::VerbDescriptor const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::embed::VerbDescriptor >::get();
}

#endif // INCLUDED_COM_SUN_STAR_EMBED_VERBDESCRIPTOR_HPP
