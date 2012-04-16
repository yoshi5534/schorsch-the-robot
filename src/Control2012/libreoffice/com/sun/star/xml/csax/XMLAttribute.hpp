#ifndef INCLUDED_COM_SUN_STAR_XML_CSAX_XMLATTRIBUTE_HPP
#define INCLUDED_COM_SUN_STAR_XML_CSAX_XMLATTRIBUTE_HPP

#include "sal/config.h"

#include "com/sun/star/xml/csax/XMLAttribute.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace xml { namespace csax {

inline XMLAttribute::XMLAttribute() SAL_THROW( () )
    : sName()
    , sValue()
{
}

inline XMLAttribute::XMLAttribute(const ::rtl::OUString& sName_, const ::rtl::OUString& sValue_) SAL_THROW( () )
    : sName(sName_)
    , sValue(sValue_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace xml { namespace csax {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::csax::XMLAttribute const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.xml.csax.XMLAttribute", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::xml::csax::XMLAttribute const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::xml::csax::XMLAttribute >::get();
}

#endif // INCLUDED_COM_SUN_STAR_XML_CSAX_XMLATTRIBUTE_HPP
