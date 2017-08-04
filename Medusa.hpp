/*********************************************************************
 ** Program name: Medusa.hpp
 ** Author: reuben youngblom
 ** Date: 3/5/17
 ** Description: Medusa header file for Project 4
 *********************************************************************/

#include "BlueMen.hpp"

class Medusa : public Creature
{
public:  //prototype and individual attack and defense functions
    Medusa ();
    bool defenseTurn (int attackIn);
    int attackTurn (Creature);
    string getName ();  //returns the name of the creature
    
};
