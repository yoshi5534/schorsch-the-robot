#ifndef INCLUDED_COM_SUN_STAR_UTIL_ATOMDESCRIPTION_HPP
#define INCLUDED_COM_SUN_STAR_UTIL_ATOMDESCRIPTION_HPP

#include "sal/config.h"

#include "com/sun/star/util/AtomDescription.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace util {

inline AtomDescription::AtomDescription() SAL_THROW( () )
    : atom(0)
    , description()
{
}

inline AtomDescription::AtomDescription(const ::sal_Int32& atom_, const ::rtl::OUString& description_) SAL_THROW( () )
    : atom(atom_)
    , description(description_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace util {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::util::AtomDescription const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.util.AtomDescription", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::util::AtomDescription const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::util::AtomDescription >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UTIL_ATOMDESCRIPTION_HPP
