#ifndef INCLUDED_COM_SUN_STAR_DRAWING_GRAPHICFILTERREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_GRAPHICFILTERREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/drawing/GraphicFilterRequest.hdl"

#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace drawing {

inline GraphicFilterRequest::GraphicFilterRequest() SAL_THROW( () )
    : ::com::sun::star::uno::Exception()
    , ErrCode(0)
{ }

inline GraphicFilterRequest::GraphicFilterRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::sal_Int32& ErrCode_) SAL_THROW( () )
    : ::com::sun::star::uno::Exception(Message_, Context_)
    , ErrCode(ErrCode_)
{ }

GraphicFilterRequest::GraphicFilterRequest(GraphicFilterRequest const & the_other): ::com::sun::star::uno::Exception(the_other), ErrCode(the_other.ErrCode) {}

GraphicFilterRequest::~GraphicFilterRequest() {}

GraphicFilterRequest & GraphicFilterRequest::operator =(GraphicFilterRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::Exception::operator =(the_other);
    ErrCode = the_other.ErrCode;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace drawing {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::drawing::GraphicFilterRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_long = ::cppu::UnoType< ::sal_Int32 >::get();
        aMemberRefs[0] = rMemberType_long.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.drawing.GraphicFilterRequest", * ::typelib_static_type_getByTypeClass( typelib_TypeClass_EXCEPTION ), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::drawing::GraphicFilterRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::drawing::GraphicFilterRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_DRAWING_GRAPHICFILTERREQUEST_HPP
