//
//  main.cpp
//  Number guessing game
//
//  Created by MacBook Pro M3 on 22/09/2024.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//int argc, const char * argv[]

int main() {
    cout << "Welcome to the Gues game!!!" << endl;
    cout << "Start guessing numbers!" << endl;
    
    while (true) {
        bool win = false;
        
        if(win){
            srand(time(0));
        }
        
        int randomNum = rand() % 101;
        int userGuess;
        
        cout << "enter your guess: ";
        cin >> userGuess;
        while (userGuess != randomNum) {
            int difference = randomNum - userGuess;
            
            if(difference <= 10 && difference > 0){
                cout << "You about to win, you guess is little bit low: ";
                cin >> userGuess;
            }
            
            else if(difference >= - 10 && difference < 0 ){
                cout << "You about to win, you guess is little bit high: ";
                cin >> userGuess;
            }
            
            else if(userGuess > randomNum){
                cout << "your number too high please re enter it: ";
                cin >> userGuess;
            }
            
            else if(userGuess < randomNum) {
                cout << "your number is too low please re enter it: ";
                cin >> userGuess;
            }
        }
        win = true;
        cout << "YOU WON CONGRATULATIONS!!!!!" << endl;
        cout << "=======================================" << endl;
    }
    return 0;
}
