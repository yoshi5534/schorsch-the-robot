#ifndef INCLUDED_COM_SUN_STAR_SCRIPT_MODULESIZEEXCEEDEDREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_SCRIPT_MODULESIZEEXCEEDEDREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/script/ModuleSizeExceededRequest.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace script {

inline ModuleSizeExceededRequest::ModuleSizeExceededRequest() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , Names()
{ }

inline ModuleSizeExceededRequest::ModuleSizeExceededRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& Names_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , Names(Names_)
{ }

ModuleSizeExceededRequest::ModuleSizeExceededRequest(ModuleSizeExceededRequest const & the_other): ::com::sun::star::uno::Exception(the_other), Names(the_other.Names) {}

ModuleSizeExceededRequest::~ModuleSizeExceededRequest() {}

ModuleSizeExceededRequest & ModuleSizeExceededRequest::operator =(ModuleSizeExceededRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    Names = the_other.Names;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace script {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::script::ModuleSizeExceededRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_seq_string = ::cppu::UnoType< ::cppu::UnoSequenceType< ::rtl::OUString > >::get();
        aMemberRefs[0] = rMemberType_seq_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.script.ModuleSizeExceededRequest", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::script::ModuleSizeExceededRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::script::ModuleSizeExceededRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SCRIPT_MODULESIZEEXCEEDEDREQUEST_HPP
