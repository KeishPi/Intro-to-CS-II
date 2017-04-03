/*****************************************************************
** Program Filename: Dice.cpp
** Author: Keisha Arnold
** Date: July 3, 2016
** Description: Class implementation file named Dice.cpp.
** Includes member function definitions for the Dice class.
** Input:
** Output:
******************************************************************/

#include "Dice.hpp"
#include <iostream>
#include <cstdlib>

/******************************************************************
*			Dice::Dice
* Default constructor sets the protected member variable numSides
* equal to six.
*******************************************************************/
Dice::Dice() {
   setNumSides(6);
}

/******************************************************************
*			Dice::Dice(int)
* Constructor lets the user decide the number of sides and assigns 
* it to numSides.
*******************************************************************/
Dice::Dice(int sides) {
   setNumSides(sides);
}

/******************************************************************
*			Dice::getNumSides
* This function returns the value in member variable numSides.
*******************************************************************/
int Dice::getNumSides() {
   return numSides;
}

/******************************************************************
*			Dice::getRollValue
* This function returns the value in member variable rollResult.
*******************************************************************/
int Dice::getRollResult() {
   return rollResult;
}

/******************************************************************
*			Dice::setNumSides
* This function copies the argument passed into the parameter
* to the protected member variable numSides.
*******************************************************************/
void Dice::setNumSides(int sides) {
   numSides = sides;
}
/******************************************************************
*			Dice::rollDie
* This function rolls the die and returns the value in member
* variable rollResult.
*******************************************************************/
int Dice::rollDie() {
   rollResult = rand() % numSides + 1;

   return rollResult;
}    

