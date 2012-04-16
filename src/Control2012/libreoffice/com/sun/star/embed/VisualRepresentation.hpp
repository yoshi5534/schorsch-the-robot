#ifndef INCLUDED_COM_SUN_STAR_EMBED_VISUALREPRESENTATION_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_VISUALREPRESENTATION_HPP

#include "sal/config.h"

#include "com/sun/star/embed/VisualRepresentation.hdl"

#include "com/sun/star/datatransfer/DataFlavor.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace embed {

inline VisualRepresentation::VisualRepresentation() SAL_THROW( () )
    : Flavor()
    , Data()
{
}

inline VisualRepresentation::VisualRepresentation(const ::com::sun::star::datatransfer::DataFlavor& Flavor_, const ::com::sun::star::uno::Any& Data_) SAL_THROW( () )
    : Flavor(Flavor_)
    , Data(Data_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace embed {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::embed::VisualRepresentation const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::datatransfer::DataFlavor >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.embed.VisualRepresentation", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::embed::VisualRepresentation const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::embed::VisualRepresentation >::get();
}

#endif // INCLUDED_COM_SUN_STAR_EMBED_VISUALREPRESENTATION_HPP
