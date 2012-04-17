#include <QtGui/QApplication>
#include "maingui.h"

#define UNX
#define SAL_UNX
#define CPPU_ENV

#include <stdio.h>
#include <wchar.h>

#include <sal/main.h>

#include <cppuhelper/bootstrap.hxx>

#include <osl/file.hxx>
#include <osl/process.h>
#include <rtl/process.h>

#include <com/sun/star/beans/XPropertySet.hpp>
#include <com/sun/star/bridge/XUnoUrlResolver.hpp>
#include <com/sun/star/frame/XComponentLoader.hpp>
#include <com/sun/star/lang/XMultiComponentFactory.hpp>
#include <com/sun/star/registry/XSimpleRegistry.hpp>
#include <com/sun/star/presentation/XPresentationSupplier.hpp>
#include <com/sun/star/presentation/XPresentation2.hpp>

#include <string.h>

using namespace com::sun::star::uno;
using namespace com::sun::star::lang;
using namespace com::sun::star::beans;
using namespace com::sun::star::bridge;
using namespace com::sun::star::frame;
using namespace com::sun::star::registry;

using ::rtl::OUString;
using ::rtl::OUStringToOString;

//============================================================================
SAL_IMPLEMENT_MAIN_WITH_ARGS(argc, argv)
{
    OUString sConnectionString(RTL_CONSTASCII_USTRINGPARAM("uno:socket,host=localhost,port=2083;urp;StarOffice.ServiceManager"));

    sal_Int32 nCount = (sal_Int32)rtl_getAppCommandArgCount();

    if (nCount < 1)
    {
        printf("using: DocumentLoader -env:URE_MORE_TYPES=<office_types_rdb_url> <file_url> [<uno_connection_url>]\n\n"
               "example: DocumentLoader -env:URE_MORE_TYPES=\"file:///.../basis-link/program/offapi.rdb\" \"file:///e:/temp/test.odt\" \"uno:socket,host=localhost,port=2083;urp;StarOffice.ServiceManager\"\n");
        exit(1);
    }
    
    if (nCount == 2)
    {
        rtl_getAppCommandArg(1, &sConnectionString.pData);
    }
  
    Reference< XComponentContext > xComponentContext(::cppu::defaultBootstrap_InitialComponentContext());
      /* Gets the service manager instance to be used (or null). This method has
       been added for convenience, because the service manager is a often used
       object.
    */
    Reference< XMultiComponentFactory > xMultiComponentFactoryClient(
        xComponentContext->getServiceManager() );

    /* Creates an instance of a component which supports the services specified
       by the factory.
    */
    Reference< XInterface > xInterface =
        xMultiComponentFactoryClient->createInstanceWithContext( 
            OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.bridge.UnoUrlResolver")),
            xComponentContext );

    Reference< XUnoUrlResolver > resolver( xInterface, UNO_QUERY );

         printf("connection '%s':\n ",
	     OUStringToOString(sConnectionString, RTL_TEXTENCODING_ASCII_US).getStr());

    
    // Resolves the component context from the office, on the uno URL given by argv[1].
    try
    {    
        xInterface = Reference< XInterface >( 
            resolver->resolve( sConnectionString ), UNO_QUERY );
    }
    catch ( Exception& e )
    {
        printf("Error: cannot establish a connection using '%s':\n       %s\n",
               OUStringToOString(sConnectionString, RTL_TEXTENCODING_ASCII_US).getStr(),
               OUStringToOString(e.Message, RTL_TEXTENCODING_ASCII_US).getStr());
        exit(1);        
    }

    // gets the server component context as property of the office component factory
    Reference< XPropertySet > xPropSet( xInterface, UNO_QUERY );
    xPropSet->getPropertyValue( OUString(RTL_CONSTASCII_USTRINGPARAM("DefaultContext")) ) >>= xComponentContext;

    // gets the service manager from the office
    Reference< XMultiComponentFactory > xMultiComponentFactoryServer(
        xComponentContext->getServiceManager() );

    /* Creates an instance of a component which supports the services specified
       by the factory. Important: using the office component context.
    */
    com::sun::star::uno::Reference< com::sun::star::frame::XComponentLoader > xComponentLoader(
        xMultiComponentFactoryServer->createInstanceWithContext( 
            OUString( RTL_CONSTASCII_USTRINGPARAM("com.sun.star.frame.Desktop" ) ),
            xComponentContext ), UNO_QUERY );
    
    QApplication application(argc, argv);
    mainGUI mainWindow(xComponentLoader);
    mainWindow.show();
    int result = application.exec();
    
    // dispose the local service manager
    Reference< XComponent >::query( xMultiComponentFactoryClient )->dispose();
}

/* vim:set shiftwidth=4 softtabstop=4 expandtab: */
