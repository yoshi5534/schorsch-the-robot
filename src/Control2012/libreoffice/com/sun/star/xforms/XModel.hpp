#ifndef INCLUDED_COM_SUN_STAR_XFORMS_XMODEL_HPP
#define INCLUDED_COM_SUN_STAR_XFORMS_XMODEL_HPP

#include "sal/config.h"

#include "com/sun/star/xforms/XModel.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/beans/XPropertySet.hpp"
#include "com/sun/star/xforms/XSubmission.hpp"
#include "com/sun/star/xml/dom/XDocument.hpp"
#include "com/sun/star/xforms/XDataTypeRepository.hpp"
#include "com/sun/star/task/XInteractionHandler.hpp"
#include "com/sun/star/util/VetoException.hpp"
#include "com/sun/star/lang/WrappedTargetException.hpp"
#include "com/sun/star/container/XSet.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace xforms {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xforms::XModel const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.xforms.XModel", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::xforms::XModel > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::xforms::XModel > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::xforms::XModel::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::xforms::XModel > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_XFORMS_XMODEL_HPP
