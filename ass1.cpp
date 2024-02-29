#include <iostream>
#include <cstdlib>
using namespace std;

class Atm{
private:
    int userid;
    int password;
    double acc_balance;

public:
    void printIntroMenu() {
        cout << "\nPlease select an option from the menu below:\n" << endl;
        cout << "l -> Login" << endl;
        cout << "c -> Create New Account" << endl;
        cout << "q -> Quit\n" << endl;
        cout << "> ";
    }

    void printMainMenu() {
        cout << "\nd -> Deposit Money" << endl;
        cout << "w -> Withdraw Money" << endl;
        cout << "r -> Request Balance" << endl;
        cout << "q -> Quit" << endl;
        cout << "\n> ";
    }

    void login() {
        int id, pass;
        cout << "\nPlease enter your user id: ";
        cin >> id;
        cout << "Please enter your password: ";
        cin >> pass;
        if (id == userid && pass == password) {
            cout << "\nAccess Granted!\n" << endl;
            char choice2;
            do {
                printMainMenu();
                cin >> choice2;

                switch (choice2) {
                    case 'd':
                        double deposit_amn;
                        cout << "\nAmount of deposit: $";
                        cin >> deposit_amn;
                        acc_balance += deposit_amn;
                        break;
                    case 'w':
                        double withdrawal_amn;
                        cout << "\nAmount of withdrawal: $";
                        cin >> withdrawal_amn;
                        if (withdrawal_amn <= acc_balance) {
                            acc_balance -= withdrawal_amn;
                        } else {
                            cout << "\nInsufficient funds!" << endl;
                        }
                        break;
                    case 'r':
                        cout << "\nYour balance is $" << acc_balance << endl;
                        break;
                    case 'q':
                        cout << "\nThanks for stopping by!" << endl;
                        exit(0);
                    default:
                        cout << "\nInvalid option. Please try again." << endl;
                }
            } while (true);
        } else {
            cout << "\n******** LOGIN FAILED! ********\n" << endl;
        }
    }

    void start() {
        cout << "Hi! Welcome to Mr. Zamar’s ATM Machine!" << endl;

        char choice1;
        do {
            printIntroMenu();
            cin >> choice1;

            switch (choice1) {
                case 'l':
                    login();
                    break;
                case 'c':
                    createAccount();
                    break;
                case 'q':
                    cout << "Thanks for stopping by!" << endl;
                    exit(0);
                default:
                    cout << "Invalid option. Please try again." << endl;
            }
        } while (true);
    }

    void createAccount() {
        cout << "\nPlease enter your user id: ";
        cin >> userid;

        cout << "Please enter your password: ";
        cin >> password;

        cout << "\nThank You! Your account has been created!" << endl;
    }
};

int main() {
    Atm atm;
    atm.start();
    return 0;
}
