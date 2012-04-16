#ifndef INCLUDED_COM_SUN_STAR_DRAWING_FRAMEWORK_CONFIGURATIONCHANGEEVENT_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_FRAMEWORK_CONFIGURATIONCHANGEEVENT_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/framework/ConfigurationChangeEvent.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/drawing/framework/XResourceId.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/drawing/framework/XConfiguration.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace drawing { namespace framework {

inline ConfigurationChangeEvent::ConfigurationChangeEvent() SAL_THROW( () )
    : ::com::sun::star::lang::EventObject()
    , Type()
    , Configuration()
    , ResourceId()
    , ResourceObject()
    , UserData()
{
}

inline ConfigurationChangeEvent::ConfigurationChangeEvent(const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Source_, const ::rtl::OUString& Type_, const ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XConfiguration >& Configuration_, const ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResourceId >& ResourceId_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& ResourceObject_, const ::com::sun::star::uno::Any& UserData_) SAL_THROW( () )
    : ::com::sun::star::lang::EventObject(Source_)
    , Type(Type_)
    , Configuration(Configuration_)
    , ResourceId(ResourceId_)
    , ResourceObject(ResourceObject_)
    , UserData(UserData_)
{
}

} } } } }

namespace com { namespace sun { namespace star { namespace drawing { namespace framework {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::framework::ConfigurationChangeEvent const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XConfiguration > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::drawing::framework::XResourceId > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Any >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.drawing.framework.ConfigurationChangeEvent", ::cppu::UnoType< ::com::sun::star::lang::EventObject >::get().getTypeLibType(), 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::framework::ConfigurationChangeEvent const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::framework::ConfigurationChangeEvent >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_FRAMEWORK_CONFIGURATIONCHANGEEVENT_HPP
