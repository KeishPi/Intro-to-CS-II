/*******************************************************************
** Filename: Wormhole.cpp
** Author: Keisha Arnold
** Description: Final Project. Class implementation file for the 
** Wormhole class, derived from the Space class.
** Input:
** Output:
********************************************************************/
#include "Wormhole.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

using std::cout;
using std::endl;
using std::string;

/******************************************************************
*			Wormhole::Wormhole()
* Wormhole class constructor.
******************************************************************/
Wormhole::Wormhole() : Space("Wormhole") {
/*
   setLocation(loc);
   this->right = NULL;
   this->left = NULL;
   this->up = NULL;
   this->down = NULL;
*/  
   //cout << "Hello from a Wormhole!" << endl;
}

/*******************************************************************
*			Wormhole::~Wormhole()
* The Wormhole class destructor frees memory.
*******************************************************************/
Wormhole::~Wormhole() {

}

/*******************************************************************
*			Zee::choiceMenu()
* This is a virtual function. 
*******************************************************************/
/*
void Zee::choiceMenu() {
   cout << "\n\n		MENU\n\n";
   cout << "1) \n";
   cout << "2) Medusa\n";
   cout << "3) Gollum\n";
   cout << "4) Quit the Game\n";
   cout << "Enter your choice: ";

}
*/
   
/*******************************************************************
*			Wormhole::alien()
* This function redefines the pure virtual function from the
* Space class. 
*******************************************************************/
void Wormhole::alien() {
   // This "alien" is your mom
   cout << "\nWormhole alien\n";
}  

/*******************************************************************
*			Space::setLocation(string)
* This virtual function copies the argument passed into the 
* parameter to the protected member variable location.
*******************************************************************/
/*
void Space::setLocation(string loc) {
   location = loc;
*/

