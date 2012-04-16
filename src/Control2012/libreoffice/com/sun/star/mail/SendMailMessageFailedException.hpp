#ifndef INCLUDED_COM_SUN_STAR_MAIL_SENDMAILMESSAGEFAILEDEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_MAIL_SENDMAILMESSAGEFAILEDEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/mail/SendMailMessageFailedException.hdl"

#include "com/sun/star/mail/MailException.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace mail {

inline SendMailMessageFailedException::SendMailMessageFailedException() SAL_THROW( () )
    : ::com::sun::star::mail::MailException()
    , InvalidAddresses()
    , ValidSentAddresses()
    , ValidUnsentAddresses()
{ }

inline SendMailMessageFailedException::SendMailMessageFailedException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& InvalidAddresses_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& ValidSentAddresses_, const ::com::sun::star::uno::Sequence< ::rtl::OUString >& ValidUnsentAddresses_) SAL_THROW( () )
    : ::com::sun::star::mail::MailException(Message_, Context_)
    , InvalidAddresses(InvalidAddresses_)
    , ValidSentAddresses(ValidSentAddresses_)
    , ValidUnsentAddresses(ValidUnsentAddresses_)
{ }

SendMailMessageFailedException::SendMailMessageFailedException(SendMailMessageFailedException const & the_other): ::com::sun::star::mail::MailException(the_other), InvalidAddresses(the_other.InvalidAddresses), ValidSentAddresses(the_other.ValidSentAddresses), ValidUnsentAddresses(the_other.ValidUnsentAddresses) {}

SendMailMessageFailedException::~SendMailMessageFailedException() {}

SendMailMessageFailedException & SendMailMessageFailedException::operator =(SendMailMessageFailedException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::mail::MailException::operator =(the_other);
    InvalidAddresses = the_other.InvalidAddresses;
    ValidSentAddresses = the_other.ValidSentAddresses;
    ValidUnsentAddresses = the_other.ValidUnsentAddresses;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace mail {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::mail::SendMailMessageFailedException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::mail::MailException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[3];
        const ::com::sun::star::uno::Type& rMemberType_seq_string = ::cppu::UnoType< ::cppu::UnoSequenceType< ::rtl::OUString > >::get();
        aMemberRefs[0] = rMemberType_seq_string.getTypeLibType();
        aMemberRefs[1] = rMemberType_seq_string.getTypeLibType();
        aMemberRefs[2] = rMemberType_seq_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.mail.SendMailMessageFailedException", rBaseType.getTypeLibType(), 3,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::mail::SendMailMessageFailedException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::mail::SendMailMessageFailedException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_MAIL_SENDMAILMESSAGEFAILEDEXCEPTION_HPP
