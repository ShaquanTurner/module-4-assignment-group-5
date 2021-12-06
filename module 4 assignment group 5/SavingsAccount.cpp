
#include "SavingsAccount.h"

//float SavingsAccount::interestRate()
//{return 0.0f;}




double SavingsAccount::CalcInterest()

{
	double result;

	result = interestRate * balance;


	return balance + result;

}