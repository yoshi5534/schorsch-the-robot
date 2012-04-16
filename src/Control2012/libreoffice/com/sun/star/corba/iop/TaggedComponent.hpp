#ifndef INCLUDED_COM_SUN_STAR_CORBA_IOP_TAGGEDCOMPONENT_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_IOP_TAGGEDCOMPONENT_HPP

#include "sal/config.h"

#include "com/sun/star/corba/iop/TaggedComponent.hdl"

#include "com/sun/star/corba/iop/ComponentId.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba { namespace iop {

inline TaggedComponent::TaggedComponent() SAL_THROW( () )
    : tag(0)
    , component_data()
{
}

inline TaggedComponent::TaggedComponent(const ::sal_uInt32& tag_, const ::com::sun::star::uno::Sequence< ::sal_Int8 >& component_data_) SAL_THROW( () )
    : tag(tag_)
    , component_data(component_data_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace corba { namespace iop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::iop::TaggedComponent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int8 > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.iop.TaggedComponent", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::iop::TaggedComponent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::iop::TaggedComponent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_IOP_TAGGEDCOMPONENT_HPP
