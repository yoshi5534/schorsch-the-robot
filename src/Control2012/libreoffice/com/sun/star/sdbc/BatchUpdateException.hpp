#ifndef INCLUDED_COM_SUN_STAR_SDBC_BATCHUPDATEEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_SDBC_BATCHUPDATEEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/sdbc/BatchUpdateException.hdl"

#include "com/sun/star/sdbc/SQLException.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "osl/mutex.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace sdbc {

inline BatchUpdateException::BatchUpdateException() SAL_THROW( () )
    : ::com::sun::star::sdbc::SQLException()
    , UpdateCounts()
{ }

inline BatchUpdateException::BatchUpdateException(const ::rtl::OUString& Message_, const ::com::sun::star::uno::Reference< ::com::sun::star::uno::XInterface >& Context_, const ::rtl::OUString& SQLState_, const ::sal_Int32& ErrorCode_, const ::com::sun::star::uno::Any& NextException_, const ::com::sun::star::uno::Sequence< ::sal_Int32 >& UpdateCounts_) SAL_THROW( () )
    : ::com::sun::star::sdbc::SQLException(Message_, Context_, SQLState_, ErrorCode_, NextException_)
    , UpdateCounts(UpdateCounts_)
{ }

BatchUpdateException::BatchUpdateException(BatchUpdateException const & the_other): ::com::sun::star::sdbc::SQLException(the_other), UpdateCounts(the_other.UpdateCounts) {}

BatchUpdateException::~BatchUpdateException() {}

BatchUpdateException & BatchUpdateException::operator =(BatchUpdateException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::com::sun::star::sdbc::SQLException::operator =(the_other);
    UpdateCounts = the_other.UpdateCounts;
    return *this;
}

} } } }

namespace com { namespace sun { namespace star { namespace sdbc {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::sdbc::BatchUpdateException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::com::sun::star::uno::Type& rBaseType = ::cppu::UnoType< const ::com::sun::star::sdbc::SQLException >::get();

        typelib_TypeDescriptionReference * aMemberRefs[1];
        const ::com::sun::star::uno::Type& rMemberType_seq_long = ::cppu::UnoType< ::cppu::UnoSequenceType< ::sal_Int32 > >::get();
        aMemberRefs[0] = rMemberType_seq_long.getTypeLibType();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.sdbc.BatchUpdateException", rBaseType.getTypeLibType(), 1,  aMemberRefs );
    }
    return * reinterpret_cast< const ::com::sun::star::uno::Type * >( &the_type );
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::sdbc::BatchUpdateException const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::sdbc::BatchUpdateException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SDBC_BATCHUPDATEEXCEPTION_HPP
