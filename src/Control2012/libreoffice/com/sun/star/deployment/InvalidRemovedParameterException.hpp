#ifndef INCLUDED_COM_SUN_STAR_DEPLOYMENT_INVALIDREMOVEDPARAMETEREXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_DEPLOYMENT_INVALIDREMOVEDPARAMETEREXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/deployment/InvalidRemovedParameterException.hdl"

#include "com/sun/star/deployment/XPackage.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace deployment {

inline InvalidRemovedParameterException::InvalidRemovedParameterException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , PreviousValue(false)
    , Extension()
{ }

inline InvalidRemovedParameterException::InvalidRemovedParameterException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::sal_Bool& PreviousValue_, const ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackage >& Extension_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , PreviousValue(PreviousValue_)
    , Extension(Extension_)
{ }

InvalidRemovedParameterException::InvalidRemovedParameterException(InvalidRemovedParameterException const & the_other): ::com::sun::star::uno::Exception(the_other), PreviousValue(the_other.PreviousValue), Extension(the_other.Extension) {}

InvalidRemovedParameterException::~InvalidRemovedParameterException() {}

InvalidRemovedParameterException & InvalidRemovedParameterException::operator =(InvalidRemovedParameterException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    PreviousValue = the_other.PreviousValue;
    Extension = the_other.Extension;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace deployment {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::deployment::InvalidRemovedParameterException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[2];
        const ::com::sun::star::uno::Type& rMemberType_boolean = ::cppu::UnoType< ::sal_Bool >::get();
        aMemberRefs[0] = rMemberType_boolean.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_deployment_XPackage = ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::deployment::XPackage > >::get();
        aMemberRefs[1] = rMemberType_com_sun_star_deployment_XPackage.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.deployment.InvalidRemovedParameterException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 2,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::deployment::InvalidRemovedParameterException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::deployment::InvalidRemovedParameterException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DEPLOYMENT_INVALIDREMOVEDPARAMETEREXCEPTION_HPP
