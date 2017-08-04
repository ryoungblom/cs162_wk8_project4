/*********************************************************************
 ** Program name: Vampire.cpp
 ** Author: reuben youngblom
 ** Date: 3/5/17
 ** Description: Vampire Implementation file for Project 4
 *********************************************************************/

#include "Vampire.hpp"

/*
 This function initializes the Vampire.  It takes dice values, armor, and strength and sets them to Base Creature Class variables.
 */

Vampire::Vampire () : Creature ()
{
    attackDice = 1;
    attackSides = 12;
    defenseDice = 1;
    defenseSides = 6;
    armor = 1;
    strength = 18;
}


/*
 The attack function is pretty standard.  I roll the proper number of dice, and calculate the total, and that's the damage.
 */


int Vampire::attackTurn(Creature)
{
    
    int rollCount = 0;  //counts the rolls
    int damage = 0;  // resets damage every roll
    
    for (int i = 0; i < attackDice; i ++)  //only loops up to the number of dice allowed
    {
        rollCount ++;  //counts the rolls
        
        rolls = (1 + rand() % attackSides);  //gives random number in between 1 and the max for this die
        
        cout << "Roll " << rollCount << ": " << rolls << endl;  //and prints each roll for the user
        
        damage += rolls;  //and adds them together
    }
    
    cout << "Total Damage: ";  //and prints for the user (via main)
    
    return damage;
}

bool Vampire::defenseTurn(int attackIn)
{
    
    int block = 0;  //resets block every time
    
    cout << "Strength: " << strength << endl;  //prints for user
    
    
    int attackDamage = attackIn;  //takes in attack damage and sets it to different variable (unnecessary, but I feel better)
    
    int rollCount = 0;  //resets roll count
    
    
    for (int i = 0; i < defenseDice; i ++)  //same as above... gives the right number of rolls given the number of dice available
    {
        rollCount ++;  //tracks rolls
        
        rolls = 1 + rand() % defenseSides;  //gives a random number up to number of sides die has
        
        cout << "Roll " << rollCount << ": " << rolls << endl;  //prints
        
        block += rolls;  //and adds them together
    }
    
    cout << "Armor: +" << armor << endl;  //prints armor value
    
    totalBlock = block + armor;  //and calculates the total defense for the vampire
    
    cout << "Total Defense: " << totalBlock << endl;  //and prints it
    
    
    cout << "Charm attempt..." << endl;  //charm attempt
    
    charmTestInt = charmTest();  //sends to charm function, which gives either 1-2 randomly
    
    if (charmTestInt == 1)  //if it give back one....
    {
        cout << "Charm worked!  The attack misses!" << endl;  //charm works (below)!
    }
    
    else  //but if charm is 2....
    {
        cout << "Charm Failed!" << endl;  //it failed, and the damage is calculate
        
        damageDone = (attackDamage - block);  //calculates total damage given defensive dice rolls
        
        if (damageDone < 0)  //and avoids negative damage
        {damageDone = 0;}
        
        damageTotal = damageDone - armor; //and factors in armor
        if (damageTotal < 0)  //and avoids negatives
        {damageTotal = 0;}

    }
    
    cout << "Strength is now at: " << endl;  //prints for user
    
    
    if (charmTestInt == 1)  //if the charm worked above, the damage is zero because the attack missed
    {damageTotal = 0;}
    
    
    strength = strength - damageTotal;  //subtracts damage from strength
    
    if (strength < 0)  //and avoids negatives
    {strength = 0;}
    
    
    cout << strength << endl;  //prints strength
    
    if (strength <= 0)  //if strength is zero, vampire is dead
    {characterDeath = true;}  //so this will set bool to true, which will end the game
    
    return characterDeath;  //and returns a bool
    
}

int Vampire::charmTest ()  //this is the charm test.
{
    
    charmInt = 1 + rand() % 2;  //gives a random number

    return charmInt;  //and returns it (above)
}



string Vampire::getName()
{
    string name;
    name = "Vampire";  //returns the name of the creature
    return name;
}


