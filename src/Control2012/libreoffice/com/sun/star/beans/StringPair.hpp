#ifndef INCLUDED_COM_SUN_STAR_BEANS_STRINGPAIR_HPP
#define INCLUDED_COM_SUN_STAR_BEANS_STRINGPAIR_HPP

#include "sal/config.h"

#include "com/sun/star/beans/StringPair.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace beans {

inline StringPair::StringPair() SAL_THROW( () )
    : First()
    , Second()
{
}

inline StringPair::StringPair(const ::rtl::OUString& First_, const ::rtl::OUString& Second_) SAL_THROW( () )
    : First(First_)
    , Second(Second_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace beans {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::beans::StringPair const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.beans.StringPair", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::beans::StringPair const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::beans::StringPair >::get();
}

#endif // INCLUDED_COM_SUN_STAR_BEANS_STRINGPAIR_HPP
