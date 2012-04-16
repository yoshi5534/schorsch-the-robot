#ifndef INCLUDED_COM_SUN_STAR_AWT_TREE_EXPANDVETOEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_AWT_TREE_EXPANDVETOEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/awt/tree/ExpandVetoException.hdl"

#include "com/sun/star/awt/tree/TreeExpansionEvent.hpp"
#include "com/sun/star/util/VetoException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace awt { namespace tree {

inline ExpandVetoException::ExpandVetoException() SAL_THROW( () )
    : ::com::sun::star::util::VetoException()
    , Event()
{ }

inline ExpandVetoException::ExpandVetoException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::awt::tree::TreeExpansionEvent& Event_) SAL_THROW( () )
    : ::com::sun::star::util::VetoException(Message_, Context_)
    , Event(Event_)
{ }

ExpandVetoException::ExpandVetoException(ExpandVetoException const & the_other): ::com::sun::star::util::VetoException(the_other), Event(the_other.Event) {}

ExpandVetoException::~ExpandVetoException() {}

ExpandVetoException & ExpandVetoException::operator =(ExpandVetoException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::util::VetoException::operator =(the_other);
    Event = the_other.Event;
    return *this;
}

} } } } }

namespace com { namespace sun { namespace star { namespace awt { namespace tree {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::awt::tree::ExpandVetoException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::util::VetoException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_awt_tree_TreeExpansionEvent = ::cppu::UnoType< ::com::sun::star::awt::tree::TreeExpansionEvent >::get();
        aMemberRefs[0] = rMemberType_com_sun_star_awt_tree_TreeExpansionEvent.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.awt.tree.ExpandVetoException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::awt::tree::ExpandVetoException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::awt::tree::ExpandVetoException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_AWT_TREE_EXPANDVETOEXCEPTION_HPP
