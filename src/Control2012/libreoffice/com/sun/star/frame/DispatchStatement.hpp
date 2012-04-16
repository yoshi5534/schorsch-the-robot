#ifndef INCLUDED_COM_SUN_STAR_FRAME_DISPATCHSTATEMENT_HPP
#define INCLUDED_COM_SUN_STAR_FRAME_DISPATCHSTATEMENT_HPP

#include "sal/config.h"

#include "com/sun/star/frame/DispatchStatement.hdl"

#include "com/sun/star/beans/PropertyValue.hpp"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace frame {

inline DispatchStatement::DispatchStatement() SAL_THROW( () )
    : aCommand()
    , aTarget()
    , aArgs()
    , nFlags(0)
    , bIsComment(false)
{
}

inline DispatchStatement::DispatchStatement(const ::rtl::OUString& aCommand_, const ::rtl::OUString& aTarget_, const ::com::sun::star::uno::Sequence< ::com::sun::star::beans::PropertyValue >& aArgs_, const ::sal_Int32& nFlags_, const ::sal_Bool& bIsComment_) SAL_THROW( () )
    : aCommand(aCommand_)
    , aTarget(aTarget_)
    , aArgs(aArgs_)
    , nFlags(nFlags_)
    , bIsComment(bIsComment_)
{
}

} } } }

namespace com { namespace sun { namespace star { namespace frame {

inline ::com::sun::star::uno::Type const & cppu_detail_getUnoType(::com::sun::star::frame::DispatchStatement const *) {
    //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
    static ::typelib_TypeDescriptionReference * the_type = 0;
    if (the_type == 0) {
        ::typelib_TypeDescriptionReference * the_members[] = {
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::rtl::OUString >::get().getTypeLibType(),
            ::cppu::UnoType< ::cppu::UnoSequenceType< ::com::sun::star::beans::PropertyValue > >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Int32 >::get().getTypeLibType(),
            ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
        ::typelib_static_struct_type_init(&the_type, "com.sun.star.frame.DispatchStatement", 0, 5, the_members, 0);
    }
    return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
}

} } } }

inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::frame::DispatchStatement const *) SAL_THROW(()) {
    return ::cppu::UnoType< ::com::sun::star::frame::DispatchStatement >::get();
}

#endif // INCLUDED_COM_SUN_STAR_FRAME_DISPATCHSTATEMENT_HPP
