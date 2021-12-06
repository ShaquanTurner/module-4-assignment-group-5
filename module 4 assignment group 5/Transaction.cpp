#include "Transaction.h"

std::string Transaction::Report()
{
	std::string report;
	report += "$";
	report += std::to_string(amount);
	report += "_";
	report += type;
    std:: cout << report;
	

	return report;
}
