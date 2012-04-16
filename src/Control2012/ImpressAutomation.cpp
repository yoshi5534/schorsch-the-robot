//### Under debian install 
//libreoffice-dev
//libreoffice-dbg
//uno-libs3-dbg

// ### After that run 
// /usr/lib/libreoffice/basis3.4/sdk/bin/cppumaker -Gc -BUCR -O/home/oswald/projekt/schorsch-the-robot/src/Control2012/libreoffice /usr/lib/ure/share/misc/types.rdb /usr/lib/libreoffice/basis3.4/program/offapi.rdb
// ### to create the needed files 
// ### you may need aditional include directorys

// before executing the program you have to run when no libreoffice is running:
// soffice --accept="socket,host=localhost,port=2083;urp;StarOffice.ServiceManager"


// call console -env:URE_MORE_TYPES="file:////usr/lib/libreoffice/basis3.4/program/offapi.rdb" "file:////home/oswald/projekt/control/control2011.ppt" "uno:socket,host=localhost,port=2083;urp;StarOffice.ServiceManager"

// 

#define UNX
#define SAL_UNX
#define CPPU_ENV

#include <unistd.h>
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

#include <string.h>



//#include <stdio.h>
//#include "/usr/include/libreoffice/cppuhelper/bootstrap.hxx"
//#include "/usr/include/libreoffice/com/sun/star/bridge/XUnoUrlResolver.hpp"
//#include "/usr/include/libreoffice/com/sun/star/lang/XMultiServiceFactory.hpp"
// added
//#include "/usr/include/libreoffice/com/sun/star/frame/XComponentLoader.hpp"




#include "ImpressAutomation.h"

ImpressAutomation::ImpressAutomation()
{
  
}

ImpressAutomation::~ImpressAutomation()
{
  
}

int ImpressAutomation::connect()
{
  using namespace com::sun::star::uno;
  using namespace com::sun::star::lang;
  using namespace com::sun::star::beans;
  using namespace com::sun::star::bridge;
  using namespace com::sun::star::frame;
  using namespace com::sun::star::registry;
  
  using ::rtl::OUString;
  using ::rtl::OUStringToOString;
  
  
  OUString sConnectionString(RTL_CONSTASCII_USTRINGPARAM("uno:socket,host=localhost,port=2083;urp;StarOffice.ServiceManager"));
  
  sal_Int32 nCount = (sal_Int32)rtl_getAppCommandArgCount();
  
  //if (nCount < 1)
  //{
    //   printf("using: DocumentLoader -env:URE_MORE_TYPES=<office_types_rdb_url> <file_url> [<uno_connection_url>]\n\n"
  //           "example: DocumentLoader -env:URE_MORE_TYPES=\"file:///.../basis-link/program/offapi.rdb\" \"file:///e:/temp/test.odt\" \"uno:socket,host=localhost,port=2083;urp;StarOffice.ServiceManager\"\n");
  //(   exit(1);
  //}
  //if (nCount == 2)
  //{
    //   rtl_getAppCommandArg(1, &sConnectionString.pData);
  //}
  
  
  Reference< XComponentContext > xComponentContext(::cppu::defaultBootstrap_InitialComponentContext());
  
  /* Gets the service manager instance to be used (or null). This method has
   *       been added for convenience, because the service manager is a often used
   *       object.
   */
  Reference< XMultiComponentFactory > xMultiComponentFactoryClient(
    xComponentContext->getServiceManager() );
  
  /* Creates an instance of a component which supports the services specified
   *       by the factory.
   */
  Reference< XInterface > xInterface =
  xMultiComponentFactoryClient->createInstanceWithContext( 
  OUString(RTL_CONSTASCII_USTRINGPARAM("com.sun.star.bridge.UnoUrlResolver")),
				       xComponentContext );
  
  Reference< XUnoUrlResolver > resolver( xInterface, UNO_QUERY );
  
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
  //exit(1);    
  usleep(1000);
  }
  
  
  // gets the server component context as property of the office component factory
  Reference< XPropertySet > xPropSet( xInterface, UNO_QUERY );
  xPropSet->getPropertyValue( OUString(RTL_CONSTASCII_USTRINGPARAM("DefaultContext")) ) >>= xComponentContext;
  
  // gets the service manager from the office
  Reference< XMultiComponentFactory > xMultiComponentFactoryServer(
    xComponentContext->getServiceManager() );
  
  /* Creates an instance of a component which supports the services specified
   *       by the factory. Important: using the office component context.
   */
  Reference < XComponentLoader > xComponentLoader(
    xMultiComponentFactoryServer->createInstanceWithContext( 
    OUString( RTL_CONSTASCII_USTRINGPARAM("com.sun.star.frame.Desktop" ) ),
					  xComponentContext ), UNO_QUERY );
    
    /* Loads a component specified by an URL into the specified new or existing
     *       frame.
     */
    OUString sWorkingDir, sDocPathUrl;
    //rtl_getAppCommandArg(0, &sArgDocUrl.pData);
    
    //rtl_uString_newFromAscii( &sArgDocUrl.pData,"file:///home/oswald/projekt/schorsch-the-robot/src/Control2012/test.odt");
    OUString sAbsoluteDocUrl(RTL_CONSTASCII_USTRINGPARAM("file:////home/oswald/projekt/schorsch-the-robot/src/Control2012/test.odt"));
    
    
    //     osl_getProcessWorkingDir(&sWorkingDir.pData);
    //     osl::FileBase::getFileURLFromSystemPath( sArgDocUrl, sDocPathUrl);
    //     osl::FileBase::getAbsoluteFileURL( sWorkingDir, sDocPathUrl, sAbsoluteDocUrl);
    try{
      Reference< XComponent > xComponent = xComponentLoader->loadComponentFromURL(
	sAbsoluteDocUrl, OUString( RTL_CONSTASCII_USTRINGPARAM("_blank") ), 0,
							       Sequence < ::com::sun::star::beans::PropertyValue >() );
    }   
    catch ( Exception& e )
    {
      printf("Error: cannot establish a connection using '%s':\n       %s\n",
	     OUStringToOString(sConnectionString, RTL_TEXTENCODING_ASCII_US).getStr(),
	     OUStringToOString(e.Message, RTL_TEXTENCODING_ASCII_US).getStr());
      //exit(1);    
      usleep(1000);
    }
    
    
    // dispose the local service manager
    Reference< XComponent >::query( xMultiComponentFactoryClient )->dispose();
}






























