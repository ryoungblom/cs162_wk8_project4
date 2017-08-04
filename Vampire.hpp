/*********************************************************************
 ** Program name: Vampire.hpp
 ** Author: reuben youngblom
 ** Date: 3/5/17
 ** Description: vampire header file for Project 4
 *********************************************************************/

#include "Creature.hpp"

class Vampire : public Creature  //Vampire class
{
private:
    //int strength;  //has strength
    int charmTestInt;  //test for whether charm works
    
public:
    Vampire ();  //constructor
    int attackTurn(Creature);  //attack function
    bool defenseTurn (int attackIn);  //defense function
    int charmTest ();  //test for charm
    bool charmBool;  //bool for charm
    int charmInt;  //another charm int (i needed two)
    string getName ();  //returns the name
};
