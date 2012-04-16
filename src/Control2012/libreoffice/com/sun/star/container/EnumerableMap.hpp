#ifndef INCLUDED_COM_SUN_STAR_CONTAINER_ENUMERABLEMAP_HPP
#define INCLUDED_COM_SUN_STAR_CONTAINER_ENUMERABLEMAP_HPP

#include "sal/config.h"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/container/XEnumerableMap.hpp"
#include "com/sun/star/beans/IllegalTypeException.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/beans/Pair.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace container {

class EnumerableMap {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::container::XEnumerableMap > create(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Type& KeyType, const ::com::sun::star::uno::Type& ValueType) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(2);
        the_arguments[0] <<= KeyType;
        the_arguments[1] <<= ValueType;
        ::com::sun::star::uno::Reference< ::com::sun::star::container::XEnumerableMap > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::container::XEnumerableMap >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.container.EnumerableMap")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::beans::IllegalTypeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.container.EnumerableMap of type com.sun.star.container.XEnumerableMap: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.container.EnumerableMap of type com.sun.star.container.XEnumerableMap")), the_context);
        }
        return the_instance;
    }

    static ::com::sun::star::uno::Reference< ::com::sun::star::container::XEnumerableMap > createImmutable(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Type& KeyType, const ::com::sun::star::uno::Type& ValueType, const ::com::sun::star::uno::Sequence< ::com::sun::star::beans::Pair< ::com::sun::star::uno::Any, ::com::sun::star::uno::Any > >& Values) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(3);
        the_arguments[0] <<= KeyType;
        the_arguments[1] <<= ValueType;
        the_arguments[2] <<= Values;
        ::com::sun::star::uno::Reference< ::com::sun::star::container::XEnumerableMap > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::container::XEnumerableMap >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.container.EnumerableMap")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::beans::IllegalTypeException &) {
            throw;
        } catch (::com::sun::star::lang::IllegalArgumentException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.container.EnumerableMap of type com.sun.star.container.XEnumerableMap: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.container.EnumerableMap of type com.sun.star.container.XEnumerableMap")), the_context);
        }
        return the_instance;
    }

private:
    EnumerableMap(); // not implemented
    EnumerableMap(EnumerableMap &); // not implemented
    ~EnumerableMap(); // not implemented
    void operator =(EnumerableMap); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_CONTAINER_ENUMERABLEMAP_HPP
