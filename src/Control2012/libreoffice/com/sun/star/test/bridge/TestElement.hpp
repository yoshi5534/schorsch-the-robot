#ifndef INCLUDED_COM_SUN_STAR_TEST_BRIDGE_TESTELEMENT_HPP
#define INCLUDED_COM_SUN_STAR_TEST_BRIDGE_TESTELEMENT_HPP

#include "sal/config.h"

#include "com/sun/star/test/bridge/TestElement.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/test/bridge/TestSimple.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace test { namespace bridge {

inline TestElement::TestElement() SAL_THROW( () )
    : ::com::sun::star::test::bridge::TestSimple()
    , String()
    , Interface()
    , Any()
{
}

inline TestElement::TestElement(const ::sal_Bool& Bool_, const ::sal_Unicode& Char_, const ::sal_Int8& Byte_, const ::sal_Int16& Short_, const ::sal_uInt16& UShort_, const ::sal_Int32& Long_, const ::sal_uInt32& ULong_, const ::sal_Int64& Hyper_, const ::sal_uInt64& UHyper_, const float& Float_, const double& Double_, const ::com::sun::star::test::bridge::TestEnum& Enum_, const ::rtl::OUString& String_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Interface_, const ::com::sun::star::uno::Any& Any_) SAL_THROW( () )
    : ::com::sun::star::test::bridge::TestSimple(Bool_, Char_, Byte_, Short_, UShort_, Long_, ULong_, Hyper_, UHyper_, Float_, Double_, Enum_)
    , String(String_)
    , Interface(Interface_)
    , Any(Any_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace test { namespace bridge {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::test::bridge::TestElement const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.test.bridge.TestElement", ::cppu::UnoType< ::com::sun::star::test::bridge::TestSimple >::get().getTypeLibType(), 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::test::bridge::TestElement const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::test::bridge::TestElement >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TEST_BRIDGE_TESTELEMENT_HPP
