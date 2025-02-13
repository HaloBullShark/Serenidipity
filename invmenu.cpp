/**********************************************
 * Author: David Pena
 * Assignment: Serendipity
 * Date: 2/4/2025
 * Purpose: Menu for different inventory
 * options apart of Serendipity.
 *********************************************/
#include <iomanip>
#include <iostream>
using namespace std;

void invmenu()
{  
  
  char choice;        //holds a char for easier input validation

  do{
     cout << "\033[2J\033[1;1H";
    
     //hardcoded menu
	  cout << "==================================================================================\n";
     cout << "= Serendipity Booksellers                                                        =" << endl;
     cout << "= Inventory Database                                                             =" << endl;
     cout << "= 1. Look Up a Book                                                              =" << endl;
     cout << "= 2. Add a Book                                                                  =" << endl;
     cout << "= 3. Edit a Book's Record                                                        =" << endl;
     cout << "= 4. Delete a Book                                                               =" << endl;
     cout << "= 5. Return to the Main Menu                                                     =" << endl;
	  cout << "==================================================================================\n";
     cout << "Enter your choice:";

         //Asks for user input as well as validates the input and pauses the terminal
         cin >> choice;        //input prompt

         switch (choice){
         case '1':
            cout << "\n" << setw(41) << "You selected item: 1" << endl;
            break;
         case '2':
            cout << "\n" << setw(41) << "You selected item: 2" << endl;
            break;
         case '3':
            cout << "\n" << setw(41) << "You selected item: 3" << endl;
            break;
         case '4':
            cout << "\n" << setw(41) << "You selected item: 4" << endl;
            break;
         case '5':
            cout << "\n" << setw(41) << "You selected item: 5" << endl;
            break;
         default:
            cout << "\n" << setw(60) << "Please enter a number in the range 1-5." << endl;    //input validation
          }
    
          cout << setw(47) << "Press ENTER to continue..." << endl;
          cin.ignore(80, '\n');       //pauses the terminal
          cin.get(); 

  }while(!(choice == '5'));       //exits inventory menu

  return;
}
