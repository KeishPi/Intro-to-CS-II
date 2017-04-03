/********************************************************************
** Filename: Ixchel.hpp
** Author: Keisha Arnold
** Description: Final Project. Class specification/header file for the 
** Ixchel class, derived from the Space class. 
** Input:
** Output:
*********************************************************************/
#ifndef IXCHEL_HPP
#define IXCHEL_HPP
#include "Space.hpp"
//#include "Item.hpp"
#include "Dice.hpp"	// needed to create Dice objects & roll Die
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Ixchel : public Space {
public:
   // constructor 
   Ixchel();

   // destructor
   virtual ~Ixchel(); 

   // choiceMenu is a virtual function  
   //virtual void choiceMenu();
   
   // redefine pure virtual alien function
   virtual void alien();

   // play a game
   virtual int playGm();

   // inherit getters and setters
/*
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
*/
   
   //Item getKey();
   //Item key(string);

protected:
   // inherit member variables
/*
   string location;
*/

private:
   //Item key(string);
};
#endif // IXCHEL_HPP

