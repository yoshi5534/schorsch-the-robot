#ifndef INCLUDED_COM_SUN_STAR_SDBC_DATATRUNCATION_HPP
#define INCLUDED_COM_SUN_STAR_SDBC_DATATRUNCATION_HPP

#include "sal/config.h"

#include "com/sun/star/sdbc/DataTruncation.hdl"

#include "com/sun/star/sdbc/SQLWarning.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace sdbc {

inline DataTruncation::DataTruncation() SAL_THROW( () )
    : ::com::sun::star::sdbc::SQLWarning()
    , Index(0)
    , IsParameter(false)
    , DuringRead(false)
    , DataSize(0)
    , TransferSize(0)
{ }

inline DataTruncation::DataTruncation(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& SQLState_, const ::sal_Int32& ErrorCode_, const ::com::sun::star::uno::Any& NextException_, const ::sal_Int32& Index_, const ::sal_Bool& IsParameter_, const ::sal_Bool& DuringRead_, const ::sal_Int32& DataSize_, const ::sal_Int32& TransferSize_) SAL_THROW( () )
    : ::com::sun::star::sdbc::SQLWarning(Message_, Context_, SQLState_, ErrorCode_, NextException_)
    , Index(Index_)
    , IsParameter(IsParameter_)
    , DuringRead(DuringRead_)
    , DataSize(DataSize_)
    , TransferSize(TransferSize_)
{ }

DataTruncation::DataTruncation(DataTruncation const & the_other): ::com::sun::star::sdbc::SQLWarning(the_other), Index(the_other.Index), IsParameter(the_other.IsParameter), DuringRead(the_other.DuringRead), DataSize(the_other.DataSize), TransferSize(the_other.TransferSize) {}

DataTruncation::~DataTruncation() {}

DataTruncation & DataTruncation::operator =(DataTruncation const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::sdbc::SQLWarning::operator =(the_other);
    Index = the_other.Index;
    IsParameter = the_other.IsParameter;
    DuringRead = the_other.DuringRead;
    DataSize = the_other.DataSize;
    TransferSize = the_other.TransferSize;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace sdbc {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sdbc::DataTruncation const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::sdbc::SQLWarning >::get();

        typelib_TypeDescriptionReference * aMemberRefs[5];
        const ::com::sun::star::uno::Type& rMemberType_long = ::cppu::UnoType< ::sal_Int32 >::get();
        aMemberRefs[0] = rMemberType_long.getTypeLibType();
        const ::com::sun::star::uno::Type& rMemberType_boolean = ::cppu::UnoType< ::sal_Bool >::get();
        aMemberRefs[1] = rMemberType_boolean.getTypeLibType();
        aMemberRefs[2] = rMemberType_boolean.getTypeLibType();
        aMemberRefs[3] = rMemberType_long.getTypeLibType();
        aMemberRefs[4] = rMemberType_long.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.sdbc.DataTruncation", rBaseType.getTypeLibType(), 5,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sdbc::DataTruncation const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sdbc::DataTruncation >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SDBC_DATATRUNCATION_HPP
