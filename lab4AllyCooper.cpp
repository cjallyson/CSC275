#include <iostream>
using namespace std;

// Define the ATM class
class ATM {
private:
    // Private data members
    float balance;             // Account balance
    int numOfTransactions;    // Number of transactions

public:
    // Constructor to initialize balance and numOfTransactions
    ATM(float initialBalance) {
        balance = initialBalance;
        numOfTransactions = 0;  // Initially no transactions
    }

    // Function to initialize the balance and set the transaction count to zero
    void initBalance(float amount) {
        balance = amount;
        numOfTransactions = 0; // Reset transaction count to zero
    }

    // Function to display the current balance
    void showBalance() {
        cout << "Current balance: $" << balance << endl;
    }

    // Function to deposit money into the account
    void deposit(float amount) {
        balance += amount;               // Increase the balance by the deposit amount
        numOfTransactions++;             // Increment transaction count
    }

    // Function to withdraw money from the account
    bool withdraw(float amount) {
        if (amount > balance) {
            // Insufficient funds
            cout << "Not enough balance!" << endl;
            return false;                // Withdrawal failed
        }
        balance -= amount;              // Decrease the balance by the withdrawal amount
        numOfTransactions++;            // Increment transaction count
        return true;                     // Withdrawal successful
    }

    // Function to get the number of transactions performed
    int getTransactions() {
        return numOfTransactions;
    }
};

int main() {
    // 2. Create an ATM object called atm_obj and initialize the balance with 250
    ATM atm_obj(250);

    // 3. Use showBalance() to show current balance (should show $250)
    atm_obj.showBalance();

    // 4. Use deposit() to add another $250
    atm_obj.deposit(250);

    // 5. Use showBalance() to show current balance (should show $500)
    atm_obj.showBalance();

    // 6. Use withdraw() to withdraw $100
    cout << "\nAttempting to withdraw $100:" << endl;
    if (atm_obj.withdraw(100)) {
        // (a) If the withdrawal is successful, show success and remaining balance
        cout << "Withdrawal successful." << endl;
        atm_obj.showBalance();  // Show the updated balance
    } else {
        // (b) If the withdrawal fails, show that there's not enough balance
        atm_obj.showBalance();  // Show the balance
    }

    // 7. Use getTransactions() to display the number of transactions
    cout << "\nTotal number of transactions: " << atm_obj.getTransactions() << endl;

    return 0;
}
