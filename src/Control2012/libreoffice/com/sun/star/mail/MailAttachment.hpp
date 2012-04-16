#ifndef INCLUDED_COM_SUN_STAR_MAIL_MAILATTACHMENT_HPP
#define INCLUDED_COM_SUN_STAR_MAIL_MAILATTACHMENT_HPP

#include "sal/config.h"

#include "com/sun/star/mail/MailAttachment.hdl"

#include "com/sun/star/datatransfer/XTransferable.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace mail {

inline MailAttachment::MailAttachment() SAL_THROW( () )
    : Data()
    , ReadableName()
{
}

inline MailAttachment::MailAttachment(const ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::XTransferable >& Data_, const ::rtl::OUString& ReadableName_) SAL_THROW( () )
    : Data(Data_)
    , ReadableName(ReadableName_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace mail {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::mail::MailAttachment const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::com::sun::star::uno::Reference< ::com::sun::star::datatransfer::XTransferable > >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.mail.MailAttachment", 0, 2, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::mail::MailAttachment const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::mail::MailAttachment >::get();
}

#endif // INCLUDED_COM_SUN_STAR_MAIL_MAILATTACHMENT_HPP
