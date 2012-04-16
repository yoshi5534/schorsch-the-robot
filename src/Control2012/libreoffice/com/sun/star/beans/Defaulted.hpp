#ifndef INCLUDED_COM_SUN_STAR_BEANS_DEFAULTED_HPP
#define INCLUDED_COM_SUN_STAR_BEANS_DEFAULTED_HPP

#include "sal/config.h"

#include "com/sun/star/beans/Defaulted.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/strbuf.hxx"
#include "rtl/textenc.h"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace beans {

template< typename typeparam_T > inline Defaulted< typeparam_T >::Defaulted() SAL_THROW( () )
    : Value()
    , IsDefaulted(false)
{
}

template< typename typeparam_T > inline Defaulted< typeparam_T >::Defaulted(typeparam_T const & Value_, const ::sal_Bool& IsDefaulted_) SAL_THROW( () )
    : Value(Value_)
    , IsDefaulted(IsDefaulted_)
{
}

template< typename typeparam_T > 
inline Defaulted< typeparam_T >
make_Defaulted(typeparam_T const & Value_, const ::sal_Bool& IsDefaulted_) SAL_THROW(())
{
    return Defaulted< typeparam_T >(Value_, IsDefaulted_);
}

} } } }

namespace cppu {

template< typename typeparam_T > class UnoType< ::com::sun::star::beans::Defaulted< typeparam_T > > {
public:
    static inline ::com::sun::star::uno::Type const & get() {
        //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
        static ::typelib_TypeDescriptionReference * the_type = 0;
        if (the_type == 0) {
            ::rtl::OStringBuffer the_buffer("com.sun.star.beans.Defaulted<");
            the_buffer.append(::rtl::OUStringToOString(::cppu::getTypeFavourChar(static_cast< typeparam_T * >(0)).getTypeName(), RTL_TEXTENCODING_UTF8));
            the_buffer.append('>');
            ::typelib_TypeDescriptionReference * the_members[] = {
                ::cppu::getTypeFavourChar(static_cast< typeparam_T * >(0)).getTypeLibType(),
                ::cppu::UnoType< ::sal_Bool >::get().getTypeLibType() };
            static ::sal_Bool const the_parameterizedTypes[] = { true, false };
            ::typelib_static_struct_type_init(&the_type, the_buffer.getStr(), 0, 2, the_members, the_parameterizedTypes);
        }
        return *reinterpret_cast< ::com::sun::star::uno::Type * >(&the_type);
    }

private:
    UnoType(UnoType &); // not defined
    ~UnoType(); // not defined
    void operator =(UnoType); // not defined
};

}

template< typename typeparam_T > inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::beans::Defaulted< typeparam_T > const *) SAL_THROW(()) {
        return ::cppu::UnoType< ::com::sun::star::beans::Defaulted< typeparam_T > >::get();
    }

#endif // INCLUDED_COM_SUN_STAR_BEANS_DEFAULTED_HPP
