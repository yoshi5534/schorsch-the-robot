#ifndef INCLUDED_COM_SUN_STAR_TEST_BRIDGE_TESTDATAELEMENTS_HPP
#define INCLUDED_COM_SUN_STAR_TEST_BRIDGE_TESTDATAELEMENTS_HPP

#include "sal/config.h"

#include "com/sun/star/test/bridge/TestDataElements.hdl"

#include "com/sun/star/test/bridge/TestElement.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace test { namespace bridge {

inline TestDataElements::TestDataElements() SAL_THROW( () )
    : ::com::sun::star::test::bridge::TestElement()
    , Sequence()
{
}

inline TestDataElements::TestDataElements(const ::sal_Bool& Bool_, const ::sal_Unicode& Char_, const ::sal_Int8& Byte_, const ::sal_Int16& Short_, const ::sal_uInt16& UShort_, const ::sal_Int32& Long_, const ::sal_uInt32& ULong_, const ::sal_Int64& Hyper_, const ::sal_uInt64& UHyper_, const float& Float_, const double& Double_, const ::com::sun::star::test::bridge::TestEnum& Enum_, const ::rtl::OUString& String_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Interface_, const ::com::sun::star::uno::Any& Any_, const ::com::sun::star::uno::Sequence< ::com::sun::star::test::bridge::TestElement >& Sequence_) SAL_THROW( () )
    : ::com::sun::star::test::bridge::TestElement(Bool_, Char_, Byte_, Short_, UShort_, Long_, ULong_, Hyper_, UHyper_, Float_, Double_, Enum_, String_, Interface_, Any_)
    , Sequence(Sequence_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace test { namespace bridge {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::test::bridge::TestDataElements const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::test::bridge::TestElement > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.test.bridge.TestDataElements", ::cppu::UnoType< ::com::sun::star::test::bridge::TestElement >::get().getTypeLibType(), 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::test::bridge::TestDataElements const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::test::bridge::TestDataElements >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TEST_BRIDGE_TESTDATAELEMENTS_HPP
