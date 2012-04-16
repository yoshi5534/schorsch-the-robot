#ifndef INCLUDED_COM_SUN_STAR_EMBED_INSERTEDOBJECTINFO_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_INSERTEDOBJECTINFO_HPP

#include "sal/config.h"

#include "com/sun/star/embed/InsertedObjectInfo.hdl"

#include "com/sun/star/beans/NamedValue.hpp"
#include "com/sun/star/embed/XEmbeddedObject.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace embed {

inline InsertedObjectInfo::InsertedObjectInfo() SAL_THROW( () )
    : Object()
    , Options()
{
}

inline InsertedObjectInfo::InsertedObjectInfo(const ::com::sun::star::uno::Reference< ::com::sun::star::embed::XEmbeddedObject >& Object_, const ::com::sun::star::uno::Sequence< ::com::sun::star::beans::NamedValue >& Options_) SAL_THROW( () )
    : Object(Object_)
    , Options(Options_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace embed {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::embed::InsertedObjectInfo const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::embed::XEmbeddedObject > >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::beans::NamedValue > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.embed.InsertedObjectInfo", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::embed::InsertedObjectInfo const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::embed::InsertedObjectInfo >::get();
}

#endif // INCLUDED_COM_SUN_STAR_EMBED_INSERTEDOBJECTINFO_HPP
