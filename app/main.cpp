#include <iostream>

#include "show_menu.hpp"
#include "check_balance.hpp"
#include "add_deposit.hpp"
#include "withdraw_money.hpp"

int main()
{
   int option;

   double balance = 500;
   double deposit;
   double withdraw_amount;

   do
   {
      show_menu();
      std::cout << "Option: ";

      std::cin >> option;
      system("clear");

      switch (option)
      {
      case 1:
         check_balance(balance);
         break;

      case 2:
         balance = add_deposit(balance, deposit);
         break;

      case 3:
         balance = withdraw_money(balance, withdraw_amount);
         break;
      }
   } while (option != 4);

   return 0;
}