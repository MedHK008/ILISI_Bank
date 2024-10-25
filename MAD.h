#pragma once
#include "Devise.h"
namespace ILISI_Bank {
	class MAD : public Devise
	{
	private:
		static double TauxEuro;
		static double TauxDollar;

	public:
		MAD(double amount);
		Devise* ConvertTo(std::string code) override;
		~MAD();

	};
};
