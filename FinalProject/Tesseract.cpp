/*******************************************************************
** Filename: Tesseract.cpp
** Author: Keisha Arnold
** Description: Final Project. Class implementation file for the 
** Tesseract class, derived from the Space class.
** Input:
** Output:
********************************************************************/
#include "Tesseract.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

using std::cout;
using std::endl;
using std::string;

/******************************************************************
*			Tesseract::Tesseract()
* Tesseract class constructor.
******************************************************************/
Tesseract::Tesseract() : Space("Tesseract") {
/*
   setLocation(loc);
   this->right = NULL;
   this->left = NULL;
   this->up = NULL;
   this->down = NULL;
*/
   // test
   //cout << "Hello from Space Tesseract!" << endl;
}

/*******************************************************************
*			Tesseract::~Tesseract()
* The Tesseract class destructor frees memory.
*******************************************************************/
Tesseract::~Tesseract() {

}

/*******************************************************************
*			Tesseract::choiceMenu()
* This is a virtual function. 
*******************************************************************/
/*
void Tesseract::choiceMenu() {
   cout << "\n\n		MENU\n\n";
   cout << "1) \n";
   cout << "2) Medusa\n";
   cout << "3) Gollum\n";
   cout << "4) Quit the Game\n";
   cout << "Enter your choice: ";

}
*/

/*******************************************************************
*			Tesseract::alien()
* This function redefines the pure virtual function from the
* Space class. 
*******************************************************************/
void Tesseract::alien() {
   // This "alien" is you in a parallel universe
   cout << "\nYou did what? That's hysterical! Wait, you can't have \n"
   "my body! I've heard there are dark spirits called 'IT' that come \n"
   "during the night to steal your body for themselves. It's rumored \n"
   "they frequent the planet Ixchel, but I wouldn't go a thousand \n"
   "lightyears near there. It's just a myth anyway.";
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

