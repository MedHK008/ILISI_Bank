#include "HistoryTransactions.h"

ILISI_Bank::HistoryTransactions::HistoryTransactions():
	capacity(2),transaction_count(0)
{
	this->history = new Transaction * [this->capacity];
	for (int i = 0; i < this->capacity; i++) {
		this->history[i] = nullptr;
	}
}

void ILISI_Bank::HistoryTransactions::addtransaction(Transaction* T)
{
	if (this->transaction_count == this->capacity) {
		this->resize();
	}
	this->history[this->transaction_count++] = T;
}

void ILISI_Bank::HistoryTransactions::resize()
{
	this->capacity *= 2;
	Transaction** newtable = new Transaction * [this->capacity];
	for (int i = 0; i < this->transaction_count; i++) {
		newtable[i] = this->history[i];
	}
	for(int i = this->transaction_count; i < this->capacity; i++) {
		newtable[i] = nullptr;
	}

	delete[] this->history;
	this->history = newtable;

}

void ILISI_Bank::HistoryTransactions::printAllTransactions() const
{
	std::cout << "***********transaction_history*********" << std::endl;
	for (int i = 0; i < this->transaction_count; i++) {
		this->history[i]->print_Transaction();
	}

}

ILISI_Bank::HistoryTransactions::~HistoryTransactions()
{
	for (int i = 0; i < this->transaction_count; i++)
	{
		delete this->history[i];
		this->history[i] = nullptr;
	}
	
	delete[] this->history;
	this->history = nullptr;
}
