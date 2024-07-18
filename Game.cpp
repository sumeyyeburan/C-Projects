#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL)); // Seed the random number generator
    int number, random_number;
    int right;
    char playAgain;

    do {
        random_number = 1 + rand() % 100; // Generate a random number between 1 and 100
        right = 5; // Initialize the number of attempts
        
        cout << endl << "**** WELCOME TO THE NUMBER GUESSING GAME! ****" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\nI have picked a number between 1 and 100. Can you guess it?\n" << endl;
        
        while (right > 0) {
            cout << "--------------------------------------------------------------------" << endl;
            cout << "\nWhat is your guess?: ";
            cin >> number;
            
            // Check if the number is within the valid range
            if (number < 0 || number > 100) {
                cout << "\nYou must enter a number between 1 and 100. Please try again!" << endl;
                continue;
            }
            // Provide feedback on the guess
            if (random_number > number && right > 1) {
                cout << "\nYou should enter a higher number" << endl;
            }    
            if (random_number < number && right > 1) {
                cout << "\nYou should enter a lower number" << endl;
            }
            if (random_number == number) {
                cout << "\nYour guess is correct, congratulations!" << endl;
                break;
            }
            
            right--; // Decrease the number of attempts
            cout << "Remaining attempts: " << right << endl;
        }
    
        // If the user runs out of attempts, display the correct number
        if (right == 0) {
            cout << "\n\nYou have run out of attempts, you lost!" << endl;
            cout << "The number I picked was: " << random_number << endl;
        }
        cout << "\n======================================================================" << endl;
        // Ask the user if they want to play again
        cout << "\nThank you for playing!\nDo you want to play again? (Y/N): ";
        cin >> playAgain;
        playAgain = toupper(playAgain); // Convert the input to uppercase
    } while (playAgain == 'Y');
    
    cout << "\nExiting the game..." << endl;
    return 0;
}

