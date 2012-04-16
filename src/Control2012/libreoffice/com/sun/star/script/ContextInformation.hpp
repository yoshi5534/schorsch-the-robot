#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_CONTEXTINFORMATION_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_CONTEXTINFORMATION_HPP

#include "sal/config.h"

#include "com/sun/star/script/ContextInformation.hdl"

#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace script {

inline ContextInformation::ContextInformation() SAL_THROW( () )
    : Name()
    , SourceCode()
    , StartLine(0)
    , StartColumn(0)
    , EndLine(0)
    , EndColumn(0)
    , LocalVariableNames()
{
}

inline ContextInformation::ContextInformation(const ::rtl::OUString& Name_, const ::rtl::OUString& SourceCode_, const ::sal_Int32& StartLine_, const ::sal_Int32& StartColumn_, const ::sal_Int32& EndLine_, const ::sal_Int32& EndColumn_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& LocalVariableNames_) SAL_THROW( () )
    : Name(Name_)
    , SourceCode(SourceCode_)
    , StartLine(StartLine_)
    , StartColumn(StartColumn_)
    , EndLine(EndLine_)
    , EndColumn(EndColumn_)
    , LocalVariableNames(LocalVariableNames_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::ContextInformation const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::rtl::OUString > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.script.ContextInformation", 0, 7, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::script::ContextInformation const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::script::ContextInformation >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_CONTEXTINFORMATION_HPP
