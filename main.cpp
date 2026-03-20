#include <iostream>
using namespace std;

int main()
{
    double balance = 1000.00;
    int choice;
    double amount;

    cout << "Welcome to the ATM\n\n";

    do
    {
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Your balance is: $" << balance << "\n\n";
        }
        else if (choice == 2)
        {
            cout << "Enter deposit amount: $";
            cin >> amount;
            if (amount <= 0)
                cout << "Invalid amount.\n\n";
            else
            {
                balance += amount;
                cout << "Deposit successful. New balance: $" << balance << "\n\n";
            }
        }
        else if (choice == 3)
        {
            cout << "Enter withdrawal amount: $";
            cin >> amount;
            if (amount <= 0)
                cout << "Invalid amount.\n\n";
            else if (amount > balance)
                cout << "Insufficient funds.\n\n";
            else
            {
                balance -= amount;
                cout << "Withdrawal successful. New balance: $" << balance << "\n\n";
            }
        }
        else if (choice != 4)
        {
            cout << "Invalid choice.\n\n";
        }

    } while (choice != 4);

    cout << "Thank you for using the ATM. Goodbye!\n";
    return 0;
}
