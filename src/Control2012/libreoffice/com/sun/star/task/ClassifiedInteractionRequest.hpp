#ifndef INCLUDED_COM_SUN_STAR_TASK_CLASSIFIEDINTERACTIONREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_TASK_CLASSIFIEDINTERACTIONREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/task/ClassifiedInteractionRequest.hdl"

#include "com/sun/star/task/InteractionClassification.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace task {

inline ClassifiedInteractionRequest::ClassifiedInteractionRequest() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , Classification(::com::sun::star::task::InteractionClassification_ERROR)
{ }

inline ClassifiedInteractionRequest::ClassifiedInteractionRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , Classification(Classification_)
{ }

ClassifiedInteractionRequest::ClassifiedInteractionRequest(ClassifiedInteractionRequest const & the_other): ::com::sun::star::uno::Exception(the_other), Classification(the_other.Classification) {}

ClassifiedInteractionRequest::~ClassifiedInteractionRequest() {}

ClassifiedInteractionRequest & ClassifiedInteractionRequest::operator =(ClassifiedInteractionRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    Classification = the_other.Classification;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace task {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::task::ClassifiedInteractionRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_task_InteractionClassification = ::cppu::UnoType< ::com::sun::star::task::InteractionClassification >::get();
        aMemberRefs[0] = rMemberType_com_sun_star_task_InteractionClassification.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.task.ClassifiedInteractionRequest", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::task::ClassifiedInteractionRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::task::ClassifiedInteractionRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TASK_CLASSIFIEDINTERACTIONREQUEST_HPP
