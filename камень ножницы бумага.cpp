#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));
    int playerChoice, ComputerChoise, playerScore = 0, computerScore = 0;
    while ((playerScore < 5 && computerScore < 5)) {
        ComputerChoise = rand() % 3 + 1;
        cout << "Выберите: 1 (камень), 2 (ножницы), 3 (бумага): ";
        cin >> playerChoice;
        if (playerChoice < 1 || playerChoice > 3) {
            cout << "Неверный выбор\n";
            cout << "Выберите: 1 (камень), 2 (ножницы), 3 (бумага): ";
            cin >> playerChoice;
        }
        if (playerChoice == 1 && ComputerChoise == 2) playerScore++;
        if (playerChoice == 2 && ComputerChoise == 3) playerScore++;
        if (playerChoice == 3 && ComputerChoise == 1) playerScore++;
        if (playerChoice == 2 && ComputerChoise == 1) computerScore++;
        if (playerChoice == 3 && ComputerChoise == 2) computerScore++;
        if (playerChoice == 1 && ComputerChoise == 3) computerScore++;
        cout << playerScore << " Игрок " << computerScore << " компьютер " << "\n";
        srand(time(NULL));
    }
    if (playerScore > computerScore) {
        cout << "Игрок выиграл игру";
    }
    else {
        cout << "Компьютер выиграл игру";
    }
}
