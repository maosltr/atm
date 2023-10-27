#include <iostream>

double add_deposit(double balance, double deposit)
{

    std::cout << "deposit:";
    std::cin >> deposit;

    std::cout << "Old balance is: " << balance << std::endl;
    balance += deposit;
    std::cout << "New balance is: " << balance << std::endl;

    return balance;
}