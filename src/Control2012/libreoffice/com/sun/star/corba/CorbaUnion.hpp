#ifndef INCLUDED_COM_SUN_STAR_CORBA_CORBAUNION_HPP
#define INCLUDED_COM_SUN_STAR_CORBA_CORBAUNION_HPP

#include "sal/config.h"

#include "com/sun/star/corba/CorbaUnion.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace corba {

inline CorbaUnion::CorbaUnion() SAL_THROW( () )
    : dummy(0)
{
}

inline CorbaUnion::CorbaUnion(const ::sal_Int32& dummy_) SAL_THROW( () )
    : dummy(dummy_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace corba {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::corba::CorbaUnion const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.corba.CorbaUnion", 0, 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::corba::CorbaUnion const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::corba::CorbaUnion >::get();
}

#endif // INCLUDED_COM_SUN_STAR_CORBA_CORBAUNION_HPP
