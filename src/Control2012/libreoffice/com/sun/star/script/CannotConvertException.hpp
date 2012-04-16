#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_CANNOTCONVERTEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_CANNOTCONVERTEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/script/CannotConvertException.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/TypeClass.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace script {

inline CannotConvertException::CannotConvertException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , DestinationTypeClass(::com::sun::star::uno::TypeClass_VOID)
    , Reason(0)
    , ArgumentIndex(0)
{ }

inline CannotConvertException::CannotConvertException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::TypeClass& DestinationTypeClass_, const ::sal_Int32& Reason_, const ::sal_Int32& ArgumentIndex_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , DestinationTypeClass(DestinationTypeClass_)
    , Reason(Reason_)
    , ArgumentIndex(ArgumentIndex_)
{ }

CannotConvertException::CannotConvertException(CannotConvertException const & the_other): ::com::sun::star::uno::Exception(the_other), DestinationTypeClass(the_other.DestinationTypeClass), Reason(the_other.Reason), ArgumentIndex(the_other.ArgumentIndex) {}

CannotConvertException::~CannotConvertException() {}

CannotConvertException & CannotConvertException::operator =(CannotConvertException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    DestinationTypeClass = the_other.DestinationTypeClass;
    Reason = the_other.Reason;
    ArgumentIndex = the_other.ArgumentIndex;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::CannotConvertException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[3];
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_uno_TypeClass = ::cppu::UnoType< ::com::sun::star::uno::TypeClass >::get();
        aMemberRefs[0] = rMemberType_com_sun_star_uno_TypeClass.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_long = ::cppu::UnoType< ::sal_Int32 >::get();
        aMemberRefs[1] = rMemberType_long.getTypeLibType();
        aMemberRefs[2] = rMemberType_long.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.script.CannotConvertException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 3,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::script::CannotConvertException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::script::CannotConvertException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_CANNOTCONVERTEXCEPTION_HPP
