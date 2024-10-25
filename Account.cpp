#include "Account.h"
#include<iostream>
#include<assert.h>

int ILISI_Bank::Account::count = 0;

ILISI_Bank::Account::Account(Customer* C, Devise* f, std::string d)
	:owner(C),balance(f),date(d), id_account(++count)
{
	this->history = new HistoryTransactions();
}

bool ILISI_Bank::Account::crediter(Devise* d, std::string date)
{
	if(*d == *this->balance){

		*this->balance += *d;
		Transaction* T = new Transaction("+", d, date);
		this->history->addtransaction(T);
		return true;
	}
	return false;
}

void ILISI_Bank::Account::printAccount() const
{
	std::cout << "id_account"<< this->id_account<<std::endl;
	std::cout << "created on : " << this->date << std::endl;
	this->owner->print_Customer();
	std::cout<<"balance : "<<this->balance->to_string()<<std::endl;
	this->history->printAllTransactions();
}

ILISI_Bank::Account::~Account()
{
	delete this->history;
}
