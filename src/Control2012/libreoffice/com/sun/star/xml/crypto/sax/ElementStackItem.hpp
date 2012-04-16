#ifndef INCLUDED_COM_SUN_STAR_XML_CRYPTO_SAX_ELEMENTSTACKITEM_HPP
#define INCLUDED_COM_SUN_STAR_XML_CRYPTO_SAX_ELEMENTSTACKITEM_HPP

#include "sal/config.h"

#include "com/sun/star/xml/crypto/sax/ElementStackItem.hdl"

#include "com/sun/star/xml/sax/XAttributeList.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace xml { namespace crypto { namespace sax {

inline ElementStackItem::ElementStackItem() SAL_THROW( () )
    : isStartElementEvent(false)
    , elementName()
    , xAttributes()
{
}

inline ElementStackItem::ElementStackItem(const ::sal_Bool& isStartElementEvent_, const ::rtl::OUString& elementName_, const ::com::sun::star::uno::Reference< ::com::sun::star::xml::sax::XAttributeList >& xAttributes_) SAL_THROW( () )
    : isStartElementEvent(isStartElementEvent_)
    , elementName(elementName_)
    , xAttributes(xAttributes_)
{
}

} } } } } }

namespace com { namespace sun { namespace star { namespace xml { namespace crypto { namespace sax {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::xml::crypto::sax::ElementStackItem const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::xml::sax::XAttributeList > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.xml.crypto.sax.ElementStackItem", 0, 3, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::xml::crypto::sax::ElementStackItem const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::xml::crypto::sax::ElementStackItem >::get();
}

#endif // INCLUDED_COM_SUN_STAR_XML_CRYPTO_SAX_ELEMENTSTACKITEM_HPP
