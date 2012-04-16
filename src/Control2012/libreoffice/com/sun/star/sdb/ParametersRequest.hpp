#ifndef INCLUDED_COM_SUN_STAR_SDB_PARAMETERSREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_SDB_PARAMETERSREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/sdb/ParametersRequest.hdl"

#include "com/sun/star/sdbc/XConnection.hpp"
#include "com/sun/star/task/ClassifiedInteractionRequest.hpp"
#include "com/sun/star/container/XIndexAccess.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace sdb {

inline ParametersRequest::ParametersRequest() SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest()
    , Parameters()
    , Connection()
{ }

inline ParametersRequest::ParametersRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::com::sun::star::uno::Reference< ::com::sun::star::container::XIndexAccess >& Parameters_, const ::com::sun::star::uno::Reference< ::com::sun::star::sdbc::XConnection >& Connection_) SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest(Message_, Context_, Classification_)
    , Parameters(Parameters_)
    , Connection(Connection_)
{ }

ParametersRequest::ParametersRequest(ParametersRequest const & the_other): ::com::sun::star::task::ClassifiedInteractionRequest(the_other), Parameters(the_other.Parameters), Connection(the_other.Connection) {}

ParametersRequest::~ParametersRequest() {}

ParametersRequest & ParametersRequest::operator =(ParametersRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::ClassifiedInteractionRequest::operator =(the_other);
    Parameters = the_other.Parameters;
    Connection = the_other.Connection;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace sdb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sdb::ParametersRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::ClassifiedInteractionRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[2];
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_container_XIndexAccess = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::container::XIndexAccess > >::get();
        aMemberRefs[0] = rMemberType_com_sun_star_container_XIndexAccess.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_sdbc_XConnection = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::sdbc::XConnection > >::get();
        aMemberRefs[1] = rMemberType_com_sun_star_sdbc_XConnection.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.sdb.ParametersRequest", rBaseType.getTypeLibType(), 2,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sdb::ParametersRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sdb::ParametersRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SDB_PARAMETERSREQUEST_HPP
