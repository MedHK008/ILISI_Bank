#pragma once
#include <iostream>
#include "Transaction.h"
namespace ILISI_Bank {
	class HistoryTransactions
	{
	private:
		Transaction** history;
		int capacity;
		int transaction_count;
	public:
		HistoryTransactions();
		void addtransaction(Transaction*);

		void resize();
		void printAllTransactions() const;
		~HistoryTransactions();
	};
};