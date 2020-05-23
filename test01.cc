//This is an example of the basic code for a .cc file to execute a pythia simulation
//This file works inside of the /pythia8244/examples/ directory because of the MakeFile present

#include "Pythia8/Pythia.h" //This is the Pythia header that must be contained inside the directory where this file is contained
using namespace Pythia8;

int main()
{

  //Code for the setup for a generation simulation 
  Pythia pythia; //Pythia object from the include-line with the name pythia
  
  //The way Pythia works is that you can give it commands in this .cc file and it will be sent read by Pythia using a specific function of the Pythia objet
  //This command is readString() and there are keywords that can be given to the command to perform specific tasks
  //For example, we can turn on simulation processes to be generated, such as the major processes involved in QCD backgrounds
  //Then we will use init() to initialize the collision of the beams
  //Finally we will use next() to generate the event and record it in an event record
  
  pythia.readString("HardQCD:all = on"); 
  pythia.init(); 
  pythia.next();
  
}
