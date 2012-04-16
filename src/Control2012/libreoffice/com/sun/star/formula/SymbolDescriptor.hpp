#ifndef INCLUDED_COM_SUN_STAR_FORMULA_SYMBOLDESCRIPTOR_HPP
#define INCLUDED_COM_SUN_STAR_FORMULA_SYMBOLDESCRIPTOR_HPP

#include "sal/config.h"

#include "com/sun/star/formula/SymbolDescriptor.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace formula {

inline SymbolDescriptor::SymbolDescriptor() SAL_THROW( () )
    : sName()
    , sExportName()
    , sSymbolSet()
    , nCharacter(0)
    , sFontName()
    , nCharSet(0)
    , nFamily(0)
    , nPitch(0)
    , nWeight(0)
    , nItalic(0)
{
}

inline SymbolDescriptor::SymbolDescriptor(const ::rtl::OUString& sName_, const ::rtl::OUString& sExportName_, const ::rtl::OUString& sSymbolSet_, const ::sal_Int32& nCharacter_, const ::rtl::OUString& sFontName_, const ::sal_Int16& nCharSet_, const ::sal_Int16& nFamily_, const ::sal_Int16& nPitch_, const ::sal_Int16& nWeight_, const ::sal_Int16& nItalic_) SAL_THROW( () )
    : sName(sName_)
    , sExportName(sExportName_)
    , sSymbolSet(sSymbolSet_)
    , nCharacter(nCharacter_)
    , sFontName(sFontName_)
    , nCharSet(nCharSet_)
    , nFamily(nFamily_)
    , nPitch(nPitch_)
    , nWeight(nWeight_)
    , nItalic(nItalic_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace formula {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::formula::SymbolDescriptor const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int16 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.formula.SymbolDescriptor", 0, 10, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::formula::SymbolDescriptor const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::formula::SymbolDescriptor >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FORMULA_SYMBOLDESCRIPTOR_HPP
