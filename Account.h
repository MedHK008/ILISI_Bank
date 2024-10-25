#pragma once
#include <iostream>
#include "Customer.h"
#include "Devise.h"
#include "HistoryTransactions.h"
namespace ILISI_Bank {
	class Account
	{

	private:
		static int count; 
		int id_account;
		Customer* owner; 
		 
		std::string date;
	protected:	Devise* balance;
			 HistoryTransactions* history;
	public:
		Account(Customer*, Devise*, std::string); 
		bool crediter(Devise*, std::string);
		virtual bool transfer(Account& a, Devise* d) = 0;
		virtual bool debiter(Devise *d) = 0;
		void printAccount() const;
		~Account();


	};

};