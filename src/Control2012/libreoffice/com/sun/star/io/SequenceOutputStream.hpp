#ifndef INCLUDED_COM_SUN_STAR_IO_SEQUENCEOUTPUTSTREAM_HPP
#define INCLUDED_COM_SUN_STAR_IO_SEQUENCEOUTPUTSTREAM_HPP

#include "sal/config.h"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/io/XSequenceOutputStream.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace io {

class SequenceOutputStream {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::io::XSequenceOutputStream > create(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Reference< ::com::sun::star::io::XSequenceOutputStream > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::io::XSequenceOutputStream >(the_factory->createInstanceWithContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.io.SequenceOutputStream")), the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.io.SequenceOutputStream of type com.sun.star.io.XSequenceOutputStream: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.io.SequenceOutputStream of type com.sun.star.io.XSequenceOutputStream")), the_context);
        }
        return the_instance;
    }

private:
    SequenceOutputStream(); // not implemented
    SequenceOutputStream(SequenceOutputStream &); // not implemented
    ~SequenceOutputStream(); // not implemented
    void operator =(SequenceOutputStream); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_IO_SEQUENCEOUTPUTSTREAM_HPP
