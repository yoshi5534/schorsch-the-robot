#ifndef INCLUDED_COM_SUN_STAR_TASK_NOMASTEREXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_TASK_NOMASTEREXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/task/NoMasterException.hdl"

#include "com/sun/star/task/PasswordRequestMode.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"

namespace com { namespace sun { namespace star { namespace task {

inline NoMasterException::NoMasterException() SAL_THROW( () )
    : ::com::sun::star::uno::RuntimeException()
    , Mode(::com::sun::star::task::PasswordRequestMode_PASSWORD_CREATE)
{ }

inline NoMasterException::NoMasterException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::com::sun::star::task::PasswordRequestMode& Mode_) SAL_THROW( () )
    : ::com::sun::star::uno::RuntimeException(Message_, Context_)
    , Mode(Mode_)
{ }

NoMasterException::NoMasterException(NoMasterException const & the_other): ::com::sun::star::uno::RuntimeException(the_other), Mode(the_other.Mode) {}

NoMasterException::~NoMasterException() {}

NoMasterException & NoMasterException::operator =(NoMasterException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::uno::RuntimeException::operator =(the_other);
    Mode = the_other.Mode;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace task {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::task::NoMasterException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::uno::RuntimeException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_com_sun_star_task_PasswordRequestMode = ::cppu::UnoType< ::com::sun::star::task::PasswordRequestMode >::get();
        aMemberRefs[0] = rMemberType_com_sun_star_task_PasswordRequestMode.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.task.NoMasterException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::task::NoMasterException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::task::NoMasterException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_TASK_NOMASTEREXCEPTION_HPP
