#ifndef INCLUDED_COM_SUN_STAR_LINGUISTIC2_PROOFREADINGRESULT_HPP
#define INCLUDED_COM_SUN_STAR_LINGUISTIC2_PROOFREADINGRESULT_HPP

#include "sal/config.h"

#include "com/sun/star/linguistic2/ProofreadingResult.hdl"

#include "com/sun/star/linguistic2/XProofreader.hpp"
#include "com/sun/star/beans/PropertyValue.hpp"
#include "com/sun/star/linguistic2/SingleProofreadingError.hpp"
#include "com/sun/star/lang/Locale.hpp"
#include "com/sun/star/text/XFlatParagraph.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace linguistic2 {

inline ProofreadingResult::ProofreadingResult() SAL_THROW( () )
    : aDocumentIdentifier()
    , xFlatParagraph()
    , aText()
    , aLocale()
    , nStartOfSentencePosition(0)
    , nBehindEndOfSentencePosition(0)
    , nStartOfNextSentencePosition(0)
    , aErrors()
    , aProperties()
    , xProofreader()
{
}

inline ProofreadingResult::ProofreadingResult(const ::rtl::OUString& aDocumentIdentifier_, const ::com::sun::star::uno::Reference< ::com::sun::star::text::XFlatParagraph >& xFlatParagraph_, const ::rtl::OUString& aText_, const ::com::sun::star::lang::Locale& aLocale_, const ::sal_Int32& nStartOfSentencePosition_, const ::sal_Int32& nBehindEndOfSentencePosition_, const ::sal_Int32& nStartOfNextSentencePosition_, const ::com::sun::star::uno::Sequence< ::com::sun::star::linguistic2::SingleProofreadingError >& aErrors_, const ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue >& aProperties_, const ::com::sun::star::uno::Reference< ::com::sun::star::linguistic2::XProofreader >& xProofreader_) SAL_THROW( () )
    : aDocumentIdentifier(aDocumentIdentifier_)
    , xFlatParagraph(xFlatParagraph_)
    , aText(aText_)
    , aLocale(aLocale_)
    , nStartOfSentencePosition(nStartOfSentencePosition_)
    , nBehindEndOfSentencePosition(nBehindEndOfSentencePosition_)
    , nStartOfNextSentencePosition(nStartOfNextSentencePosition_)
    , aErrors(aErrors_)
    , aProperties(aProperties_)
    , xProofreader(xProofreader_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace linguistic2 {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::linguistic2::ProofreadingResult const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::text::XFlatParagraph > >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::lang::Locale >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::linguistic2::SingleProofreadingError > >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::beans::PropertyValue > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::linguistic2::XProofreader > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.linguistic2.ProofreadingResult", 0, 10, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::linguistic2::ProofreadingResult const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::linguistic2::ProofreadingResult >::get();
}

#endif // INCLUDED_COM_SUN_STAR_LINGUISTIC2_PROOFREADINGRESULT_HPP
