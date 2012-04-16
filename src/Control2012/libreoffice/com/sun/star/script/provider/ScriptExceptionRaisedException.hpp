#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_PROVIDER_SCRIPTEXCEPTIONRAISEDEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_PROVIDER_SCRIPTEXCEPTIONRAISEDEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/script/provider/ScriptExceptionRaisedException.hdl"

#include "com/sun/star/script/provider/ScriptErrorRaisedException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace script { namespace provider {

inline ScriptExceptionRaisedException::ScriptExceptionRaisedException() SAL_THROW( () )
    : ::com::sun::star::script::provider::ScriptErrorRaisedException()
    , exceptionType()
{ }

inline ScriptExceptionRaisedException::ScriptExceptionRaisedException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& scriptName_, const ::rtl::OUString& language_, const ::sal_Int32& lineNum_, const ::rtl::OUString& exceptionType_) SAL_THROW( () )
    : ::com::sun::star::script::provider::ScriptErrorRaisedException(Message_, Context_, scriptName_, language_, lineNum_)
    , exceptionType(exceptionType_)
{ }

ScriptExceptionRaisedException::ScriptExceptionRaisedException(ScriptExceptionRaisedException const & the_other): ::com::sun::star::script::provider::ScriptErrorRaisedException(the_other), exceptionType(the_other.exceptionType) {}

ScriptExceptionRaisedException::~ScriptExceptionRaisedException() {}

ScriptExceptionRaisedException & ScriptExceptionRaisedException::operator =(ScriptExceptionRaisedException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::script::provider::ScriptErrorRaisedException::operator =(the_other);
    exceptionType = the_other.exceptionType;
    return *this;
}

} } } } }

namespace com { namespace sun { namespace star { namespace script { namespace provider {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::provider::ScriptExceptionRaisedException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::script::provider::ScriptErrorRaisedException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.script.provider.ScriptExceptionRaisedException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::script::provider::ScriptExceptionRaisedException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::script::provider::ScriptExceptionRaisedException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_PROVIDER_SCRIPTEXCEPTIONRAISEDEXCEPTION_HPP
