#ifndef INCLUDED_COM_SUN_STAR_UTIL_SEARCHRESULT_HPP
#define INCLUDED_COM_SUN_STAR_UTIL_SEARCHRESULT_HPP

#include "sal/config.h"

#include "com/sun/star/util/SearchResult.hdl"

#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace util {

inline SearchResult::SearchResult() SAL_THROW( () )
    : subRegExpressions(0)
    , startOffset()
    , endOffset()
{
}

inline SearchResult::SearchResult(const ::sal_Int32& subRegExpressions_, const ::com::sun::star::uno::Sequence< ::sal_Int32 >& startOffset_, const ::com::sun::star::uno::Sequence< ::sal_Int32 >& endOffset_) SAL_THROW( () )
    : subRegExpressions(subRegExpressions_)
    , startOffset(startOffset_)
    , endOffset(endOffset_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace util {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::util::SearchResult const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int32 > >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int32 > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.util.SearchResult", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::util::SearchResult const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::util::SearchResult >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UTIL_SEARCHRESULT_HPP
