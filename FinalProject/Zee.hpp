/********************************************************************
** Filename: Zee.hpp
** Author: Keisha Arnold
** Description: Final Project. Class specification/header file for the 
** Zee class, derived from the Space class. 
** Input:
** Output:
*********************************************************************/
#ifndef ZEE_HPP
#define ZEE_HPP
#include "Space.hpp"
#include "Dice.hpp"	// needed to create Dice objects & roll Die
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Zee : public Space {
public:
   // constructor 
   Zee();

   // destructor
   virtual ~Zee(); 

   // choiceMenu is a virtual function  
   //virtual void choiceMenu();
   
   // alien is a virtual function
   virtual void alien();   

   // inherit playGm function
   //virtual int playGm();

   // inherit getters and setters
/*
   virtual void setLocation(string);
   virtual void setRight(Space*);
   virtual void setLeft(Space*);
   virtual void setUp(Space*);
   virtual void setDown(Space*);
*/
protected:
   // inherit member variables
/*
   string location;
   Space *right;
   Space *left;
   Space *up;
   Space *down; 
*/
private:


};
#endif // ZEE_HPP

