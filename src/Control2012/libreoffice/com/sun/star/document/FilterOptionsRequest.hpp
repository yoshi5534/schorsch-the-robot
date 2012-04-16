#ifndef INCLUDED_COM_SUN_STAR_DOCUMENT_FILTEROPTIONSREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_DOCUMENT_FILTEROPTIONSREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/document/FilterOptionsRequest.hdl"

#include "com/sun/star/beans/PropertyValue.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/frame/XModel.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace document {

inline FilterOptionsRequest::FilterOptionsRequest() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , rModel()
    , rProperties()
{ }

inline FilterOptionsRequest::FilterOptionsRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Reference< ::com::sun::star::frame::XModel >& rModel_, const ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue >& rProperties_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , rModel(rModel_)
    , rProperties(rProperties_)
{ }

FilterOptionsRequest::FilterOptionsRequest(FilterOptionsRequest const & the_other): ::com::sun::star::uno::Exception(the_other), rModel(the_other.rModel), rProperties(the_other.rProperties) {}

FilterOptionsRequest::~FilterOptionsRequest() {}

FilterOptionsRequest & FilterOptionsRequest::operator =(FilterOptionsRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    rModel = the_other.rModel;
    rProperties = the_other.rProperties;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace document {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::document::FilterOptionsRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[2];
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_frame_XModel = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::frame::XModel > >::get();
        aMemberRefs[0] = rMemberType_com_sun_star_frame_XModel.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_seq_com_sun_star_beans_PropertyValue = ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::beans::PropertyValue > >::get();
        aMemberRefs[1] = rMemberType_seq_com_sun_star_beans_PropertyValue.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.document.FilterOptionsRequest", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 2,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::document::FilterOptionsRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::document::FilterOptionsRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DOCUMENT_FILTEROPTIONSREQUEST_HPP
