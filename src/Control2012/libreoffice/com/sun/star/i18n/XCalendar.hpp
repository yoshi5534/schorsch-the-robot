#ifndef INCLUDED_COM_SUN_STAR_I18N_XCALENDAR_HPP
#define INCLUDED_COM_SUN_STAR_I18N_XCALENDAR_HPP

#include "sal/config.h"

#include "com/sun/star/i18n/XCalendar.hdl"

#include "com/sun/star/lang/Locale.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/i18n/Calendar.hpp"
#include "com/sun/star/i18n/CalendarItem.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace i18n {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::i18n::XCalendar const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.i18n.XCalendar", 0, 0 );
    }
    return * reinterpret_cast< ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::uno::Reference< ::com::sun::star::i18n::XCalendar > const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::i18n::XCalendar > >::get();
}

::com::sun::star::uno::Type const & ::com::sun::star::i18n::XCalendar::static_type(void *) {
    return ::getCppuType(static_cast< ::com::sun::star::uno::Reference< ::com::sun::star::i18n::XCalendar > * >(0));
}

#endif // INCLUDED_COM_SUN_STAR_I18N_XCALENDAR_HPP
