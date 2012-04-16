#ifndef INCLUDED_COM_SUN_STAR_CHART2_DATA_XDATABASEDATAPROVIDER_HPP
#define INCLUDED_COM_SUN_STAR_CHART2_DATA_XDATABASEDATAPROVIDER_HPP

#include "sal/config.h"

#include "com/sun/star/chart2/data/XDatabaseDataProvider.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/beans/UnknownPropertyException.hpp"
#include "com/sun/star/sdbc/XConnection.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/sdbc/XRowSet.hpp"
#include "com/sun/star/chart2/data/XRangeXMLConversion.hpp"
#include "com/sun/star/beans/XPropertySet.hpp"
#include "com/sun/star/chart2/data/XDataProvider.hpp"
#include "com/sun/star/sdbc/XParameters.hpp"
#include "com/sun/star/lang/XInitialization.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace chart2 { namespace data {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::chart2::data::XDatabaseDataProvider const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[7];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::chart2::data::XDataProvider > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::chart2::data::XRangeXMLConversion > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XInitialization > >::get().getTypeLibType();
        aSuperTypes[3] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XComponent > >::get().getTypeLibType();
        aSuperTypes[4] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::beans::XPropertySet > >::get().getTypeLibType();
        aSuperTypes[5] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::sdbc::XParameters > >::get().getTypeLibType();
        aSuperTypes[6] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::sdbc::XRowSet > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.chart2.data.XDatabaseDataProvider", 7, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::chart2::data::XDatabaseDataProvider > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::chart2::data::XDatabaseDataProvider > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::chart2::data::XDatabaseDataProvider::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::chart2::data::XDatabaseDataProvider > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_CHART2_DATA_XDATABASEDATAPROVIDER_HPP
