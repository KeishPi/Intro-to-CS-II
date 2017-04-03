/********************************************************************
** Filename: Tesseract.hpp
** Author: Keisha Arnold
** Description: Final Project. Class specification/header file for the 
** Tesseract class, derived from the Space class. 
** Input:
** Output:
*********************************************************************/
#ifndef TESSERACT_HPP
#define TESSERACT_HPP
#include "Space.hpp"
#include "Dice.hpp"	// needed to create Dice objects & roll Die
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Tesseract : public Space {
public:
   // constructor 
   Tesseract();

   // destructor
   virtual ~Tesseract(); 

   // choiceMenu is a virtual function  
   //virtual void choiceMenu();
   
   // redefine pure virtual alien function
   virtual void alien();

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

protected:
   // inherit member variables
/*
   string location;
*/
private:

};
#endif // TESSERACT_HPP

