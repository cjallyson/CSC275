#include <iostream>
using namespace std;

// Define the ATM class
class ATM {
public:
    // Public data member to hold the balance
    float balance;

    // Constructor to initialize the balance
    ATM(float initialBalance) {
        balance = initialBalance;
    }

    // Function to display the current balance
    void showBalance() {
        cout << "Current balance: $" << balance << endl;
    }

    // Function to deposit an amount into the balance
    void deposit(float amount) {
        balance += amount;  // Add the deposit amount to the balance
    }

    // Function to withdraw an amount from the balance
    bool withdraw(float amount) {
        if (amount > balance) {
            // Not enough balance to withdraw
            cout << "Insufficient funds!" << endl;
            return false;  // Withdrawal failed
        }
        balance -= amount;  // Subtract the withdrawal amount from the balance
        return true;  // Withdrawal successful
    }
};

int main() {
    // 2. Create an ATM object called atm_obj and initialize the balance with 250
    ATM atm_obj(250);

    // 3. Show current balance (should show $250)
    atm_obj.showBalance();

    // 4. Deposit $250 into the account
    atm_obj.deposit(250);

    // 5. Show the new balance (should show $500)
    atm_obj.showBalance();

    // 6. Use the dot operator to add another $250 to the balance directly
    atm_obj.balance += 250;

    // 7. Show the new balance (should show $750)
    atm_obj.showBalance();

    // 8. Withdraw $100 from the account
    if (atm_obj.withdraw(100)) {
        // If withdrawal is successful
        cout << "Withdrawal successful." << endl;
    }

    // 9. Show the final balance (should show $650)
    atm_obj.showBalance();

    return 0;
}
