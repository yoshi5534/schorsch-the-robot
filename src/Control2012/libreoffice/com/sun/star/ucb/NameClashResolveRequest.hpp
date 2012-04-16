#ifndef INCLUDED_COM_SUN_STAR_UCB_NAMECLASHRESOLVEREQUEST_HPP
#define INCLUDED_COM_SUN_STAR_UCB_NAMECLASHRESOLVEREQUEST_HPP

#include "sal/config.h"

#include "com/sun/star/ucb/NameClashResolveRequest.hdl"

#include "com/sun/star/task/ClassifiedInteractionRequest.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace ucb {

inline NameClashResolveRequest::NameClashResolveRequest() SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest()
    , TargetFolderURL()
    , ClashingName()
    , ProposedNewName()
{ }

inline NameClashResolveRequest::NameClashResolveRequest(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::InteractionClassification& Classification_, const ::rtl::OUString& TargetFolderURL_, const ::rtl::OUString& ClashingName_, const ::rtl::OUString& ProposedNewName_) SAL_THROW( () )
    : ::com::sun::star::task::ClassifiedInteractionRequest(Message_, Context_, Classification_)
    , TargetFolderURL(TargetFolderURL_)
    , ClashingName(ClashingName_)
    , ProposedNewName(ProposedNewName_)
{ }

NameClashResolveRequest::NameClashResolveRequest(NameClashResolveRequest const & the_other): ::com::sun::star::task::ClassifiedInteractionRequest(the_other), TargetFolderURL(the_other.TargetFolderURL), ClashingName(the_other.ClashingName), ProposedNewName(the_other.ProposedNewName) {}

NameClashResolveRequest::~NameClashResolveRequest() {}

NameClashResolveRequest & NameClashResolveRequest::operator =(NameClashResolveRequest const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::task::ClassifiedInteractionRequest::operator =(the_other);
    TargetFolderURL = the_other.TargetFolderURL;
    ClashingName = the_other.ClashingName;
    ProposedNewName = the_other.ProposedNewName;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace ucb {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::ucb::NameClashResolveRequest const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::task::ClassifiedInteractionRequest >::get();

        typelib_TypeDescriptionReference * aMemberRefs[3];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();
        aMemberRefs[1] = rMemberType_string.getTypeLibType();
        aMemberRefs[2] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.ucb.NameClashResolveRequest", rBaseType.getTypeLibType(), 3,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::ucb::NameClashResolveRequest const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::ucb::NameClashResolveRequest >::get();
}

#endif // INCLUDED_COM_SUN_STAR_UCB_NAMECLASHRESOLVEREQUEST_HPP
