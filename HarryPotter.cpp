/*********************************************************************
 ** Program name: HarryPotter.cpp
 ** Author: reuben youngblom
 ** Date: 3/5/17
 ** Description: Harry Potter Implementation file for Project 4
 *********************************************************************/


#include "HarryPotter.hpp"

Harry::Harry () : Creature ()
{
    
    attackDice = 2;
    attackSides = 6;
    defenseDice = 2;  //constructor, takes in ints from Constructor
    defenseSides = 6;
    armor = 0;
    strength = 10;
    
}


int Harry::attackTurn(Creature)  //standard attack
{
    
    int rollCount = 0;  //resets everything each turn
    int damage = 0;
    
    for (int i = 0; i < attackDice; i ++)  //rolls right number of dice
    {
        rollCount ++;  //tracks
        
        rolls = (1 + rand() % attackSides);  //gives random number up to sides available
        
        cout << "Roll " << rollCount << ": " << rolls << endl;  //prints each roll
        
        damage += rolls;  //tracks
    }
    
    cout << "Total Damage: ";  //prints for user
    
    return damage;
    
}


bool Harry::defenseTurn(int attackIn)  //defense function
{
    
    int block = 0;  //resets every time
    
    cout << "Strength: " << strength << endl;  //prints strength
    
    int attackDamage = attackIn;  //sets attack to a variable (unnecessary)
    
    int rollCount = 0;
    
    
    for (int i = 0; i < defenseDice; i ++)  //rolls defense dice
    {
        rollCount ++;  //tracks
        
        rolls = 1 + rand() % defenseSides;  //rolls defense sides
        
        cout << "Roll " << rollCount << ": " << rolls << endl;  //prints for user
        
        block += rolls;  //calculates
    }
    
    cout << "Armor: +" << armor << endl;  //accounts for armor
    
    totalBlock = block+armor;  //calculates with armor
    
    cout << "Total Defense: " << totalBlock << endl;  //prints total for user
    
    damageDone = (attackDamage - block);  //calculates total damage
    
    if (damageDone < 0)  //doesn't let it slip below zero
    {damageDone = 0;}
    
    damageTotal = damageDone - armor;  //calculates with armor but doesn't let it slip below zero
    if (damageTotal < 0)
    {damageTotal = 0;}
    
    
    strength = strength - damageTotal;  //recalculates strength
    
    
    if (strength <= 0)  //if Harry dies
    {
        lifeCounter ++;  //Adds one to lifeCounter, making it 1
        strength = 0;
    }
    
    if (lifeCounter == 1)  //and if lifeCounter is 1
    {
        cout << "Harry died, but has come back to life!  You have 20 additional strength points!" << endl;
        strength = 20;  //resets strength to 20
        lifeCounter ++;  //and makes lifecounter 2, so this can never happen again
    }
    
    cout << "Strength is now at: " << endl;  //prints strength
    
    cout << strength << endl;
    
    
    if (strength <= 0)  //checks to see if he died
    {characterDeath = true;}
    
    return characterDeath;
    
}

string Harry::getName()
{
string name;
name = "Harry Potter"; //returns the name of the creature
return name;
}