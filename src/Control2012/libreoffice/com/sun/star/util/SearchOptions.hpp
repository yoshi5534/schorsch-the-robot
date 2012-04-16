#ifndef INCLUDED_COM_SUN_STAR_UTIL_SEARCHOPTIONS_HPP
#define INCLUDED_COM_SUN_STAR_UTIL_SEARCHOPTIONS_HPP

#include "sal/config.h"

#include "com/sun/star/util/SearchOptions.hdl"

#include "com/sun/star/lang/Locale.hpp"
#include "com/sun/star/util/SearchAlgorithms.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace util {

inline SearchOptions::SearchOptions() SAL_THROW( () )
    : algorithmType(::com::sun::star::util::SearchAlgorithms_ABSOLUTE)
    , searchFlag(0)
    , searchString()
    , replaceString()
    , Locale()
    , changedChars(0)
    , deletedChars(0)
    , insertedChars(0)
    , transliterateFlags(0)
{
}

inline SearchOptions::SearchOptions(const ::com::sun::star::util::SearchAlgorithms& algorithmType_, const ::sal_Int32& searchFlag_, const ::rtl::OUString& searchString_, const ::rtl::OUString& replaceString_, const ::com::sun::star::lang::Locale& Locale_, const ::sal_Int32& changedChars_, const ::sal_Int32& deletedChars_, const ::sal_Int32& insertedChars_, const ::sal_Int32& transliterateFlags_) SAL_THROW( () )
    : algorithmType(algorithmType_)
    , searchFlag(searchFlag_)
    , searchString(searchString_)
    , replaceString(replaceString_)
    , Locale(Locale_)
    , changedChars(changedChars_)
    , deletedChars(deletedChars_)
    , insertedChars(insertedChars_)
    , transliterateFlags(transliterateFlags_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace util {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::util::SearchOptions const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::util::SearchAlgorithms >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::lang::Locale >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.util.SearchOptions", 0, 9, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::util::SearchOptions const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::util::SearchOptions >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UTIL_SEARCHOPTIONS_HPP
