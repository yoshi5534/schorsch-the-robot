#ifndef INCLUDED_COM_SUN_STAR_RESOURCE_STRINGRESOURCEWITHSTORAGE_HPP
#define INCLUDED_COM_SUN_STAR_RESOURCE_STRINGRESOURCEWITHSTORAGE_HPP

#include "sal/config.h"

#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/lang/Locale.hpp"
#include "com/sun/star/lang/IllegalArgumentException.hpp"
#include "com/sun/star/resource/XStringResourceWithStorage.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/embed/XStorage.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"
#include "sal/types.h"

namespace com { namespace sun { namespace star { namespace resource {

class StringResourceWithStorage {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::resource::XStringResourceWithStorage > create(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context, const ::com::sun::star::uno::Reference< ::com::sun::star::embed::XStorage >& Storage, ::sal_Bool ReadOnly, const ::com::sun::star::lang::Locale& locale, const ::rtl::OUString& BaseName, const ::rtl::OUString& Comment) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any > the_arguments(5);
        the_arguments[0] <<= Storage;
        the_arguments[1] <<= ReadOnly;
        the_arguments[2] <<= locale;
        the_arguments[3] <<= BaseName;
        the_arguments[4] <<= Comment;
        ::com::sun::star::uno::Reference< ::com::sun::star::resource::XStringResourceWithStorage > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::resource::XStringResourceWithStorage >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.resource.StringResourceWithStorage")), the_arguments, the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::lang::IllegalArgumentException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.resource.StringResourceWithStorage of type com.sun.star.resource.XStringResourceWithStorage: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.resource.StringResourceWithStorage of type com.sun.star.resource.XStringResourceWithStorage")), the_context);
        }
        return the_instance;
    }

private:
    StringResourceWithStorage(); // not implemented
    StringResourceWithStorage(StringResourceWithStorage &); // not implemented
    ~StringResourceWithStorage(); // not implemented
    void operator =(StringResourceWithStorage); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_RESOURCE_STRINGRESOURCEWITHSTORAGE_HPP
