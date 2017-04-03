/*******************************************************************
** Filename: Camazotz.cpp
** Author: Keisha Arnold
** Description: Final Project. Class implementation file for the 
** Camazotz class, derived from the Space class.
** Input:
** Output:
********************************************************************/
#include "Camazotz.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

using std::cout;
using std::endl;
using std::string;

/******************************************************************
*			Camazotz::Camazotz()
* Camazotz class constructor.
******************************************************************/
Camazotz::Camazotz() : Space("Camazotz") {
/*
   setLocation(loc);
   this->right = NULL;
   this->left = NULL;
   this->up = NULL;
   this->down = NULL;
*/ 
   // test 
   //cout << "Hello from Space Camazotz!" << endl;
}

/*******************************************************************
*			Camazotz::~Camazotz()
* The Camazotz class destructor frees memory.
*******************************************************************/
Camazotz::~Camazotz() {

}

/*******************************************************************
*			Camazotz::choiceMenu()
* This is a virtual function. 
*******************************************************************/
/*
void Camazotz::choiceMenu() {
   cout << "\n\n		MENU\n\n";
   cout << "1) \n";
   cout << "2) Medusa\n";
   cout << "3) Gollum\n";
   cout << "4) Quit the Game\n";
   cout << "Enter your choice: ";

}
*/

/*******************************************************************
*			Camazotz::alien()
* This function redefines the pure virtual function from the
* Space class. 
*******************************************************************/
void Camazotz::alien() {
   // This "alien" are gentle, tall, furry beasts
   cout << "\nThat's horrible! All I can offer are hugs.";
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

