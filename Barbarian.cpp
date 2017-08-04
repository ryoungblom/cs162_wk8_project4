/*********************************************************************
 ** Program name: Barbarian.cpp
 ** Author: reuben youngblom
 ** Date: 3/5/17
 ** Description: Barbarian Implementation file for Project 4
 *********************************************************************/

#include "Barbarian.hpp"


/*
 this is the constructor.  It takes in initialization and pulls info from Creature, and sets creature values using base class variables.
 */

Barbarian::Barbarian () : Creature ()
{
    
    attackDice = 2;
    attackSides = 6;
    defenseDice = 2;
    defenseSides = 6;
    armor = 1;
    strength = 12;
}



int Barbarian::attackTurn(Creature)  //attack function
{
    int rollCount = 0;  //sets everything equal to zero
    int damage = 0;
    
    for (int i = 0; i < attackDice; i ++)  //roll loop goes the number of times as there are dice available
    {
        rollCount ++;  //counts the rolls
        
        rolls = (1 + rand() % attackSides);  //and gives a random value up to number of sides
        
        cout << "Roll " << rollCount << ": " << rolls << endl;  //prints each roll for user
        
        damage += rolls;  //and calculates
    }
    
    cout << "Total Damage: ";  //and prints damage for user
    
    return damage;
    
}

bool Barbarian::defenseTurn(int attackIn)//defense function takes in attack values
{
    
    int block = 0;  //sets block to 0
    
    cout << "Strength: " << strength << endl;  //prints baseline strength
    
    
    int attackDamage = attackIn;  //sets attack damage int to number taken in
    
    int rollCount = 0;  //resets roll count
    
    
    for (int i = 0; i < defenseDice; i ++)  //rolls like above.  Takes in number of dice and rolls that many times
    {
        rollCount ++;  //tracks rolls
        
        rolls = 1 + rand() % defenseSides;  // gives number up to that many sides
        
        cout << "Roll " << rollCount << ": " << rolls << endl;  //and prints each roll
        
        block += rolls;  //and adds them
    }
    cout << "Armor: +" << armor << endl;  //prints armor for user
    
    totalBlock = block + armor;  //and account for it here
    
    cout << "Total Defense: " << totalBlock << endl;  //and gives total block, including armor
    
    damageDone = (attackDamage - block);  //calculates total damage done
    
    if (damageDone < 0)
    {damageDone = 0;}  //but doesn't let it slip into negative numbers
    
    damageTotal = damageDone - armor;  //accounts for armor
    if (damageTotal < 0)  //but doesn't let it go below zero
    {damageTotal = 0;}
    
    
    strength = strength - damageTotal;  //recalculates strength
    
    
    cout << "Strength is now at: " << endl;  //and prints for user
    
    if (strength < 0)  //but doesn't let it get below zero
    {strength = 0;}
    
    cout << strength << endl;  //prints for user
    
    if (strength <= 0)  //if strength is zero, barbarian is dead.  this bool will switch to true and the game will end
    {characterDeath = true;}
    
    return characterDeath;
    
}

string Barbarian::getName()
{
string name;
name = "Barbarian"; //returns the name of the creature
return name;
}


