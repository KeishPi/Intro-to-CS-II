/*******************************************************************
** Filename: Pairadice.cpp
** Author: Keisha Arnold
** Description: Final Project. Class implementation file for the 
** Pairadice class, derived from the Space class.
** Input:
** Output:
********************************************************************/
#include "Pairadice.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

using std::cout;
using std::endl;
using std::string;

/******************************************************************
*			Pairadice::Pairadice()
* Pairadice class constructor.
******************************************************************/
Pairadice::Pairadice() : Space("Pairadice") {
/*
   setLocation(loc);
   this->right = Tesseract();
   this->left = Camazozt();
   this->up = NULL;
   this->down = Zee();
*/
   // test
   //cout << "Hello from Space Pairadice!" << endl;
}

/*******************************************************************
*			Pairadice::~Pairadice()
* The Pairadice class destructor frees memory.
*******************************************************************/
Pairadice::~Pairadice() {

}

/*******************************************************************
*			Pairadice::choiceMenu()
* This is a virtual function. 
*******************************************************************/
/*
void Pairadice::choiceMenu() {
   cout << "\n\n		MENU\n\n";
   cout << "1) \n";
   cout << "2) Medusa\n";
   cout << "3) Gollum\n";
   cout << "4) Quit the Game\n";
   cout << "Enter your choice: ";
}
*/

/*******************************************************************
*			Pairadice::alien()
* This function redefines the pure virtual function from the
* Space class. 
*******************************************************************/
void Pairadice::alien() {
   // This "alien" is the pit boss
   cout << "\nLook kid, this 'aint no lost and found. If you play \n"
   "one of our games, I might have more information...";
}
  
/*******************************************************************
*			Pairadice::playGm()
* This function rolls two die. If you roll even you win. 
*******************************************************************/
int Pairadice::playGm() {
   int rollResult;	// roll result
   int rollTotal = 0;	// roll accumulator
   int win;		// flag 0- lost, 1- won
   Dice dce(6);		// Dice object with 6 sides

   // game description
   cout << "The game is simple. You get a pair of dice. \n"
   "If you roll an even number you win!\n";

   // roll die 2x and accumulate running total
   for(int i = 0; i < 2; i++) {
      rollResult = dce.rollDie();
      rollTotal += rollResult;
   }
   // test
   cout << rollTotal << endl;

   if(rollTotal % 2 == 0) {
      cout << "You win!" << endl;
      win = 1;
      return win;   
   } 
   else { 
      cout << "You rolled an odd number. You Lose." << endl;
      win = 0;
      return win;
   }
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

