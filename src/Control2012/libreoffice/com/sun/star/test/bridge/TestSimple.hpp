#ifndef INCLUDED_COM_SUN_STAR_TEST_BRIDGE_TESTSIMPLE_HPP
#define INCLUDED_COM_SUN_STAR_TEST_BRIDGE_TESTSIMPLE_HPP

#include "sal/config.h"

#include "com/sun/star/test/bridge/TestSimple.hdl"

#include "com/sun/star/test/bridge/TestEnum.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace test { namespace bridge {

inline TestSimple::TestSimple() SAL_THROW( () )
    : Bool(false)
    , Char(0)
    , Byte(0)
    , Short(0)
    , UShort(0)
    , Long(0)
    , ULong(0)
    , Hyper(0)
    , UHyper(0)
    , Float(0)
    , Double(0)
    , Enum(::com::sun::star::test::bridge::TestEnum_TEST)
{
}

inline TestSimple::TestSimple(const ::sal_Bool& Bool_, const ::sal_Unicode& Char_, const ::sal_Int8& Byte_, const ::sal_Int16& Short_, const ::sal_uInt16& UShort_, const ::sal_Int32& Long_, const ::sal_uInt32& ULong_, const ::sal_Int64& Hyper_, const ::sal_uInt64& UHyper_, const float& Float_, const double& Double_, const ::com::sun::star::test::bridge::TestEnum& Enum_) SAL_THROW( () )
    : Bool(Bool_)
    , Char(Char_)
    , Byte(Byte_)
    , Short(Short_)
    , UShort(UShort_)
    , Long(Long_)
    , ULong(ULong_)
    , Hyper(Hyper_)
    , UHyper(UHyper_)
    , Float(Float_)
    , Double(Double_)
    , Enum(Enum_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace test { namespace bridge {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::test::bridge::TestSimple const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoCharType >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoUnsignedShortType >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int64 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_uInt64 >::get().getTypeLibType(),
            ::cppu::UnoType< float >::get().getTypeLibType(),
            ::cppu::UnoType< double >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::test::bridge::TestEnum >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.test.bridge.TestSimple", 0, 12, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::test::bridge::TestSimple const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::test::bridge::TestSimple >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TEST_BRIDGE_TESTSIMPLE_HPP
