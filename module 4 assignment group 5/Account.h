#pragma once
#include <iostream>  
#include <vector>
#include<string>
#include "Transaction.h"
class Account
{
protected:
	double balance;
	std::vector<Transaction> rlog;
public:
	//Account(){}
	Account() {                    //std::cout << "enter initial balance ", std::cin >> balance;
	}
	Account(double init_bal); /* {
	   if (init_bal>=1000)
	   {balance = init_bal;}

else{
balance=0;
			std::cout<<"invalid amt error message\n";
			exit(1);
		}
		//check init_bal if >= $1000.00
		//if >= $1000.00, set balance to init_bal
          //else set balance to zero, and print invalid amt error message.
}*/

	void setBalance();
	double getBalance();

	bool deposit(double amount);
	bool withdrawal(double amount);
	std::vector<std::string>report();




};
