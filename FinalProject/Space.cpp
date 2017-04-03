/*******************************************************************
** Filename: Space.cpp
** Author: Keisha Arnold
** Description: Final Project. Class implementation file for the 
** abstract Space base class.
** Input:
** Output:
********************************************************************/
#include "Space.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

using std::cout;
using std::endl;
using std::string;

/******************************************************************
*			Space::Space(string)
* Space class constructor.
******************************************************************/
Space::Space(string loc) {
   setLocation(loc);
   this->right = NULL;
   this->left = NULL;
   this->up = NULL;
   this->down = NULL;
}

/*******************************************************************
*			Space::~Space()
* The Space class destructor frees memory.
*******************************************************************/
Space::~Space() {

}

/*******************************************************************
*			Space::choiceMenu()
* This is a pure virtual function. 
*******************************************************************/
/*
int Space::choiceMenu() {
   int hits = attack;
   int defenseRoll;
   //int damage;

   // create Dice object with 6 sides
   Dice dDice(6); 
   // roll Die 1x
   defenseRoll = dDice.rollDie();  
   // calculate damage
   damage = ((hits - defenseRoll) - armor);
   if(damage <= 0) {
      damage = 0;
   }
   // calculate strength 
   setStrength(strength - damage);
 
   return defenseRoll;
}
*/
  
/*******************************************************************
*			Space::playGm()
* This function rolls two die. If you roll even you win. 
*******************************************************************/
int Space::playGm() {
   int rollResult;	// roll result
   int rollTotal = 0;	// roll accumulator
   int win;	 	// flag 0- lost, 1- won
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
      cout << "Sorry you rolled an odd number. You Lose." << endl;
      win = 0;
      return win;
   }
}


/*******************************************************************
*			Space::getLocation()
* This virtual function returns the value in protected member 
* variable location.
*******************************************************************/
string Space::getLocation() {
   return location;
}

/*******************************************************************
*			Space::setLocation(string)
* This virtual function copies the argument passed into the 
* parameter to the protected member variable location.
*******************************************************************/
void Space::setLocation(string loc) {
   location = loc;
}

/*******************************************************************
*			Space::setRight(Space)
* This virtual function copies the argument passed into the 
* parameter to the protected member variable right.
*******************************************************************/
void Space::setRight(Space *r) {
   right = r;
}

/*******************************************************************
*			Space::setLeft(Space)
* This virtual function copies the argument passed into the 
* parameter to the protected member variable left.
*******************************************************************/
void Space::setLeft(Space *l) {
   left = l;
}

/*******************************************************************
*			Space::setUp(Space)
* This virtual function copies the argument passed into the 
* parameter to the protected member variable up.
*******************************************************************/
void Space::setUp(Space *u) {
   up = u;
}

/*******************************************************************
*			Space::setDown(Space)
* This virtual function copies the argument passed into the 
* parameter to the protected member variable down.
*******************************************************************/
void Space::setDown(Space *d) {
   down = d;
}
