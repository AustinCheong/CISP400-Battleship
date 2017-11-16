#include <iostream>
#include <iomanip>
#include <limits>        // allows use of numeric_limits
using namespace std;    // eliminates needing the "std::" prefix

int main() 
{
    //declare variables
    int response;   //user selection from main menu

    do 
    {
    //breakline for menu
    //display menu
    #define BREAKLINE "-------------------------------------\n";
    cout << endl;
    cout << "WELCOME TO BATTLESHIPS" << endl;
    cout << BREAKLINE;
    
    cout << "Select an option listed below:" << endl;
    cout << "1 - Start A Game" << endl;
    cout << "2 - Game Instructions" << endl;
    cout << "3 - Exit" << endl;
    cout << BREAKLINE;
    cin >> response;
    cout << endl;
    
    switch(response)
    {
        case 1:
            cout << "Let the games begin!" << endl << endl;
            break;
        case 2:
            cout << "The objective of the game is to obliterate the opposing player's fleet. Using the map grid, strategically place your ships onto the map." << endl;
            cout << "The locations of your fleet are concealed from the other player. Players alternate turns trying to destroy the other player's ships." << endl;
            cout << endl;
            break;
        case 3:
            cout << "Thank you for playing. Press enter to exit. Goodbye!" << endl;
            cout << endl;
            break;
        default:
            cout << "Invalid response. Please select one of the menu items." << endl;
            cin >> response;
            break;
    }
    //system("pause");
    return 0;
}
