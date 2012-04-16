#ifndef INCLUDED_COM_SUN_STAR_SHEET_SOLVER_HPP
#define INCLUDED_COM_SUN_STAR_SHEET_SOLVER_HPP

#include "sal/config.h"

#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/XComponentContext.hpp"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/DeploymentException.hpp"
#include "com/sun/star/lang/XMultiComponentFactory.hpp"
#include "com/sun/star/sheet/XSolver.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"

namespace com { namespace sun { namespace star { namespace sheet {

class Solver {
public:
    static ::com::sun::star::uno::Reference< ::com::sun::star::sheet::XSolver > create(::com::sun::star::uno::Reference< ::com::sun::star::uno::XComponentContext > const & the_context) {
        ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiComponentFactory > the_factory(the_context->getServiceManager());
        if (!the_factory.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service manager")), the_context);
        }
        ::com::sun::star::uno::Reference< ::com::sun::star::sheet::XSolver > the_instance;
        try {
            the_instance = ::com::sun::star::uno::Reference< ::com::sun::star::sheet::XSolver >(the_factory->createInstanceWithContext(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.sheet.Solver")), the_context), ::com::sun::star::uno::UNO_QUERY);
        } catch (::com::sun::star::uno::RuntimeException &) {
            throw;
        } catch (::com::sun::star::uno::Exception & the_exception) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.sheet.Solver of type com.sun.star.sheet.XSolver: ")) + the_exception.Message, the_context);
        }
        if (!the_instance.is()) {
            throw ::com::sun::star::uno::DeploymentException(::rtl::OUString(RTL_CONSTASCII_USTRINGPARAM("component context fails to supply service com.sun.star.sheet.Solver of type com.sun.star.sheet.XSolver")), the_context);
        }
        return the_instance;
    }

private:
    Solver(); // not implemented
    Solver(Solver &); // not implemented
    ~Solver(); // not implemented
    void operator =(Solver); // not implemented
};

} } } }

#endif // INCLUDED_COM_SUN_STAR_SHEET_SOLVER_HPP
