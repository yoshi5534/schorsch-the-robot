#ifndef INCLUDED_COM_SUN_STAR_UTIL_ATOMCLASSREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_UTIL_ATOMCLASSREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/util/AtomClassRequest.hdl"

#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace util {

inline AtomClassRequest::AtomClassRequest() SAL_THROW( () )
    : atomClass(0)
    , atoms()
{
}

inline AtomClassRequest::AtomClassRequest(const ::sal_Int32& atomClass_, const ::com::sun::star::uno::Sequence< ::sal_Int32 >& atoms_) SAL_THROW( () )
    : atomClass(atomClass_)
    , atoms(atoms_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace util {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::util::AtomClassRequest const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int32 > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.util.AtomClassRequest", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::util::AtomClassRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::util::AtomClassRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UTIL_ATOMCLASSREQUEST_HPP
