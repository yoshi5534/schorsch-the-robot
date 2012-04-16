#ifndef INCLUDED_COM_SUN_STAR_CORBA_IIOP_PROFILEBODY_1_1_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_IIOP_PROFILEBODY_1_1_HPP

#include "sal/config.h"

#include "com/sun/star/corba/iiop/ProfileBody_1_1.hdl"

#include "com/sun/star/corba/iop/TaggedComponent.hpp"
#include "com/sun/star/corba/iiop/Version.hpp"
#include "com/sun/star/corba/CorbaString8.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba { namespace iiop {

inline ProfileBody_1_1::ProfileBody_1_1() SAL_THROW( () )
    : iiop_version()
    , host()
    , port(0)
    , object_key()
    , components()
{
}

inline ProfileBody_1_1::ProfileBody_1_1(const ::com::sun::star::corba::iiop::Version& iiop_version_, const ::com::sun::star::corba::CorbaString8& host_, const ::sal_uInt16& port_, const ::com::sun::star::uno::Sequence< ::sal_Int8 >& object_key_, const ::com::sun::star::uno::Sequence< ::com::sun::star::corba::iop::TaggedComponent >& components_) SAL_THROW( () )
    : iiop_version(iiop_version_)
    , host(host_)
    , port(port_)
    , object_key(object_key_)
    , components(components_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace corba { namespace iiop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::iiop::ProfileBody_1_1 const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::corba::iiop::Version >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::corba::CorbaString8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int8 > >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::corba::iop::TaggedComponent > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.iiop.ProfileBody_1_1", 0, 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::iiop::ProfileBody_1_1 const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::iiop::ProfileBody_1_1 >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_IIOP_PROFILEBODY_1_1_HPP
