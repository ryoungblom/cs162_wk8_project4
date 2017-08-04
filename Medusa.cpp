/*********************************************************************
 ** Program name: Medusa.cpp
 ** Author: reuben youngblom
 ** Date: 3/5/17
 ** Description: Medusa Implementation file for Project 4
 *********************************************************************/

#include "Medusa.hpp"

Medusa::Medusa () : Creature ()
{
    
    attackDice = 2;
    attackSides = 6;
    defenseDice = 1;  //constructor that initializes variables from Creature base class
    defenseSides = 6;
    armor = 3;
    strength = 8;
    
}


int Medusa::attackTurn(Creature)
{
    
    int rollCount = 0;
    int damage = 0;  //resets these every roll
    
    for (int i = 0; i < attackDice; i ++)  //rolls as many times as there are dice to roll
    {
        rollCount ++;  //tracker
        
        rolls = (1 + rand() % attackSides);  //gives random roll up to number of sides
        
        cout << "Roll " << rollCount << ": " << rolls << endl;  //prints
        
        damage += rolls;  //and tracks
    }
    
    cout << "Total Damage: ";  //prints total
    
    if (damage == 12)  //if a 12 is rolled
    {
        cout << "Medusa has used Glare! Automatic Win! Total Damage:" << endl;
        
        damage = 9999;  //automatic win!  except Harry, who can come back to life even after this
    }
    
    return damage;
}


bool Medusa::defenseTurn(int attackIn)  //defense function is standard
{
    
    int block = 0;  //resets block
    
    cout << "Strength: " << strength << endl;  //prints strength
    
    
    int attackDamage = attackIn;  //takes in attack (not necessary but i like to)
    
    int rollCount = 0;  //resets roll count each round
    
    
    
    for (int i = 0; i < defenseDice; i ++)  //rolls as many dice as are available
    {
        rollCount ++;  //tracker
        
        rolls = 1 + rand() % defenseSides;  //gives random roll up to number of sides
        
        cout << "Roll " << rollCount << ": " << rolls << endl;  //prints
        
        block += rolls;  //tracks
    }
    cout << "Armor: +" << armor << endl;  //prints armor
    
    totalBlock = block+armor;  //caclculates with armor
    
    cout << "Total Defense: " << totalBlock << endl;  //and prints

    damageDone = (attackDamage - block);  //calculates total damage
    
    if (damageDone < 0)
    {damageDone = 0;}  //but doesn't let it slip below zero
    
    damageTotal = damageDone - armor;
    if (damageTotal < 0)
    {damageTotal = 0;}  //accounts for armor, but won't let it slip below zero
    
    
    strength = strength - damageTotal;   //recalculates strength
    
    cout << "Strength is now at: " << endl;//prints for user
    
    if (strength < 0)  //doesn't let strength slip below zero
    {strength = 0;}
    
    
    cout << strength << endl;  //prints for user
    
    if (strength <= 0)  //test for death.  a true bool ends the game when passed
    {characterDeath = true;}
    
    return characterDeath;
    
    
}


string Medusa::getName()
{
string name;
name = "Medusa"; //returns the name of the creature
return name;
}

