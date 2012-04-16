#ifndef INCLUDED_COM_SUN_STAR_SDB_APPLICATION_NAMEDDATABASEOBJECT_HPP
#define INCLUDED_COM_SUN_STAR_SDB_APPLICATION_NAMEDDATABASEOBJECT_HPP

#include "sal/config.h"

#include "com/sun/star/sdb/application/NamedDatabaseObject.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace sdb { namespace application {

inline NamedDatabaseObject::NamedDatabaseObject() SAL_THROW( () )
    : Type(0)
    , Name()
{
}

inline NamedDatabaseObject::NamedDatabaseObject(const ::sal_Int32& Type_, const ::rtl::OUString& Name_) SAL_THROW( () )
    : Type(Type_)
    , Name(Name_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace sdb { namespace application {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sdb::application::NamedDatabaseObject const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.sdb.application.NamedDatabaseObject", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sdb::application::NamedDatabaseObject const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sdb::application::NamedDatabaseObject >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SDB_APPLICATION_NAMEDDATABASEOBJECT_HPP
