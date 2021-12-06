#include "ChequingAccount.h"
bool ChequingAccount::withdrawal(double amount)
{
	if (amount > balance-transactionFee) {
		return false;

	}
	else {
		balance -= amount+transactionFee;
		Transaction withdraw(transactionFee + amount, "withdraw");
		rlog.push_back(withdraw);
		return true;


	}
	
}

