#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getComputerChoice() {
    string choices[3] = {"rock", "paper", "scissors"};
    int randomIndex = rand() % 3;
    return choices[randomIndex];
}

string getUserChoice() {
    string choice;
    cout << "Enter your choice (rock, paper, or scissors): ";
    cin >> choice;

    for (char &c : choice){
        c = tolower(c);
    } 

    return choice;
}

void determineWinner(string user, string computer) {
    cout << "Computer chose: " << computer << endl;

    if (user == computer) {
        cout << "It's a tie!" << endl;
    } else if (
        (user == "rock" && computer == "scissors") ||
        (user == "paper" && computer == "rock") ||
        (user == "scissors" && computer == "paper")
    ) {
        cout << "You win!" << endl;
    } else if ((user == "rock" || user == "paper" || user == "scissors")) {
        cout << "You lose!" << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }
}

int main() {
    srand(time(0));
    char playAgain;

    do {
        string userChoice = getUserChoice();
        string computerChoice = getComputerChoice();

        determineWinner(userChoice, computerChoice);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;
    return 0;
}
