#ifndef INCLUDED_COM_SUN_STAR_LOGGING_LOGRECORD_HPP
#define INCLUDED_COM_SUN_STAR_LOGGING_LOGRECORD_HPP

#include "sal/config.h"

#include "com/sun/star/logging/LogRecord.hdl"

#include "com/sun/star/util/DateTime.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace logging {

inline LogRecord::LogRecord() SAL_THROW( () )
    : LoggerName()
    , SourceClassName()
    , SourceMethodName()
    , Message()
    , LogTime()
    , SequenceNumber(0)
    , ThreadID()
    , Level(0)
{
}

inline LogRecord::LogRecord(const ::rtl::OUString& LoggerName_, const ::rtl::OUString& SourceClassName_, const ::rtl::OUString& SourceMethodName_, const ::rtl::OUString& Message_, const ::com::sun::star::util::DateTime& LogTime_, const ::sal_Int64& SequenceNumber_, const ::rtl::OUString& ThreadID_, const ::sal_Int32& Level_) SAL_THROW( () )
    : LoggerName(LoggerName_)
    , SourceClassName(SourceClassName_)
    , SourceMethodName(SourceMethodName_)
    , Message(Message_)
    , LogTime(LogTime_)
    , SequenceNumber(SequenceNumber_)
    , ThreadID(ThreadID_)
    , Level(Level_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace logging {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::logging::LogRecord const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::com::sun::star::util::DateTime >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int64 >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.logging.LogRecord", 0, 8, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::logging::LogRecord const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::logging::LogRecord >::get();
}

#endif // INCLUDED_COM_SUN_STAR_LOGGING_LOGRECORD_HPP
