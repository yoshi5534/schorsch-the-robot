#ifndef IMPRESSAUTOMATION_H
#define IMPRESSAUTOMATION_H

#define UNX
#define SAL_UNX
#define CPPU_ENV

#include <string>
#include <com/sun/star/frame/XComponentLoader.hpp>
#include <com/sun/star/presentation/XPresentation2.hpp>

class ImpressAutomation
{
private:
   com::sun::star::uno::Reference<com::sun::star::frame::XComponentLoader> xComponentLoader;
   com::sun::star::uno::Reference< ::com::sun::star::presentation::XPresentation2 > presentation;
   
public:
    ImpressAutomation(com::sun::star::uno::Reference<com::sun::star::frame::XComponentLoader> componentLoader);
    virtual ~ImpressAutomation();
    
    void loadPresentation(std::string fileName);
    void startPresentation();
    void stopPresentation();
    void nextSlide();
    void previousSlide();
};

#endif // IMPRESSAUTOMATION_H
