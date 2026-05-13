#include <iostream>
#include <vector>
using namespace std;

int main() {
    int chosenNumber = 7;
    int userGuess;
    vector<int> guesses;

    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        guesses.push_back(userGuess);

        if (userGuess > chosenNumber) {
            cout << "Too high" << endl;
        } else if (userGuess < chosenNumber) {
            cout << "Too low" << endl;
        } else {
            cout << "Correct!" << endl;
            break;
        }
    }

    cout << "\nYour guesses were: ";
    for (int i = 0; i < guesses.size(); i++) {
        cout << guesses[i] << " ";
    }
    cout << endl;

    return 0;
}
