/*********************************************************************
 ** Program name: Creature.hpp
 ** Author: reuben youngblom
 ** Date: 3/5/17
 ** Description: Creature Base Class Header for Project 4
 *********************************************************************/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;


class Creature  //creates an abstract class.  These functions are virtual so the specific creature functions will always be the ones that are run.  But this provides a framework and structure for them
{
protected:
    int damage;  //damage given by attack
    int block;  //total blocking power given dice rolls
    int attackDice;   //how many attack dice each creature has
    int attackSides;  //how many sides they have
    int defenseDice;  //how many defense dice the creatures have
    int defenseSides;  //and how many sides the defense dice have
    int armor;  //the creature's armor
    int strength;  //the creature's health
    int counter;  //this is a counter that I use occasionally for various counting
    int damageDone;  //tracks how much damage is done after accounting for a block
    int damageTotal;  //and after accounting for armor
    int rolls;  //this tracks the rolls (rolls the dice the right number of times)
    bool characterDeath = false;  //this will switch when someone dies
    int totalBlock;  //total blocking power of the creatures
    
public:
    Creature ();  //creature constructor
    //void setAttack (int aPower);
    virtual int attackTurn(Creature);  //virtual function for attacks
    virtual bool defenseTurn (int attackIn);  //virtual function for defense, takes in attack output
    //void turn (Creature one);
    //void cStrength (int hit);
    //int rollDie (int sides, int number);
    //int applyDamage ();
    void restoreDamage ();  //restores strength to a fighter
    virtual string getName();  //returns the name
};

