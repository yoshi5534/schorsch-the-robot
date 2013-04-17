

#include "MeishiGateControl.h"
#include <iostream>

int main(int argc, char** argv)
{
  MeishiGateControl meishiGateControl("/dev/ttyACM0");
  meishiGateControl.uploadProgram();
  meishiGateControl.run();
  return 0; 
}