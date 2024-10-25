#include "Customer.h"
int ILISI_Bank::Customer::count = 0;

ILISI_Bank::Customer::Customer(std::string fname, std::string lname)
	: id(++count), First_name(fname),Last_name(lname)
{
}

void ILISI_Bank::Customer::print_Customer() const
{
std::cout << "******** Customer details***** " << std::endl;
	std::cout << "id : " << this->id << std::endl;
	std::cout << "First_name : " << this->First_name<< std::endl;
	std::cout << "Last_name : " << this->Last_name << std::endl;
}

ILISI_Bank::Customer::~Customer()
{
}
