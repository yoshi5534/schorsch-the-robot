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

//comand line parameters for executable
// -env:URE_MORE_TYPES="file:////usr/lib/libreoffice/basis3.4/program/offapi.rdb" "file:////home/oswald/projekt/control/control2011.ppt" "uno:socket,host=localhost,port=2083;urp;StarOffice.ServiceManager"

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
#include <com/sun/star/lang/XMultiComponentFactory.hpp>
#include <com/sun/star/registry/XSimpleRegistry.hpp>
#include <com/sun/star/presentation/XPresentationSupplier.hpp>
#include <com/sun/star/presentation/XPresentation2.hpp>

#include <string>


//#include <stdio.h>
//#include "/usr/include/libreoffice/cppuhelper/bootstrap.hxx"
//#include "/usr/include/libreoffice/com/sun/star/bridge/XUnoUrlResolver.hpp"
//#include "/usr/include/libreoffice/com/sun/star/lang/XMultiServiceFactory.hpp"
// added
//#include "/usr/include/libreoffice/com/sun/star/frame/XComponentLoader.hpp"

#include <stdexcept>
#include "ImpressAutomation.h"

ImpressAutomation::ImpressAutomation (com::sun::star::uno::Reference<com::sun::star::frame::XComponentLoader> componentLoader)
{
  xComponentLoader = componentLoader;
}

ImpressAutomation::~ImpressAutomation()
{
  
}

void ImpressAutomation::loadPresentation(std::string fileName)
{
  #define UNX
  #define SAL_UNX
  #define CPPU_ENV
  
  using namespace com::sun::star::uno;
  using namespace com::sun::star::lang;
  using namespace com::sun::star::beans;
  using namespace com::sun::star::bridge;
  using namespace com::sun::star::frame;
  using namespace com::sun::star::registry;

  using ::rtl::OUString;
  using ::rtl::OUStringToOString;
  
  
      /* Loads a component specified by an URL into the specified new or existing
       frame.
    */
    //OUString sAbsoluteDocUrl, sWorkingDir, sDocPathUrl, sArgDocUrl;
    //rtl_getAppCommandArg(0, &sArgDocUrl.pData);
    
   //OUString sAbsoluteDocUrl(RTL_CONSTASCII_USTRINGPARAM(""));
    //OUString sWorkingDir(RTL_CONSTASCII_USTRINGPARAM(""));
   // OUString sDocPathUrl(RTL_CONSTASCII_USTRINGPARAM(""));
    OUString sArgDocUrl(RTL_CONSTASCII_USTRINGPARAM("file:////home/oswald/projekt/control/control2011.ppt"));
    
// -env:URE_MORE_TYPES="file:////usr/lib/libreoffice/basis3.4/program/offapi.rdb" "file:////home/oswald/projekt/control/control2011.ppt" "uno:socket,host=localhost,port=2083;urp;StarOffice.ServiceManager"

   // osl_getProcessWorkingDir(&sWorkingDir.pData);
   //osl::FileBase::getFileURLFromSystemPath( sArgDocUrl, sDocPathUrl);
   // osl::FileBase::getAbsoluteFileURL( sWorkingDir, sDocPathUrl, sAbsoluteDocUrl);
/*    
     printf("connection '%s':\n      url %s\n",
	     OUStringToOString(sConnectionString, RTL_TEXTENCODING_ASCII_US).getStr(),
	     OUStringToOString(sArgDocUrl, RTL_TEXTENCODING_ASCII_US).getStr());
    */
    Reference< XComponent > xComponent = xComponentLoader->loadComponentFromURL(
        sArgDocUrl, OUString( RTL_CONSTASCII_USTRINGPARAM("_blank") ), 0,
        Sequence < ::com::sun::star::beans::PropertyValue >() );
    

    Reference< ::com::sun::star::presentation::XPresentationSupplier > showsupplier(xComponent, UNO_QUERY); 
    Reference< ::com::sun::star::presentation::XPresentation > show = showsupplier->getPresentation(); 
//     Reference< XPropertySet > mPres_Props(show, UNO_QUERY); 
//     sal_Int16 startpage = 0; 
//     mPres_Props->setPropertyValue(createStr("FirstPage"), makeAny(startpage) ); 
//   show->start(); 
    Reference< ::com::sun::star::presentation::XPresentation2 > show2(show, UNO_QUERY);
    presentation = show2;
}


void ImpressAutomation::startPresentation()
{
    presentation->start();
}

void ImpressAutomation::stopPresentation()
{
    presentation->end();
}

void ImpressAutomation::nextSlide()
{
    presentation->getController()->gotoNextSlide();
}

void ImpressAutomation::previousSlide()
{
    presentation->getController()->gotoPreviousSlide();
}






















