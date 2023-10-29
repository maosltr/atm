#include <iostream>

double withdraw_money(double balance, double withdraw_amount)
{

    std::cout << "Withdraw amount:";
    std::cin >> withdraw_amount;

    if (withdraw_amount > balance)
    {
        std::cout << "Insufisiant funds: " << balance << std::endl;
    }
    else
    {
        std::cout << "Old balance is: " << balance << std::endl;
        balance -= withdraw_amount;
        std::cout << "New balance is: " << balance << std::endl;
    }

    return balance;
}