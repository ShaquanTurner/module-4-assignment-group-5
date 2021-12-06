#pragma once
#include "Account.h"
class ChequingAccount :public Account
{

private:
	double transactionFee;


public:
	
	ChequingAccount(double init_bal, double fee) :Account() {
		transactionFee=fee;
		if (init_bal >= 1000)
		{
			balance = init_bal;
		}

		else {
			balance = 0;
			std::cout << "an invalid amount was entered\n";
			exit(1);

		}


		



	}
	bool withdrawal(double amount);


};

