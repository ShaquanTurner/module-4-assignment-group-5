
#include "Account.h"
//member functions

Account::Account(double init_bal) {
	if (init_bal >= 1000)
	{
		balance = init_bal;
	}

	else {
		balance = 0;
		std::cout << "an invalid amount was entered\n";
		exit(1);

	}




	//check init_bal if >= $1000.00

	//if >= $1000.00, set balance to init_bal

	//else set balance to zero, and print invalid amt error message.

}

void Account::setBalance()
{
}

double Account::getBalance()
{
	return balance;
}

bool Account::deposit(double amount)
{
	balance += amount;
	Transaction depo(amount, "deposit");
	rlog.push_back(depo);
	return true;
}

bool Account::withdrawal(double amount)
{
	if (amount>balance){
		return false;
		
	}
	else{

		balance -= amount;
		Transaction withdraw(amount, "withdraw");
		rlog.push_back(withdraw);
		return true;

	
	}
	
}

std::vector<std::string> Account::report()
{
	std::vector<std::string> report;
	for (size_t i = 0; i < rlog.size(); i++)
	{
		report.push_back(rlog[i].Report());
		

	}
	
	
	return report;
}



/*/bool withdrawal(double amount)
{
	return false;
}*/