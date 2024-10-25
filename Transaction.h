#pragma once
#include <iostream>
#include "Devise.h"
namespace ILISI_Bank {
	class Transaction
	{
	private:
		std::string type;
		Devise* amount;
		std::string Date;
	public: 

		Transaction(std::string, Devise*, std::string);
		void print_Transaction() const;
		~Transaction();
	};

}