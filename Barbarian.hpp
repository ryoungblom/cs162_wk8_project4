/*********************************************************************
 ** Program name: Barbarian.hpp
 ** Author: reuben youngblom
 ** Date: 3/5/17
 ** Description: barbarian header file for Project 4
 *********************************************************************/

#include "Vampire.hpp"

/*
 Barbarian is the standard.  There is nothing fancy, so this is the baseline creature.
 */


class Barbarian : public Creature
{
public:
    Barbarian ();  //prototype
    int attackTurn (Creature);  //individual attacks and defense functions
    bool defenseTurn (int attackIn);
    string getName ();//returns the name of the creature

};
