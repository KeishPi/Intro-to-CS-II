/********************************************************************
** Filename: Space.hpp
** Author: Keisha Arnold
** Description: Final Project. Class specification/header file for the 
** abstract Space base class. 
** Input:
** Output:
*********************************************************************/
#ifndef SPACE_HPP
#define SPACE_HPP
#include "Dice.hpp"	// needed to create Dice objects & roll Die
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Space {
public:
   // constructor 
   Space(string);

   // destructor
   virtual ~Space(); 

   // choiceMenu is a pure virtual function  
   //virtual void choiceMenu() = 0;
   
   // alien is a pure virtual function
   virtual void alien() = 0;

   // play a game
   virtual int playGm();

   // getters and setters
   virtual void setLocation(string);
   virtual string getLocation();
   
   virtual void setRight(Space*);
   virtual void setLeft(Space*);
   virtual void setUp(Space*);
   virtual void setDown(Space*);
   
   Space *right;
   Space *left;
   Space *up;
   Space *down; 

protected:
   string location;
/*
   Space *right;
   Space *left;
   Space *up;
   Space *down; 
*/
private:

};
#endif // SPACE_HPP

