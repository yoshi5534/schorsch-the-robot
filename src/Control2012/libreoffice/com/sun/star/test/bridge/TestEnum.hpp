#ifndef INCLUDED_COM_SUN_STAR_TEST_BRIDGE_TESTENUM_HPP
#define INCLUDED_COM_SUN_STAR_TEST_BRIDGE_TESTENUM_HPP

#include "sal/config.h"

#include "com/sun/star/test/bridge/TestEnum.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace test { namespace bridge {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::test::bridge::TestEnum const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_enum_type_init( &the_type,
                                       "com.sun.star.test.bridge.TestEnum",
                                       ::com::sun::star::test::bridge::TestEnum_TEST );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::test::bridge::TestEnum const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::test::bridge::TestEnum >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TEST_BRIDGE_TESTENUM_HPP
