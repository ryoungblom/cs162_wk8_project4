/*********************************************************************
 ** Program name: BlueMen.cpp
 ** Author: reuben youngblom
 ** Date: 3/5/17
 ** Description: Blue Men Implementation file for Project 4
 *********************************************************************/

#include "BlueMen.hpp"

BlueMen::BlueMen () : Creature ()
{
    
    attackDice = 2;
    attackSides = 10;
    defenseDice = 3;  //this function initializes variables from Creature base class
    defenseSides = 2;
    armor = 3;
    strength = 12;
    
}


/*
 The Blue Men attack is pretty standard.
 */

int BlueMen::attackTurn(Creature)
{
    int rollCount = 0;  //resets all values
    int damage = 0;
    
    for (int i = 0; i < attackDice; i ++)  //and rolls as many times as there are dice
    {
        rollCount ++;  //tracker
        
        rolls = (1 + rand() % attackSides);  //generates random number, up to number of sides on die
        
        cout << "Roll " << rollCount << ": " << rolls << endl;  //and prints it for user
        
        damage += rolls;  //and tracks it
    }
    
    cout << "Total Damage: ";  //prints total for user
    
    return damage;
    
}


bool BlueMen::defenseTurn(int attackIn)  //defense function
{
    
    cout << "Strength: " << strength << endl;  //prints for user
    
    int attackDamage = attackIn;  //sets attack value
    
    if (strength < 9)  //here, takes in their strength and adjusts number of dice available based on strengh
    {
        defenseDice = 2; //if there's less than 9 strength, they only get 2 dice
    }
    
    if (strength < 5)
    {
        defenseDice = 1;  //if they have 4 or less, they only get one
    }
    
    
    int block = 0;
    int rollCount = 0;
    
    
    for (int i = 0; i < defenseDice; i ++)   //gives proper number of rolls given strength (adjusted above)
    {
        rollCount ++;  //tracks rolls
        
        rolls = 1 + rand() % defenseSides;  //gives random roll up to number of sides
        
        cout << "Roll " << rollCount << ": " << rolls << endl;  //and prints for user
        
        block += rolls; //and adds them
    }
    
    cout << "Armor: +" << armor << endl;  //prints armor for user
    totalBlock = block + armor;  //and calculates
    
    cout << "Total Defense: " << totalBlock << endl;  //and prints for user
    
    damageDone = (attackDamage - block);  //total damage given attack and block
    
    if (damageDone < 0)
    {damageDone = 0;}  //doesn't let it slip below zero
    
    damageTotal = damageDone - armor;
    if (damageTotal < 0)  //accounts for armor, but wont let it slip below zero.
    {damageTotal = 0;}
    
    strength = strength - damageTotal;  //recalculates strength given damage
    
    cout << "Strength is now at: " << endl;  //and prints for user
    
    if (strength < 0)
    {strength = 0;}  //but doesn't let it go under zero
    
    
    if (strength < 9 && strength >= 5)  //the FIRST time the blue men slip between 5-9 strength, lets them know what's going on with their dice
    {
        strengthDice ++;  //essentally puts strengthDice equal to 1
        if (strengthDice == 1)  //and since they == 1, print this message:
        {cout << "One of the Blue Men is dead! There are now only 2 two defense dice! Strength is now:" << endl;
            strengthDice ++;  //but then make it equal to 2, so it never prints again
        }
    }
    
    if (strength < 5)  //but if sterngth is less than 5
    {
        
        if (strengthDice == 9)  //if this equals nine, do nothing (after the first time through the below function, it will == 9)
        {
            int x = 0;  //this does nothing, really.
        }
        
        else strengthDice = 8;  //but if it doesn't equal nine, set it equal to 8
        
        if (strengthDice == 8)  //so that it runs through this function
        {
            cout << "Two of the Blue Men are dead! There is now only one defense die! Strength is now:" << endl;  //which offers dice info
            strengthDice ++;  //and then sets strengthDice = 9, so this will never display again
        }
    }
    
    
    cout << strength << endl;  //prints strength for user
    
    if (strength <= 0)  //and checks to see if Blue Men are dead.
    {characterDeath = true;}  //this will end the game
    
    return characterDeath;
    
}

string BlueMen::getName()
{
string name;
name = "Blue Men"; //returns the name of the creature
return name;
}


