#ifndef INCLUDED_COM_SUN_STAR_CORBA_GIOP_MESSAGEHEADER_1_1_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_GIOP_MESSAGEHEADER_1_1_HPP

#include "sal/config.h"

#include "com/sun/star/corba/giop/MessageHeader_1_1.hdl"

#include "com/sun/star/corba/giop/Version.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline MessageHeader_1_1::MessageHeader_1_1() SAL_THROW( () )
    : magic_1(0)
    , magic_2(0)
    , magic_3(0)
    , magic_4(0)
    , GIOP_version()
    , flags(0)
    , message_type(0)
    , message_size(0)
{
}

inline MessageHeader_1_1::MessageHeader_1_1(const ::sal_Int8& magic_1_, const ::sal_Int8& magic_2_, const ::sal_Int8& magic_3_, const ::sal_Int8& magic_4_, const ::com::sun::star::corba::giop::Version& GIOP_version_, const ::sal_Int8& flags_, const ::sal_Int8& message_type_, const ::sal_uInt32& message_size_) SAL_THROW( () )
    : magic_1(magic_1_)
    , magic_2(magic_2_)
    , magic_3(magic_3_)
    , magic_4(magic_4_)
    , GIOP_version(GIOP_version_)
    , flags(flags_)
    , message_type(message_type_)
    , message_size(message_size_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace corba { namespace giop {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::giop::MessageHeader_1_1 const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::corba::giop::Version >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.giop.MessageHeader_1_1", 0, 8, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::giop::MessageHeader_1_1 const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::giop::MessageHeader_1_1 >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_GIOP_MESSAGEHEADER_1_1_HPP
