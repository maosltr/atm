#include <iostream>

#include "show_menu.hpp"
#include "check_balance.hpp"
#include "add_deposit.hpp"

int main()
{
    int option;
    double balance = 500;
    double deposit;

    show_menu();
    std::cout << "Option:";
    std::cin >> option;

    switch(option){
        case 1: 
           check_balance(balance); 
           break;
        case 2: 
           balance = add_deposit(balance, deposit); 
           break;
        //case 3: withdraw();
        //case 4: exit();
    }

    return 0;
}