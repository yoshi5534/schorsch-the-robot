#ifndef INCLUDED_COM_SUN_STAR_DRAWING_SLIDERENDERER_HPP
#define INCLUDED_COM_SUN_STAR_DRAWING_SLIDERENDERER_HPP

#include "sal/config.h"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/drawing/XSlideRenderer.hpp"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace drawing {

class SlideRenderer {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XSlideRenderer > create(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XSlideRenderer > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::drawing::XSlideRenderer >(the_factory->createInstanceWithArgumentsAndContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.drawing.SlideRenderer")), ::com::sun::star::uno::Sequence< ::com::sun::star::uno::Any >(), the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.drawing.SlideRenderer of type com.sun.star.drawing.XSlideRenderer: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.drawing.SlideRenderer of type com.sun.star.drawing.XSlideRenderer")), the_context);
        }
        return the_instance;
    }

private:
    SlideRenderer(); // not implemented
    SlideRenderer(SlideRenderer &); // not implemented
    ~SlideRenderer(); // not implemented
    void operator =(SlideRenderer); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_DRAWING_SLIDERENDERER_HPP
