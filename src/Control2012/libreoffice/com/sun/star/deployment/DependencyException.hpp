#ifndef INCLUDED_COM_SUN_STAR_DEPLOYMENT_DEPENDENCYEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_DEPLOYMENT_DEPENDENCYEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/deployment/DependencyException.hdl"

#include "com/sun/star/xml/dom/XElement.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace deployment {

inline DependencyException::DependencyException() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , UnsatisfiedDependencies()
{ }

inline DependencyException::DependencyException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Reference< ::com::sun::star::xml::dom::XElement > >& UnsatisfiedDependencies_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , UnsatisfiedDependencies(UnsatisfiedDependencies_)
{ }

DependencyException::DependencyException(DependencyException const & the_other): ::com::sun::star::uno::Exception(the_other), UnsatisfiedDependencies(the_other.UnsatisfiedDependencies) {}

DependencyException::~DependencyException() {}

DependencyException & DependencyException::operator =(DependencyException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    UnsatisfiedDependencies = the_other.UnsatisfiedDependencies;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace deployment {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::deployment::DependencyException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_seq_com_sun_star_xml_dom_XElement = ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::uno::Reference< ::com::sun::star::xml::dom::XElement > > >::get();
        aMemberRefs[0] = rMemberType_seq_com_sun_star_xml_dom_XElement.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.deployment.DependencyException", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::deployment::DependencyException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::deployment::DependencyException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DEPLOYMENT_DEPENDENCYEXCEPTION_HPP
