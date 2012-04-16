#ifndef INCLUDED_COM_SUN_STAR_BEANS_PAIR_HPP
#define INCLUDED_COM_SUN_STAR_BEANS_PAIR_HPP

#include "sal/config.h"

#include "com/sun/star/beans/Pair.hdl"

#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/strbuf.hxx"
#include "rtl/textenc.h"
#include "rtl/ustring.hxx"
#include "sal/types.h"
#include "typelib/typeclass.h"
#include "typelib/typedescription.h"

namespace com { namespace sun { namespace star { namespace beans {

template< typename typeparam_T, typename typeparam_U > inline Pair< typeparam_T, typeparam_U >::Pair() SAL_THROW( () )
    : First()
    , Second()
{
}

template< typename typeparam_T, typename typeparam_U > inline Pair< typeparam_T, typeparam_U >::Pair(typeparam_T const & First_, typeparam_U const & Second_) SAL_THROW( () )
    : First(First_)
    , Second(Second_)
{
}

template< typename typeparam_T, typename typeparam_U > 
inline Pair< typeparam_T, typeparam_U >
make_Pair(typeparam_T const & First_, typeparam_U const & Second_) SAL_THROW(())
{
    return Pair< typeparam_T, typeparam_U >(First_, Second_);
}

} } } }

namespace cppu {

template< typename typeparam_T, typename typeparam_U > class UnoType< ::com::sun::star::beans::Pair< typeparam_T, typeparam_U > > {
public:
    static inline ::com::sun::star::uno::Type const & get() {
        //TODO: On certain platforms with weak memory models, the following code can result in some threads observing that the_type points to garbage
        static ::typelib_TypeDescriptionReference * the_type = 0;
        if (the_type == 0) {
            ::rtl::OStringBuffer the_buffer("com.sun.star.beans.Pair<");
            the_buffer.append(::rtl::OUStringToOString(::cppu::getTypeFavourChar(static_cast< typeparam_T * >(0)).getTypeName(), RTL_TEXTENCODING_UTF8));
            the_buffer.append(',');
            the_buffer.append(::rtl::OUStringToOString(::cppu::getTypeFavourChar(static_cast< typeparam_U * >(0)).getTypeName(), RTL_TEXTENCODING_UTF8));
            the_buffer.append('>');
            ::typelib_TypeDescriptionReference * the_members[] = {
                ::cppu::getTypeFavourChar(static_cast< typeparam_T * >(0)).getTypeLibType(),
                ::cppu::getTypeFavourChar(static_cast< typeparam_U * >(0)).getTypeLibType() };
            static ::sal_Bool const the_parameterizedTypes[] = { true, true };
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

template< typename typeparam_T, typename typeparam_U > inline ::com::sun::star::uno::Type const & SAL_CALL getCppuType(::com::sun::star::beans::Pair< typeparam_T, typeparam_U > const *) SAL_THROW(()) {
        return ::cppu::UnoType< ::com::sun::star::beans::Pair< typeparam_T, typeparam_U > >::get();
    }

#endif // INCLUDED_COM_SUN_STAR_BEANS_PAIR_HPP
