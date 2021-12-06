#pragma once
#include <iostream>
#include "string"
class Transaction 
{

private:
	double amount;
	std::string type;



public:

	Transaction(double amt,std::string kind):amount(amt),type(kind){}  
	std::string Report();


};

