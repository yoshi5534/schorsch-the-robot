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
  
  std::string extendedFileName = "file:///" + fileName;
  rtl::OUString ducumentUrl(extendedFileName.c_str(), extendedFileName.length(), RTL_TEXTENCODING_UTF8);

  com::sun::star::uno::Reference< com::sun::star::lang::XComponent > xComponent = xComponentLoader->loadComponentFromURL(
  ducumentUrl, rtl::OUString( RTL_CONSTASCII_USTRINGPARAM("_blank") ), 0,
  com::sun::star::uno::Sequence < ::com::sun::star::beans::PropertyValue >() );

  com::sun::star::uno::Reference< ::com::sun::star::presentation::XPresentationSupplier > showsupplier(xComponent, com::sun::star::uno::UNO_QUERY); 
  com::sun::star::uno::Reference< ::com::sun::star::presentation::XPresentation > show = showsupplier->getPresentation(); 

  com::sun::star::uno::Reference< ::com::sun::star::presentation::XPresentation2 > show2(show, com::sun::star::uno::UNO_QUERY);
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






















