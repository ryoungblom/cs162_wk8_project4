/*********************************************************************
 ** Program name: BlueMen.hpp
 ** Author: reuben youngblom
 ** Date: 3/5/17
 ** Description: Blue Men header file for Project 4
 *********************************************************************/

#include "Barbarian.hpp"

class BlueMen : public Creature
{
public:
    BlueMen ();  //prototype
    bool defenseTurn (int attackIn);  //individual attack and defense functions
    int attackTurn (Creature);
    int strengthDice = 0;  //this sets the "counter" for how many dice they have left

    string getName ();//returns the name of the creature
};
