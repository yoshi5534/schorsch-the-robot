#ifndef INCLUDED_COM_SUN_STAR_TASK_PDFEXPORTEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_TASK_PDFEXPORTEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/task/PDFExportException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace task {

inline PDFExportException::PDFExportException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , ErrorCodes()
{ }

inline PDFExportException::PDFExportException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Sequence< ::sal_Int32 >& ErrorCodes_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , ErrorCodes(ErrorCodes_)
{ }

PDFExportException::PDFExportException(PDFExportException const & the_other): ::com::sun::star::uno::Exception(the_other), ErrorCodes(the_other.ErrorCodes) {}

PDFExportException::~PDFExportException() {}

PDFExportException & PDFExportException::operator =(PDFExportException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    ErrorCodes = the_other.ErrorCodes;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace task {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::task::PDFExportException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_seq_long = ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int32 > >::get();
        aMemberRefs[0] = rMemberType_seq_long.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.task.PDFExportException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::task::PDFExportException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::task::PDFExportException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TASK_PDFEXPORTEXCEPTION_HPP
