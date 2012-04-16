#ifndef INCLUDED_COM_SUN_STAR_XML_SAX_INPUTSOURCE_HPP
#define INCLUDED_COM_SUN_STAR_XML_SAX_INPUTSOURCE_HPP

#include "sal/config.h"

#include "com/sun/star/xml/sax/InputSource.hdl"

#include "com/sun/star/io/XInputStream.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace xml { namespace sax {

inline InputSource::InputSource() SAL_THROW( () )
    : aInputStream()
    , sEncoding()
    , sPublicId()
    , sSystemId()
{
}

inline InputSource::InputSource(const ::com::sun::star::uno::Reference< ::com::sun::star::io::XInputStream >& aInputStream_, const ::rtl::OUString& sEncoding_, const ::rtl::OUString& sPublicId_, const ::rtl::OUString& sSystemId_) SAL_THROW( () )
    : aInputStream(aInputStream_)
    , sEncoding(sEncoding_)
    , sPublicId(sPublicId_)
    , sSystemId(sSystemId_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace xml { namespace sax {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::sax::InputSource const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::io::XInputStream > >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.xml.sax.InputSource", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::xml::sax::InputSource const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::xml::sax::InputSource >::get();
}

#endif // INCLUDED_COM_SUN_STAR_XML_SAX_INPUTSOURCE_HPP
