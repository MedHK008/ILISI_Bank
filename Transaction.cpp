#include "Transaction.h"

ILISI_Bank::Transaction::Transaction(std::string type, Devise* d, std::string date)
	:type(type),amount(d),Date(date)
{
}

void ILISI_Bank::Transaction::print_Transaction() const
{
	std::cout << this->type << " " << this->amount->to_string() << " on :" << this->Date << std::endl;
}

ILISI_Bank::Transaction::~Transaction()
{

}
