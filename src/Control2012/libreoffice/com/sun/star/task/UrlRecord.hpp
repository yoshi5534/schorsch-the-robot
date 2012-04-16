#ifndef INCLUDED_COM_SUN_STAR_TASK_URLRECORD_HPP
#define INCLUDED_COM_SUN_STAR_TASK_URLRECORD_HPP

#include "sal/config.h"

#include "com/sun/star/task/UrlRecord.hdl"

#include "com/sun/star/task/UserRecord.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace task {

inline UrlRecord::UrlRecord() SAL_THROW( () )
    : Url()
    , UserList()
{
}

inline UrlRecord::UrlRecord(const ::rtl::OUString& Url_, const ::com::sun::star::uno::Sequence< ::com::sun::star::task::UserRecord >& UserList_) SAL_THROW( () )
    : Url(Url_)
    , UserList(UserList_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace task {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::task::UrlRecord const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::task::UserRecord > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.task.UrlRecord", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::task::UrlRecord const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::task::UrlRecord >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TASK_URLRECORD_HPP
