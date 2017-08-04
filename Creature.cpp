/*********************************************************************
 ** Program name: Creature.cpp
 ** Author: reuben youngblom
 ** Date: 3/5/17
 ** Description: Creature Base Class Implementation file for Project 4
 *********************************************************************/

#include "Creature.hpp"

Creature::Creature ()  //nothing needed here, I have specific functions for each creature
{
    
}

/*
int Creature::rollDie (int sides, int number)

{
    return 0;
    
}
 */

int Creature::attackTurn(Creature) //nothing needed here, I have specific functions for each creature
{
    
    return 0;
}


bool Creature::defenseTurn(int attackIn) //nothing needed here, I have specific functions for each creature

{
    
    return characterDeath;
}


void Creature::restoreDamage()
{
    strength = strength + (strength / 4);  //this restores 1/4 of a creature's damage
}


string Creature::getName()  //returns the name
{
    return "";
}