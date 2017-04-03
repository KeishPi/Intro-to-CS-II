/*******************************************************************
** Program Filename: Dice.hpp
** Author: Keisha Arnold
** Date: July 3, 2016
** Description: Class specification/header file named Dice.hpp.
** Includes the class declaration, access specifiers, and class
** members for the Dice class.
** Input:
** Output:
********************************************************************/
/* Dice.hpp */
#ifndef DICE_HPP
#define DICE_HPP

class Dice {
public:
   /* default constructor */
   Dice(); 

   /* constructor */
   Dice(int sides);

   int rollDie();

   int getNumSides();

   void setNumSides(int);

   int getRollResult();

protected:
   int numSides;
   int rollResult; 

private:
    
};
#endif //DICE_HPP
