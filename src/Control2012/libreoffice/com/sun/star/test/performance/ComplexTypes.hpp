#ifndef INCLUDED_COM_SUN_STAR_TEST_PERFORMANCE_COMPLEXTYPES_HPP
#define INCLUDED_COM_SUN_STAR_TEST_PERFORMANCE_COMPLEXTYPES_HPP

#include "sal/config.h"

#include "com/sun/star/test/performance/ComplexTypes.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/test/performance/SimpleTypes.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace test { namespace performance {

inline ComplexTypes::ComplexTypes() SAL_THROW( () )
    : ::com::sun::star::test::performance::SimpleTypes()
    , Sequence()
    , String()
    , Interface()
    , Any()
{
}

inline ComplexTypes::ComplexTypes(const ::sal_Bool& Bool_, const ::sal_Unicode& Char_, const ::sal_Int8& Byte_, const ::sal_Int16& Short_, const ::sal_uInt16& UShort_, const ::sal_Int32& Long_, const ::sal_uInt32& ULong_, const ::sal_Int64& Hyper_, const ::sal_uInt64& UHyper_, const float& Float_, const double& Double_, const ::com::sun::star::uno::Sequence< ::sal_Int32 >& Sequence_, const ::rtl::OUString& String_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Interface_, const ::com::sun::star::uno::Any& Any_) SAL_THROW( () )
    : ::com::sun::star::test::performance::SimpleTypes(Bool_, Char_, Byte_, Short_, UShort_, Long_, ULong_, Hyper_, UHyper_, Float_, Double_)
    , Sequence(Sequence_)
    , String(String_)
    , Interface(Interface_)
    , Any(Any_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace test { namespace performance {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::test::performance::ComplexTypes const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int32 > >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.test.performance.ComplexTypes", ::cppu::UnoType< ::com::sun::star::test::performance::SimpleTypes >::get().getTypeLibType(), 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::test::performance::ComplexTypes const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::test::performance::ComplexTypes >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TEST_PERFORMANCE_COMPLEXTYPES_HPP
