#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_PROVIDER_SCRIPTERRORRAISEDEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_PROVIDER_SCRIPTERRORRAISEDEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/script/provider/ScriptErrorRaisedException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace script { namespace provider {

inline ScriptErrorRaisedException::ScriptErrorRaisedException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , scriptName()
    , language()
    , lineNum(0)
{ }

inline ScriptErrorRaisedException::ScriptErrorRaisedException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& scriptName_, const ::rtl::OUString& language_, const ::sal_Int32& lineNum_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , scriptName(scriptName_)
    , language(language_)
    , lineNum(lineNum_)
{ }

ScriptErrorRaisedException::ScriptErrorRaisedException(ScriptErrorRaisedException const & the_other): ::com::sun::star::uno::Exception(the_other), scriptName(the_other.scriptName), language(the_other.language), lineNum(the_other.lineNum) {}

ScriptErrorRaisedException::~ScriptErrorRaisedException() {}

ScriptErrorRaisedException & ScriptErrorRaisedException::operator =(ScriptErrorRaisedException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    scriptName = the_other.scriptName;
    language = the_other.language;
    lineNum = the_other.lineNum;
    return *this;
}

} } } } }

namespace com { namespace sun { namespace star { namespace script { namespace provider {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::provider::ScriptErrorRaisedException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[3];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();
        aMemberRefs[1] = rMemberType_string.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_long = ::cppu::UnoType< ::sal_Int32 >::get();
        aMemberRefs[2] = rMemberType_long.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.script.provider.ScriptErrorRaisedException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 3,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::script::provider::ScriptErrorRaisedException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::script::provider::ScriptErrorRaisedException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_PROVIDER_SCRIPTERRORRAISEDEXCEPTION_HPP
