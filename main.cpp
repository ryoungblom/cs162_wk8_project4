/*********************************************************************
 ** Program name: main.cpp
 ** Author: reuben youngblom
 ** Date: 3/5/17
 ** Description: main function for Project 4
 *********************************************************************/



/*
#include "Creature.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"
*/

#include "HarryPotter.hpp"


int main() {

    srand (time (NULL));  //seeds random generator
    
    int player1, player2, teamMembers, attackSend;  //creates int for menu and to send to defensive functions
    bool gameOver = false;  //checks to see if someone dies
    bool totalGame = false;
    bool backTest = false;
    bool fighterBool;
    int loserCount = 0;
    char gradingMode;
    int player1score = 0;
    int player2score = 0;
    int round = 0;
    bool inputBool = true;
    
while (inputBool == true)
{
    
    cout << "How many creatures will be on each team? Please enter a number greater to or equal to 1:" << endl;  //takes in team size
    cout << endl;
    
    cin >> teamMembers;  //sets team size to teamMembers
    
    if (teamMembers > 0)  //validation.  If valid...
    {inputBool = false;}  //end loop
    else
    {  //but if not...
        cout << endl;
        cout << "sorry, invalid input!" << endl;
        cout << endl;
        inputBool = true;  //loop again
        
    }
}

inputBool = true;

    
    
    
    /*
     The below creates and initializes all the creatures.  I changed this from the two sets in proj. 3 to just using one set that's initialized in the .cpp files because they're all the same and I don't know how many I will need so I can't just make an infinite number of sets.
     */
    
    //Vampire vamp (1, 12, 1, 6, 1, 18);
    Vampire vamp;
    Barbarian barb;
    BlueMen blue;
    Medusa med;
    Harry hp;
    
    //Vampire vamp2;
    //Barbarian barb2 (2, 6, 2, 6, 1, 18);
    //BlueMen blue2 (2, 10, 3, 2, 3, 12);
    //Medusa med2 (2, 6, 1, 6, 3, 8);
    //Harry hp2 (2, 6, 2, 6, 0, 10);
    
    Creature *creature1;  //creates pointers for both player 1 and player 2 to create creature objects
    Creature *creature2;
    
    
    
    Creature *round1;  //I use these as an in-function stand-in for the creature pointers
    Creature *round2;
    
    
    
    struct player1node  //creates the data structure of node
    {
        Creature * fighter1;  //creates the "data" part to hold fighters
        player1node * next1;  //creates the "pointer" to point to next node
    };
    
    
    player1node * n1;  //current node pointer
    player1node * t1; //tail position pointer
    player1node * h1;  //head position pointer

    
    
    
    struct player2node  //creates the data structure of node. this is for player 2
    {
        Creature * fighter2;  //creates the "data" part to hold fighters
        player2node * next2;  //creates the "pointer" to point to next node
    };
    
    
    player2node * n2;  //current node pointer
    player2node * t2; //tail position pointer
    player2node * h2;  //head position pointer

    
    
    
    struct loserNode  //creates the data structure of node to hold the losers
    {
        Creature * fighter3;  //creates the "data" part to hold fighters
        loserNode * next3;  //creates the "pointer" to point to next node
    };
    
    
    loserNode * n3;  //current node pointer
    loserNode * t3; //tail position pointer
    loserNode * h3;  //head position pointer

    
/*****************FIRST ROUND***************************/
    while (inputBool == true)
    {
    
    cout << "Choose the first character for Player 1:" << endl;  //user directions
    
    cout << "Select 1 for the Vampire" << endl;
    cout << "Select 2 for the Barbarian" << endl;
    cout << "Select 3 for the Blue Men" << endl;
    cout << "Select 4 for Medusa" << endl;
    cout << "Select 5 for Harry Potter" << endl;
    
    
    cin >> player1;  //takes in choice

    if (player1 > 0 && player1 < 6)  //validation.  If valid...
    {inputBool = false;}  //end loop
    else
    {  //but if not...
        cout << endl;
        cout << "sorry, invalid input!" << endl;
        cout << endl;
        inputBool = true;  //loop again

    }
    }
    
    inputBool = true;
    
    switch (player1)  //takes in player one's choice and assigns it to the proper creature.
    {
        case 1:
        {
            creature1 = (new Vampire);  //i.e. if they choose 1, they get a vampire.
            cout << endl;
            cout << "Player 1 has chosen the Vampire!" << endl;
            cout << endl;
            break;
        }
            
        case 2:
        {
            creature1 = new Barbarian;  //2 = barbarian
            cout << endl;
            cout << "Player 1 has chosen the Barbarian!" << endl;
            cout << endl;
            break;
        }
            
        case 3:
        {
            creature1 = new BlueMen;  //and so on
            cout << endl;
            cout << "Player 1 has chosen the Blue Men!" << endl;
            cout << endl;
            break;
        }
            
        case 4:
        {
            creature1 = new Medusa;
            cout << endl;
            cout << "Player 1 has chosen Medusa!" << endl;
            cout << endl;
            break;
        }
            
        case 5:
        {
            creature1 = new Harry;
            cout << endl;
            cout << "Player 1 has chosen Harry Potter!" << endl;
            cout << endl;
            break;
        }
  
        
    }
    
    
    //the below is the same for player 2.  Gives them the options:
    while (inputBool == true)
    {
    
    cout << "Choose the first character for Player 2:" << endl;
    
    cout << "Select 1 for Vampire" << endl;
    cout << "Select 2 for Barbarian" << endl;
    cout << "Select 3 for Blue Men" << endl;
    cout << "Select 4 for Medusa" << endl;
    cout << "Select 5 for Harry Potter" << endl;
    
    cin >> player2;  //takes in input
    
    if (player2 > 0 && player2 < 6)  //validation.  If valid...
    {inputBool = false;}  //end loop
    else
    {  //but if not...
        cout << endl;
        cout << "sorry, invalid input!" << endl;
        cout << endl;
        inputBool = true;  //loop again
    }
}

inputBool = true;
    
    switch (player2)  //and uses this input for a switch function
    {
        case 1:
        {
            creature2 = new Vampire;  //but it uses the instantiations from the second set, just in case two players pick the same creature
            cout << endl;
            cout << "Player 2 has chosen the Vampire!" << endl;
            cout << endl;
            break;
        }
            
        case 2:
        {
            creature2 = new Barbarian;  //#2 is the second barbarian, etc
            cout << endl;
            cout << "Player 2 has chosen the Barbarian!" << endl;
            cout << endl;
            break;
        }
            
        case 3:
        {
            creature2 = new BlueMen; //and so on
            cout << endl;
            cout << "Player 2 has chosen the Blue Men!" << endl;
            cout << endl;
            break;
        }
            
        case 4:
        {
            creature2 = new Medusa;
            cout << endl;
            cout << "Player 2 has chosen Medusa!" << endl;
            cout << endl;
            break;
        }
            
        case 5:
        {
            creature2 = new Harry;
            cout << endl;
            cout << "Player 2 has chosen Harry Potter!" << endl;
            cout << endl;
            break;
        }
    }
    
/*****************FIRST ROUND***************************/
    
    
    /*
     this is the first bit of node creation .  The first round creates a new node and basically sets everything (head, tail, n1) equal to that node.  Subsequent nodes are slightly different.  This chunk of code sets up nodes for player1's linked list and player 2's linked list.  I do this all again in a loop next, because after the first one all node creations are the same
     */
    
    
    n1 = new player1node;  //creates new node
    n1 -> fighter1 = creature1;  //puts user-input int in data section
    t1 = n1;  //head and tail are both where n is, because there is only one node so far
    h1 = n1;  //sets head


    n2 = new player2node;  //creates new node
    n2 -> fighter2 = creature2;  //puts user-input int in data section
    t2 = n2;  //head and tail are both where n is, because there is only one node so far
    h2 = n2;//sets head to the only node that exists so far
    
    
    
    
    
    
    
    for (int i=1; i < teamMembers; i++)  //will loop through as many times as there are team members desired
    {
    while (inputBool == true)
    {
    
    cout << "Choose another character for Player 1:" << endl;  //user directions
    
    cout << "Select 1 for the Vampire" << endl;
    cout << "Select 2 for the Barbarian" << endl;
    cout << "Select 3 for the Blue Men" << endl;
    cout << "Select 4 for Medusa" << endl;
    cout << "Select 5 for Harry Potter" << endl;
    
    
    cin >> player1;  //takes in choice


        if (player1 > 0 && player1 < 6)  //validation.  If valid...
        {inputBool = false;
  
        }  //end loop
        else
        {  //but if not...
            cout << endl;
            cout << "sorry, invalid input!" << endl;
            cout << endl;
            inputBool = true;  //loop again
            cin.clear(); //clears stream
        }
    }
    
    inputBool = true;
    
    switch (player1)  //takes in player one's choice and assigns it to the proper creature.
    {
        case 1:
                {
                    creature1 = new Vampire;  //i.e. if they choose 1, they get a vampire.
                    cout << endl;
                    cout << "Player 1 has chosen the Vampire!" << endl;
                    cout << endl;
                    break;
                }
       
        case 2:
                {
                    creature1 = new Barbarian;  //2 = barbarian
                    cout << endl;
                    cout << "Player 1 has chosen the Barbarian!" << endl;
                    cout << endl;
                    break;
                }
        
        case 3:
                {
                    creature1 = new BlueMen;  //and so on
                    cout << endl;
                    cout << "Player 1 has chosen the Blue Men!" << endl;
                    cout << endl;
                    break;
                }
        
        case 4:
                {
                    creature1 = new Medusa;
                    cout << endl;
                    cout << "Player 1 has chosen Medusa!" << endl;
                    cout << endl;
                    break;
                    }
        
        case 5:
                {
                    creature1 = new Harry;
                    cout << endl;
                    cout << "Player 1 has chosen Harry Potter!" << endl;
                    cout << endl;
                    break;
                    }
    }
    
        
        
        n1 = new player1node;  //and creates a new node
        n1 -> fighter1 = creature1;  //and puts user-entered fighter into data section
        t1 -> next1 = n1;  //and sets "next" of tail (pointer) to next node
        t1 = t1->next1;  //and advances t

    
    
    //the below is the same for player 2.  Gives them the options:
    while (inputBool == true)
    {
        
        
    cout << "Choose another character for Player 2:" << endl;
    
    cout << "Select 1 for Vampire" << endl;
    cout << "Select 2 for Barbarian" << endl;
    cout << "Select 3 for Blue Men" << endl;
    cout << "Select 4 for Medusa" << endl;
    cout << "Select 5 for Harry Potter" << endl;
    
    cin >> player2;  //takes in input
    
        if (player2 > 0 && player2 < 6)  //validation.  If valid...
        {inputBool = false;}  //end loop
        else
        {  //but if not...
            cout << endl;
            cout << "sorry, invalid input!" << endl;
            cout << endl;
            inputBool = true;  //loop again
        }
    }
        
        inputBool = true;
        
    switch (player2)  //and uses this input for a switch function
    {
        case 1:
        {
            creature2 = new Vampire;  //but it uses the instantiations from the second set, just in case two players pick the same creature
            cout << endl;
            cout << "Player 2 has chosen the Vampire!" << endl;
            cout << endl;
            break;
        }
            
        case 2:
        {
            creature2 = new Barbarian;  //#2 is the second barbarian, etc
            cout << endl;
            cout << "Player 2 has chosen the Barbarian!" << endl;
            cout << endl;
            break;
        }
            
        case 3:
        {
            creature2 = new BlueMen; //and so on
            cout << endl;
            cout << "Player 2 has chosen the Blue Men!" << endl;
            cout << endl;
            break;
        }
            
        case 4:
        {
            creature2 = new Medusa;
            cout << endl;
            cout << "Player 2 has chosen Medusa!" << endl;
            cout << endl;
            break;
        }
            
        case 5:
        {
            creature2 = new Harry;
            cout << endl;
            cout << "Player 2 has chosen Harry Potter!" << endl;
            cout << endl;
            break;
        }
    }

        
        n2 = new player2node;  //and creates a new node
        n2 -> fighter2 = creature2;  //and puts user-entered  creature into data section
        t2 -> next2 = n2;  //and sets "next" of tail (pointer) to next node
        t2 = t2->next2;  //and advances t
        
        
    }
    

    
    player1node * ptr1 = h1;  //sets pointer to head
    
    player2node * ptr2 = h2;  //sets pointer to head
    
    cout << endl;  //for readibility.  All of the cout << endl;'s are for readbility

    
    /*
     this next bit is an optional grading mode.  if grading mode is entered, the program will pause after each round (or, I guess I should say, after each death) and display stats.  However, if grading mode is not entered, the program will just run straight through to the end.
     */
    
    cout << "Thanks!" << endl;
    
    while (inputBool == true)  //input validation
    {
        
    cout << endl;
    cout << " Would you like to enter Testing/Grading mode?  Please enter 'y' or 'n':" << endl;  //user instructions
    cin >> gradingMode;
    
    
    if (gradingMode == 'y' or gradingMode == 'n')  //validation.  If valid...
    {inputBool = false;}  //end loop
    else
    {  //but if not...
        cout << endl;
        cout << "sorry, invalid input!" << endl;
        cout << endl;
        inputBool = true;  //loop again
        
    }
}

    inputBool = true;  //resets bool


    
    if (gradingMode == 'y')
        
    {cout << "Thanks! The game will pause after each round to review the stats, and can be resumed by pressing 'enter'." << endl;  //user instructions
        
        cout << "Press enter when ready to continue." << endl;
        
        cin.clear(); //clear the error bits for the cin input stream (from cplusplus.com)
        cin.sync(); //synchronize the input buffer, discarding any leftover characters in the buffer (from cplusplus.com)
        cin.ignore(); //suggestion from (from cplusplus.com)
        
        
        string nextRoundAdvance;  //creates string, but it'll be empty.  I use it to have user press enter to advance.
        
        getline(cin, nextRoundAdvance);  //this is used to pause the game after each round until the user presses enter

    }
    
    
    

    
while (totalGame == false)  //overarching bool to check when game is totally over
   {
    
       round1 = ptr1->fighter1;  //sets "round1" and "round2" equal to the actual creatures in the current node
       round2 = ptr2->fighter2;
       
       cout << endl;
       
       round ++;  //tracks rounds (for display, not really important)
       
      while (backTest == false)  //in-game loop
        
    {
        cout << "***********ROUND " << round << "**************" << endl;  //displays what round we're on
        
        cout << endl;
        
        cout << "Player One attacked with: " << endl;  //user info
        
        attackSend = round1 -> attackTurn(barb);  //attackSend int is set to the value returned from creature 1's attack function
        
        cout  << attackSend << endl;  //and tells user what the result of attack is
        
        cout << endl;
    
        cout << "Player Two's defense: " << endl;  //and then pulls up the defense by player 2
        
        gameOver = round2 -> defenseTurn(attackSend);  //takes in attack info and sends it to proper defensive function
        
        cout << endl;
        
        if (gameOver == true)  //here, if someone dies, this loop kicks on
        {
            

            cout << "Player One's " << round1 -> getName() << " has killed Player 2's " << round2 -> getName() << "!" << endl;  //and displays the winner
            cout << "***********************************************************" << endl;

        
            
            fighterBool = true; //changes fighterbool to true.  if this is true later, program knows that player 1 won
        
            if ((ptr2 -> next2) == NULL)  //If this is the last character a player has....
            {
                cout << endl;
                cout << "Player 1 has the last creature standing!" << endl;  //tell the players
                cout << endl;
                totalGame = true;
                gameOver = false;  //set all the bools to the opposite, so that all the loops will end
                backTest = true;
                player1score = player1score + 2;  //tally up the final points for the players
                player2score = player2score - 1;
                
                break;  //and break out of the loop
            }


            if (gradingMode == 'y')   //if in grading mode....
            {
                cout << endl;
                cout << "Here are the stats for this round: " << endl;  //user info
                
                cout << "Player 1's " << round1 -> getName() << " v. Player 2's " << round2 -> getName() << "!" << endl;
                
                cout << "Winner: Player 1! " << endl;  //display stats from this around
                
                cout << "Current Score: " << endl;
                
                
                player1score = player1score + 2;  //and tally up points
                player2score = player2score - 1;
                
                cout << "Player One: " << player1score << endl;  //and display them
                cout << "Player Two: " << player2score << endl;
                
                
                cout << "Please press enter to move into the next round" << endl;
                
                //lets the user see the stats and has them press enter to advance, so they have time to read the scores and whatever.
                
                string advance;
                
                getline(cin, advance);  //this is used to pause the game after each round until the user presses enter
                
            }

        
            cout << endl;
            
            player2node *temp1;  //create temp pointer
            temp1 = h2 -> next2;  //set that equal to the node AFTER head
            delete h2; //delete head

            h2 = temp1;  //and place h pointer at "temp", which was the next one in line.  This is the new head

            cout << endl;

            //since player one won, the process is a little different:
            player1node * temp2= h1;
            
            n1 = new player1node;  //and creates a new node
            n1 -> fighter1 = round1;  //and puts fighter (copy) into data section
            t1 -> next1 = n1;  //and sets "next" of tail (pointer) to next node
            t1 = t1->next1;  //and advances t
            t1->next1 = NULL;  //this just confirms that the next pointer in line will be null
            h1 = temp2 -> next1;  //and sets head to temp->next


            delete temp2;  //and deletes the temp node (old head)

            ptr1 = h1;  //sets pointer to head
            ptr2 = h2;  //sets player 2 pointer to head

            
            gameOver = false;  //and switches the bool back to false, which resets it
            
            round1 -> restoreDamage();  //and restores damage to the winner
             
            break;  //and breaks out of the loop
        }
        
        
        cout << "Counterattack!" << endl;  //user info.  This is the counter attack, if necessary!
        
        cout << endl;
        
        
        cout << "Player Two attacked with: " << endl;  //is the same as above, but roles are switched
        
        attackSend = round2 -> attackTurn(barb);  //attacks with second player
        
        cout  << attackSend << endl;  //prints is
        
        cout << endl;

        
        cout << "Player One's defense: " << endl;  //player one defends
        
        gameOver = round1 -> defenseTurn(attackSend); //and takes in attack value
        
        
        if (gameOver == true)  //and ends the game if someone is dead after this round
        {
            cout << "Player Two's " << round2 -> getName() << " has killed Player 1's " << round1 -> getName() << "!" << endl;
             cout << "***********************************************************" << endl; //user info

            fighterBool = false;  //records who won fight, to place loser in loser linked list.  false = player 2  won

            if ((ptr1 -> next1) == NULL)  //if this death was the last creature in line....
            {
                cout << endl;
                cout << "Player 2 has the last creature standing!" << endl;
                cout << endl;  // inform user
                totalGame = true;  //and switch bools to be the opposite
                gameOver = false;
                backTest = true;
                
                player1score = player1score - 1;  //and add more points
                player2score = player2score + 2;
                
                break;  //and break out of the loop
            }

            
            if (gradingMode == 'y')   //if grading mode is active....
            {
                cout << endl;
                
                cout << "Here are the stats for this round: " << endl;
                
                cout << "Player 1's " << round1 -> getName() << " v. Player 2's " << round2 -> getName() << "!" << endl;
                
                cout << "Winner: Player 2! " << endl;   //print out info
                
                cout << "Current Score: " << endl;  //i.e. current score
                
                player1score = player1score - 1;
                player2score = player2score + 2;  //with updated totals
                
                cout << "Player One: " << player1score << endl;
                cout << "Player Two: " << player2score << endl;  //prints scores
                
                cout << "Please press enter to move into the next round" << endl;
                
                string advance;
                
                getline(cin, advance);  //this is used to pause the game after each round until the user presses enter

            }
            

            //this takes player 1's dead character and deletes it, and moves everything up one spot on the linked list
            cout << endl;
            player1node *temp2;  //create temp pointer and set to head
            temp2 = h1 -> next1;  //set that equal to the node AFTER head
            delete h1; //delete head

            h1 = temp2;  //and place h pointer at "temp", which was the next one in line.  This is the new head

            cout << endl;

            player2node * temp1 = h2;  //and does the same for player 2

            n2 = new player2node;  //but first, it creates a new node for the surviving character
            n2 -> fighter2 = round2;  //and puts fighter into data section
            t2 -> next2 = n2;  //and sets "next" of tail (pointer) to next node
            t2 = t2->next2;  //and advances t
            t2->next2 = NULL;  //makes sure t->next is null

            delete temp1;
            h2 = temp1 -> next2;

            
            ptr1 = h1;  //sets pointer to head
            ptr2 = h2;  //sets player 2 pointer to head

            gameOver = false;  //resets game over
            
            round2 -> restoreDamage();  //and givs surviving fighter some health back

            break;
        }
        
        
        cout << endl;
        
        cout << "Next Round!" << endl;  //user info
        
        cout << endl;
        
        if (backTest == true)  //double-check bool
        {break;}
        
    }  //if the game is over, the loop ends here
    

       /* 
        this is the list to hold the users.  First time through is a little different, and then the rest of the times are the same.  So the first time through I add to the test int, so the next time(s) it will get skipped
        */
       if (loserCount == 0)
       {
           
           n3 = new loserNode;  //creates new node
           if (fighterBool == false)
           {n3 -> fighter3 = round1;}  //puts fighter in data section.  Knows which one to place in loser list based on fighterBool
           else
           {n3 -> fighter3 = round2;}
           
           t3 = n3;  //sets tail to n3
           h3 = n3;  //and head to n3
           loserCount ++;
       }
       
       
       else  //i.e. after first time through
       {

           n3 = new loserNode;  //creates new node
           
           if (fighterBool == false)
           {n3 -> fighter3 = round1;}  //puts fighter in data section, according to bool
           else
           {n3 -> fighter3 = round2;}  //could be player 2's fighter
           
           t3 -> next3 = n3;  //and sets "next" of tail (pointer) to next node
           t3 = t3->next3;  //and advances t
           t3->next3 = NULL;
           
       }

       if (backTest == true)   //a double check to see if loop should end
       {break;}

   }
    
    
    
    
    cout << "Game Over!  Final Stats: " << endl;  //prints final stats
    
    cout << "Player One: " << player1score << endl;
    cout << "Player Two: " << player2score << endl;  //prints final scores
    
    if (player2score > player1score)  //if player 2 has a higher ultimate score
    {
        cout << endl;
        cout << "Player Two is the ultimate winner!" << endl;  //tells user p2 won
        cout << endl;
    }
    
    else if (player2score < player1score)  //but if not
    {
        cout << endl;
        cout << "Player One is the ultimate winner!" << endl;  //says that p1 won
        cout << endl;
    }

    else
    {
        cout << endl;
        cout << "We have a tie!" << endl;  //or, there can be a tie, but this is rare.
        cout << endl;
    }
    
char loserQuestion;  //asks to see if user wants to see loser stack
    
    
    while (inputBool == true)  //input validation
    {
        
    cout << endl;
    cout << "Would you like to see the loser pile?  Please select 'y' or 'n':" << endl;
    
    cin >> loserQuestion;
    
    if (loserQuestion == 'y' or loserQuestion == 'n')  //validation.  If valid...
    {inputBool = false;}  //end loop
    else
    {  //but if not...
        cout << endl;
        cout << "sorry, invalid input!" << endl;
        cout << endl;
        inputBool = true;  //loop again
        
    }
}

inputBool = true;  //resets bool


    
    
    if (loserQuestion == 'y')  //if they choose yes and want to see the stack....
    {
    
        cout << "Here are the losers:" << endl;
        cout << endl;
        
    n3 -> next3 = NULL;  //by first ending it with a NULL
    
    
    loserNode * ptr3 = h3;  //then setting a new node pointer to the head
    
    while (ptr3 != NULL)  //and saying, "until it hits NULL...."
    {
        cout << (ptr3->fighter3)->getName() << " " << endl;  //"print out data in succession"
        ptr3 = ptr3 -> next3;  //"and then advance pointer to go to next node"
    }

    }
    
    
    else
    {cout << "OK!" << endl;}  //if they don't want to see it, that's fine.
    cout << endl;
    
    cout << "thanks for playing!" << endl;  //and users are thanked for playing
    
    
    return 0;
}






