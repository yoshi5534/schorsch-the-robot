#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_BASICERROREXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_BASICERROREXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/script/BasicErrorException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace script {

inline BasicErrorException::BasicErrorException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , ErrorCode(0)
    , ErrorMessageArgument()
{ }

inline BasicErrorException::BasicErrorException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::sal_Int32& ErrorCode_, const ::rtl::OUString& ErrorMessageArgument_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , ErrorCode(ErrorCode_)
    , ErrorMessageArgument(ErrorMessageArgument_)
{ }

BasicErrorException::BasicErrorException(BasicErrorException const & the_other): ::com::sun::star::uno::Exception(the_other), ErrorCode(the_other.ErrorCode), ErrorMessageArgument(the_other.ErrorMessageArgument) {}

BasicErrorException::~BasicErrorException() {}

BasicErrorException & BasicErrorException::operator =(BasicErrorException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    ErrorCode = the_other.ErrorCode;
    ErrorMessageArgument = the_other.ErrorMessageArgument;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::BasicErrorException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[2];
        const ::com::sun::star::uno::Type& rMemberType_long = ::cppu::UnoType< ::sal_Int32 >::get();
        aMemberRefs[0] = rMemberType_long.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[1] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.script.BasicErrorException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 2,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::script::BasicErrorException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::script::BasicErrorException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_BASICERROREXCEPTION_HPP
