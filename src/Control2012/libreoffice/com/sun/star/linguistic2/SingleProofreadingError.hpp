#ifndef INCLUDED_COM_SUN_STAR_LINGUISTIC2_SINGLEPROOFREADINGERROR_HPP
#define INCLUDED_COM_SUN_STAR_LINGUISTIC2_SINGLEPROOFREADINGERROR_HPP

#include "sal/config.h"

#include "com/sun/star/linguistic2/SingleProofreadingError.hdl"

#include "com/sun/star/beans/PropertyValue.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace linguistic2 {

inline SingleProofreadingError::SingleProofreadingError() SAL_THROW( () )
    : nErrorStart(0)
    , nErrorLength(0)
    , nErrorType(0)
    , aRuleIdentifier()
    , aShortComment()
    , aFullComment()
    , aSuggestions()
    , aProperties()
{
}

inline SingleProofreadingError::SingleProofreadingError(const ::sal_Int32& nErrorStart_, const ::sal_Int32& nErrorLength_, const ::sal_Int32& nErrorType_, const ::rtl::OUString& aRuleIdentifier_, const ::rtl::OUString& aShortComment_, const ::rtl::OUString& aFullComment_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& aSuggestions_, const ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue >& aProperties_) SAL_THROW( () )
    : nErrorStart(nErrorStart_)
    , nErrorLength(nErrorLength_)
    , nErrorType(nErrorType_)
    , aRuleIdentifier(aRuleIdentifier_)
    , aShortComment(aShortComment_)
    , aFullComment(aFullComment_)
    , aSuggestions(aSuggestions_)
    , aProperties(aProperties_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace linguistic2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::linguistic2::SingleProofreadingError const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::rtl::OUString > >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::beans::PropertyValue > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.linguistic2.SingleProofreadingError", 0, 8, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::linguistic2::SingleProofreadingError const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::linguistic2::SingleProofreadingError >::get();
}

#endif // INCLUDED_COM_SUN_STAR_LINGUISTIC2_SINGLEPROOFREADINGERROR_HPP
