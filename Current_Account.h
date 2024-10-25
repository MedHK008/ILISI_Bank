#pragma once
#include "Account.h"
namespace ILISI_Bank {
	class Current_Account : public Account
	{
	private: 
	public: 
		Current_Account(Customer*, Devise*, std::string);
		 bool debiter(Devise * d) override;
		 bool transfer(Account &a , Devise* d)override;
		 ~Current_Account();
	};
};