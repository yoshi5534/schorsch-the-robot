#ifndef INCLUDED_COM_SUN_STAR_EMBED_USEBACKUPEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_EMBED_USEBACKUPEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/embed/UseBackupException.hdl"

#include "com/sun/star/io/IOException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace embed {

inline UseBackupException::UseBackupException() SAL_THROW( () )
    : ::com::sun::star::io::IOException()
    , TemporaryFileURL()
{ }

inline UseBackupException::UseBackupException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& TemporaryFileURL_) SAL_THROW( () )
    : ::com::sun::star::io::IOException(Message_, Context_)
    , TemporaryFileURL(TemporaryFileURL_)
{ }

UseBackupException::UseBackupException(UseBackupException const & the_other): ::com::sun::star::io::IOException(the_other), TemporaryFileURL(the_other.TemporaryFileURL) {}

UseBackupException::~UseBackupException() {}

UseBackupException & UseBackupException::operator =(UseBackupException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::io::IOException::operator =(the_other);
    TemporaryFileURL = the_other.TemporaryFileURL;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace embed {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::embed::UseBackupException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::io::IOException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_string = ::cppu::UnoType< ::rtl::OUString >::get();
        aMemberRefs[0] = rMemberType_string.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.embed.UseBackupException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::embed::UseBackupException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::embed::UseBackupException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_EMBED_USEBACKUPEXCEPTION_HPP
