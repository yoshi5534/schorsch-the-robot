#ifndef INCLUDED_COM_SUN_STAR_UCB_FETCHRESULT_HPP
#define INCLUDED_COM_SUN_STAR_UCB_FETCHRESULT_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/FetchResult.hdl"

#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace ucb {

inline FetchResult::FetchResult() SAL_THROW( () )
    : Rows()
    , StartIndex(0)
    , Orientation(false)
    , FetchError(0)
{
}

inline FetchResult::FetchResult(const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any >& Rows_, const ::sal_Int32& StartIndex_, const ::sal_Bool& Orientation_, const ::sal_Int16& FetchError_) SAL_THROW( () )
    : Rows(Rows_)
    , StartIndex(StartIndex_)
    , Orientation(Orientation_)
    , FetchError(FetchError_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::FetchResult const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::uno::Any > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.ucb.FetchResult", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::FetchResult const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::FetchResult >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_FETCHRESULT_HPP
