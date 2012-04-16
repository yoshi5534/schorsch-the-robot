#ifndef INCLUDED_COM_SUN_STAR_RDF_STATEMENT_HPP
#define INCLUDED_COM_SUN_STAR_RDF_STATEMENT_HPP

#include "sal/config.h"

#include "com/sun/star/rdf/Statement.hdl"

#include "com/sun/star/rdf/XNode.hpp"
#include "com/sun/star/rdf/XResource.hpp"
#include "com/sun/star/rdf/XURI.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace rdf {

inline Statement::Statement() SAL_THROW( () )
    : Subject()
    , Predicate()
    , Object()
    , Graph()
{
}

inline Statement::Statement(const ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XResource >& Subject_, const ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XURI >& Predicate_, const ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XNode >& Object_, const ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XURI >& Graph_) SAL_THROW( () )
    : Subject(Subject_)
    , Predicate(Predicate_)
    , Object(Object_)
    , Graph(Graph_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace rdf {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::rdf::Statement const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XResource > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XURI > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XNode > >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::rdf::XURI > >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.rdf.Statement", 0, 4, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::rdf::Statement const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::rdf::Statement >::get();
}

#endif // INCLUDED_COM_SUN_STAR_RDF_STATEMENT_HPP
