#ifndef INCLUDED_COM_SUN_STAR_BRIDGE_OLEAUTOMATION_PROPERTYPUTARGUMENT_HPP
#define INCLUDED_COM_SUN_STAR_BRIDGE_OLEAUTOMATION_PROPERTYPUTARGUMENT_HPP

#include "sal/config.h"

#include "com/sun/star/bridge/oleautomation/PropertyPutArgument.hdl"

#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace bridge { namespace oleautomation {

inline PropertyPutArgument::PropertyPutArgument() SAL_THROW( () )
    : Value()
{
}

inline PropertyPutArgument::PropertyPutArgument(const ::com::sun::star::uno::Any& Value_) SAL_THROW( () )
    : Value(Value_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace bridge { namespace oleautomation {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::bridge::oleautomation::PropertyPutArgument const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.bridge.oleautomation.PropertyPutArgument", 0, 1, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::bridge::oleautomation::PropertyPutArgument const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::bridge::oleautomation::PropertyPutArgument >::get();
}

#endif // INCLUDED_COM_SUN_STAR_BRIDGE_OLEAUTOMATION_PROPERTYPUTARGUMENT_HPP
