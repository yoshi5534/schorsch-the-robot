#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_PROVIDER_SCRIPTFRAMEWORKERROREXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_PROVIDER_SCRIPTFRAMEWORKERROREXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/script/provider/ScriptFrameworkErrorException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace script { namespace provider {

inline ScriptFrameworkErrorException::ScriptFrameworkErrorException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , scriptName()
    , language()
    , errorType(0)
{ }

inline ScriptFrameworkErrorException::ScriptFrameworkErrorException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& scriptName_, const ::rtl::OUString& language_, const ::sal_Int32& errorType_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , scriptName(scriptName_)
    , language(language_)
    , errorType(errorType_)
{ }

ScriptFrameworkErrorException::ScriptFrameworkErrorException(ScriptFrameworkErrorException const & the_other): ::com::sun::star::uno::Exception(the_other), scriptName(the_other.scriptName), language(the_other.language), errorType(the_other.errorType) {}

ScriptFrameworkErrorException::~ScriptFrameworkErrorException() {}

ScriptFrameworkErrorException & ScriptFrameworkErrorException::operator =(ScriptFrameworkErrorException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    scriptName = the_other.scriptName;
    language = the_other.language;
    errorType = the_other.errorType;
    return *this;
}

} } } } }

namespace com { namespace sun { namespace star { namespace script { namespace provider {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::provider::ScriptFrameworkErrorException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[3];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();
        aMemberRefs[1] = rMemberType_string.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_long = ::cppu::UnoType< ::sal_Int32 >::get();
        aMemberRefs[2] = rMemberType_long.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.script.provider.ScriptFrameworkErrorException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 3,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::script::provider::ScriptFrameworkErrorException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::script::provider::ScriptFrameworkErrorException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_PROVIDER_SCRIPTFRAMEWORKERROREXCEPTION_HPP
