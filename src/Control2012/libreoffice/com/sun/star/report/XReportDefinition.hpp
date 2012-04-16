#ifndef INCLUDED_COM_SUN_STAR_REPORT_XREPORTDEFINITION_HPP
#define INCLUDED_COM_SUN_STAR_REPORT_XREPORTDEFINITION_HPP

#include "sal/config.h"

#include "com/sun/star/report/XReportDefinition.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/container/NoSuchElementException.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/report/XSection.hpp"
#include "com/sun/star/report/XGroups.hpp"
#include "com/sun/star/sdbc/XConnection.hpp"
#include "com/sun/star/report/XFunctionsSupplier.hpp"
#include "com/sun/star/report/XReportComponent.hpp"
#include "com/sun/star/lang/DisposedException.hpp"
#include "com/sun/star/embed/XVisualObject.hpp"
#include "com/sun/star/document/XViewDataSupplier.hpp"
#include "com/sun/star/document/XStorageBasedDocument.hpp"
#include "com/sun/star/util/XCloseable.hpp"
#include "com/sun/star/util/XModifiable2.hpp"
#include "com/sun/star/document/XDocumentSubStorageSupplier.hpp"
#include "com/sun/star/style/XStyleFamiliesSupplier.hpp"
#include "com/sun/star/ui/XUIConfigurationManagerSupplier.hpp"
#include "com/sun/star/document/XEventBroadcaster.hpp"
#include "com/sun/star/frame/XLoadable.hpp"
#include "com/sun/star/frame/XModel.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace report {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::report::XReportDefinition const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[12];
        aSuperTypes[0] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::frame::XModel > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::frame::XLoadable > >::get().getTypeLibType();
        aSuperTypes[2] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::embed::XVisualObject > >::get().getTypeLibType();
        aSuperTypes[3] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::document::XStorageBasedDocument > >::get().getTypeLibType();
        aSuperTypes[4] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::document::XViewDataSupplier > >::get().getTypeLibType();
        aSuperTypes[5] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::util::XCloseable > >::get().getTypeLibType();
        aSuperTypes[6] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::ui::XUIConfigurationManagerSupplier > >::get().getTypeLibType();
        aSuperTypes[7] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::document::XDocumentSubStorageSupplier > >::get().getTypeLibType();
        aSuperTypes[8] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::style::XStyleFamiliesSupplier > >::get().getTypeLibType();
        aSuperTypes[9] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::util::XModifiable2 > >::get().getTypeLibType();
        aSuperTypes[10] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::report::XReportComponent > >::get().getTypeLibType();
        aSuperTypes[11] = ::cppu::UnoType< const ::com::sun::star::uno::Reference< ::com::sun::star::report::XFunctionsSupplier > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.report.XReportDefinition", 12, aSuperTypes );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::report::XReportDefinition > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::report::XReportDefinition > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::report::XReportDefinition::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::report::XReportDefinition > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_REPORT_XREPORTDEFINITION_HPP
