#ifndef INCLUDED_COM_SUN_STAR_AWT_GRID_GRIDINVALIDDATAEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_AWT_GRID_GRIDINVALIDDATAEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/awt/grid/GridInvalidDataException.hdl"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace awt { namespace grid {

inline GridInvalidDataException::GridInvalidDataException() SAL_THROW( () )
    : ::com::sun::star::uno::RuntimeException()
{ }

inline GridInvalidDataException::GridInvalidDataException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_) SAL_THROW( () )
    : ::com::sun::star::uno::RuntimeException(Message_, Context_)
{ }

GridInvalidDataException::GridInvalidDataException(GridInvalidDataException const & the_other): ::com::sun::star::uno::RuntimeException(the_other) {}

GridInvalidDataException::~GridInvalidDataException() {}

GridInvalidDataException & GridInvalidDataException::operator =(GridInvalidDataException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::RuntimeException::operator =(the_other);
    return *this;
}

} } } } }

namespace com { namespace sun { namespace star { namespace awt { namespace grid {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::grid::GridInvalidDataException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::uno::RuntimeException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.awt.grid.GridInvalidDataException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::grid::GridInvalidDataException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::grid::GridInvalidDataException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_GRID_GRIDINVALIDDATAEXCEPTION_HPP
