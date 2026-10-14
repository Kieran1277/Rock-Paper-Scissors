#include <iostream>
#include <random>

using namespace std;

int main () {

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> random(1, 3);
    int dealerChoice1 = random(gen);

    cout << "Choose R, P, S: ";
    string playerChoice;
    cin >> playerChoice;
    cout << "" << endl;
    
    if (dealerChoice1 == 1) {
        cout << "You Win!" << endl;
    } else if (dealerChoice1 == 2) {
        cout << "You Loose!" << endl;
    } else if (dealerChoice1 == 3) {
        cout << "Tie!" << endl;
        main ();
    } else {
        cout << "Error";
    }
    cout << "Again (y/n)";
    string playAgain;
    cin >> playAgain;
    if (playAgain == "y") {
        main();
    } else if {
        exit(0);
    } else {
        cout << "Error";
    }
}
