#include "MAD.h"
#include "Euro.h"
#include "Dollar.h"
double ILISI_Bank::MAD::TauxDollar = 9.90;
double ILISI_Bank::MAD::TauxEuro = 10.67;
ILISI_Bank::MAD::MAD(double amount)
	:Devise("MAD",amount)
{

}

ILISI_Bank::Devise* ILISI_Bank::MAD::ConvertTo(std::string code)
{
	Devise* res;
	if (*this==code) {
		return this;
	}
	else if (code == "Euro") {
		this->operator/(this->TauxEuro);
		res = new Euro(this->amount);	
	}
	else if(code == "Dollar"){
		this->operator/(this->TauxDollar);
		res = new Dollar(this->amount);
	}
	return res;
}

