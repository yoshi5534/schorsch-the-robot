#ifndef INCLUDED_COM_SUN_STAR_SDB_XCOLUMN_HPP
#define INCLUDED_COM_SUN_STAR_SDB_XCOLUMN_HPP

#include "sal/config.h"

#include "com/sun/star/sdb/XColumn.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/sdbc/XArray.hpp"
#include "com/sun/star/sdbc/XClob.hpp"
#include "com/sun/star/container/XNameAccess.hpp"
#include "com/sun/star/sdbc/SQLException.hpp"
#include "com/sun/star/sdbc/XBlob.hpp"
#include "com/sun/star/io/XInputStream.hpp"
#include "com/sun/star/util/DateTime.hpp"
#include "com/sun/star/util/Time.hpp"
#include "com/sun/star/util/Date.hpp"
#include "com/sun/star/sdbc/XRef.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace sdb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sdb::XColumn const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.sdb.XColumn", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::sdb::XColumn > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::sdb::XColumn > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::sdb::XColumn::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::sdb::XColumn > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_SDB_XCOLUMN_HPP
