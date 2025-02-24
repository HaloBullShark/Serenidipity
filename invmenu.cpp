/**********************************************
 * Author: David Pena
 * Assignment: Serendipity
 * Date: 2/4/2025
 * Purpose: Menu for different inventory
 * options apart of Serendipity.
 *********************************************/
#include "bookType.h"
#include "addBook.cpp"
#include "lookUpBook.cpp"
#include "bookInfo.cpp"
#include "deleteBook.cpp"
#include "editBook.cpp"
#include <iomanip>
#include <iostream>
using namespace std;
int invmenu(bookType array[], int bookCount)
{

  char choice;        //holds a char for easier input validation
  int bookIndex = 0;

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
		 if(bookCount == 0)
		 {
			 cout << "\n" << "There are no book entries available!" << endl;
			 cout << "Press ENTER to continue..." << endl;
		 }
		 else
		 {
			 cout << "\n" << ">>> BOOK LOOK UP <<<" << endl;
			 cout << "Search: > ";
			 bookIndex = lookUpBook(array, bookCount);
			 if(!(bookIndex < 0))
			 {
				 bookInfo(array, bookIndex);
			 }
	    		 cout << setw(47) << "Press ENTER to continue..." << endl;
		 }
            	cin.ignore(80, '\n');
            	cin.get(); 
            	break;
         case '2':
				if(bookCount >= 20){
					cout << "\n" << "The array is full!" << endl;
					cout << "Press ENTER to continue..." << endl;
					cin.ignore();
					cin.get();
					break;
				}
				bookCount = addBook(array, bookCount);
            break;
         case '3':
            if(bookCount == 0) {
		    cout << "\n" << "There are no book entries available!" << endl;
		    cout << "Press ENTER to continue..." << endl;
		    cin.ignore();
		    cin.get();
		    break;
	    }
		else {
		 bookCount = editBook(array, bookCount);
		}
		  if(!(bookIndex < 0))
			 {
				 bookInfo(array, bookIndex);
			 }
            break;
         case '4':
		 if(bookCount == 0) {
		    cout << "\n" << "There are no book entries available!" << endl;
		    cout << "Press ENTER to continue..." << endl;
		    cin.ignore();
		    cin.get();
		    break;
	    }
		else {
		 bookCount = deleteBook(array, bookCount);
		}
		  if(!(bookIndex < 0))
			 {
				 bookInfo(array, bookIndex);
			 }
            break;
         case '5':
            cout << "\n" << setw(41) << "You selected item: 5" << endl;
            break;
         default:
            cout << "\n" << setw(60) << "Please enter a number in the range 1-5." << endl;    //input validation
          }

  }while(!(choice == '5'));       //exits inventory menu

  return bookCount;
}
