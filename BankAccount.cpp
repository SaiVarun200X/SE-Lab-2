/**
 * @file main.cpp
 * @brief This is a C++ program to demonstrate a simple bank account system.
 * @details This code simulates a simple bank account system with a BankAccount class representing individual accounts.
 * It includes methods to deposit, withdraw, and get the balance of an account. Each method is documented using Doxygen-style comments.
 * @author Sai Varun Padmanabham.
 */

#include <iostream>
#include <string>

/**
 * @brief Class representing a bank account.
 */
class BankAccount {
private:
    std::string ownerName; ///< The name of the account owner.
    double balance;        ///< The current balance of the account.

public:
    /**
     * @brief Constructor to initialize a bank account with owner name and initial balance.
     * @param name The name of the account owner.
     * @param initialBalance The initial balance of the account.
     */
    BankAccount(const std::string& name, double initialBalance) : ownerName(name), balance(initialBalance) {}

    /**
     * @brief Function to deposit money into the account.
     * @param amount The amount to be deposited.
     */
    void deposit(double amount) {
        balance += amount;
    }

    /**
     * @brief Function to withdraw money from the account.
     * @param amount The amount to be withdrawn.
     * @return True if withdrawal is successful, false otherwise (insufficient balance).
     */
    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true;
        } else {
            return false;
        }
    }

    /**
     * @brief Function to get the current balance of the account.
     * @return The current balance of the account.
     */
    double getBalance() const {
        return balance;
    }
};

/**
 * @brief Main function of the program.
 * @return 0 on successful execution.
 */
int main() {
    // Create a bank account for John with initial balance $1000
    BankAccount johnAccount("John Doe", 1000.0);

    // Deposit $500 into John's accounts
    johnAccount.deposit(500.0);

    // Withdraw $200 from John's account
    bool withdrawalSuccess = johnAccount.withdraw(200.0);

    if (withdrawalSuccess) {
        std::cout << "Withdrawal successful!" << std::endl;
    } else {
        std::cout << "Insufficient balance for withdrawal!" << std::endl;
    }

    // Display John's current balance
    std::cout << "John's current balance: $" << johnAccount.getBalance() << std::endl;

    return 0;
}
