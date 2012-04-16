#ifndef INCLUDED_COM_SUN_STAR_CORBA_IOP_TAGGEDPROFILE_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_IOP_TAGGEDPROFILE_HPP

#include "sal/config.h"

#include "com/sun/star/corba/iop/TaggedProfile.hdl"

#include "com/sun/star/corba/iop/ProfileId.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba { namespace iop {

inline TaggedProfile::TaggedProfile() SAL_THROW( () )
    : tag(0)
    , profile_data()
{
}

inline TaggedProfile::TaggedProfile(const ::sal_uInt32& tag_, const ::com::sun::star::uno::Sequence< ::sal_Int8 >& profile_data_) SAL_THROW( () )
    : tag(tag_)
    , profile_data(profile_data_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace corba { namespace iop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::iop::TaggedProfile const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int8 > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.iop.TaggedProfile", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::iop::TaggedProfile const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::iop::TaggedProfile >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_IOP_TAGGEDPROFILE_HPP
