#ifndef INCLUDED_COM_SUN_STAR_CORBA_CORBASTRING8_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_CORBASTRING8_HPP

#include "sal/config.h"

#include "com/sun/star/corba/CorbaString8.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba {

inline CorbaString8::CorbaString8() SAL_THROW( () )
    : theString()
{
}

inline CorbaString8::CorbaString8(const ::rtl::OUString& theString_) SAL_THROW( () )
    : theString(theString_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace corba {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::CorbaString8 const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.CorbaString8", 0, 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::CorbaString8 const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::CorbaString8 >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_CORBASTRING8_HPP
