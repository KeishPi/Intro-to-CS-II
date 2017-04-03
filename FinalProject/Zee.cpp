/*******************************************************************
** Filename: Zee.cpp
** Author: Keisha Arnold
** Description: Final Project. Class implementation file for the 
** Zee class, derived from the Space class.
** Input:
** Output:
********************************************************************/
#include "Zee.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

using std::cout;
using std::endl;
using std::string;

/******************************************************************
*			Zee::Zee()
* Space class constructor.
******************************************************************/
Zee::Zee() : Space("Zee") {
/*
   //setLocation(loc);
   //this->right = NULL;
   //this->left = NULL;
   //this->up = NULL;
   //this->down = NULL;
*/
   // test  
   //cout << "Hello from Space Zee!" << endl;
}

/*******************************************************************
*			Zee::~Zee()
* The Zee class destructor frees memory.
*******************************************************************/
Zee::~Zee() {

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
*			Zee::alien()
* This function redefines the pure virtual function from the
* Space class. 
*******************************************************************/
void Zee::alien() {
   // This "alien" is your mom
   cout << "\nWell maybe if you weren't so unorganized you wouldn't"
   "lose things all the time! Have you looked under your bed?";
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

