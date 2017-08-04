/*********************************************************************
 ** Program name: HarryPotter.hpp
 ** Author: reuben youngblom
 ** Date: 3/5/17
 ** Description: HarryPotter header file for Project 4
 *********************************************************************/

#include "Medusa.hpp"

class Harry : public Creature
{
public:  //prototype, and individual attack and defense functions
    Harry ();
    bool defenseTurn (int attackIn);
    int attackTurn (Creature);
    int lifeCounter = 0;  //counts his lives
    string getName (); //returns the name of the creature
    
};