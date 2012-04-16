#ifndef INCLUDED_COM_SUN_STAR_XML_SAX_SAXPARSEEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_XML_SAX_SAXPARSEEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/xml/sax/SAXParseException.hdl"

#include "com/sun/star/xml/sax/SAXException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace xml { namespace sax {

inline SAXParseException::SAXParseException() SAL_THROW( () )
    : ::com::sun::star::xml::sax::SAXException()
    , PublicId()
    , SystemId()
    , LineNumber(0)
    , ColumnNumber(0)
{ }

inline SAXParseException::SAXParseException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Any& WrappedException_, const ::rtl::OUString& PublicId_, const ::rtl::OUString& SystemId_, const ::sal_Int32& LineNumber_, const ::sal_Int32& ColumnNumber_) SAL_THROW( () )
    : ::com::sun::star::xml::sax::SAXException(Message_, Context_, WrappedException_)
    , PublicId(PublicId_)
    , SystemId(SystemId_)
    , LineNumber(LineNumber_)
    , ColumnNumber(ColumnNumber_)
{ }

SAXParseException::SAXParseException(SAXParseException const & the_other): ::com::sun::star::xml::sax::SAXException(the_other), PublicId(the_other.PublicId), SystemId(the_other.SystemId), LineNumber(the_other.LineNumber), ColumnNumber(the_other.ColumnNumber) {}

SAXParseException::~SAXParseException() {}

SAXParseException & SAXParseException::operator =(SAXParseException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::xml::sax::SAXException::operator =(the_other);
    PublicId = the_other.PublicId;
    SystemId = the_other.SystemId;
    LineNumber = the_other.LineNumber;
    ColumnNumber = the_other.ColumnNumber;
    return *this;
}

} } } } }

namespace com { namespace sun { namespace star { namespace xml { namespace sax {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::sax::SAXParseException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::xml::sax::SAXException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[4];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();
        aMemberRefs[1] = rMemberType_string.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_long = ::cppu::UnoType< ::sal_Int32 >::get();
        aMemberRefs[2] = rMemberType_long.getTypeLibType();
        aMemberRefs[3] = rMemberType_long.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.xml.sax.SAXParseException", rBaseType.getTypeLibType(), 4,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::xml::sax::SAXParseException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::xml::sax::SAXParseException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_XML_SAX_SAXPARSEEXCEPTION_HPP
