#ifndef INCLUDED_COM_SUN_STAR_CORBA_OBJECTKEY_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_OBJECTKEY_HPP

#include "sal/config.h"

#include "com/sun/star/corba/ObjectKey.hdl"

#include "com/sun/star/corba/CorbaString8.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba {

inline ObjectKey::ObjectKey() SAL_THROW( () )
    : sOid()
    , sType()
{
}

inline ObjectKey::ObjectKey(const ::com::sun::star::corba::CorbaString8& sOid_, const ::com::sun::star::corba::CorbaString8& sType_) SAL_THROW( () )
    : sOid(sOid_)
    , sType(sType_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace corba {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::ObjectKey const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::corba::CorbaString8 >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::corba::CorbaString8 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.ObjectKey", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::ObjectKey const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::ObjectKey >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_OBJECTKEY_HPP
