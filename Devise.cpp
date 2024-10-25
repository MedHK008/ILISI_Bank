#include "Devise.h"
#include<string>
using namespace ILISI_Bank;
ILISI_Bank::Devise::Devise(std::string code, double amount)
    : code(code),amount(amount)
{
}

Devise* ILISI_Bank::Devise::ConvertTo(std::string code)
{
    return nullptr;
}

bool ILISI_Bank::Devise::operator!=(const Devise& d) const
{

    return this->code!=d.code;
}

bool ILISI_Bank::Devise::operator==(const Devise& d) const
{
    return  this->code == d.code;
}

bool ILISI_Bank::Devise::operator==(std::string s) const
{
    return this->code== s;
}

void ILISI_Bank::Devise::operator+=(const Devise& d)
{
    this->amount += d.amount;
}

void ILISI_Bank::Devise::operator-=(const Devise& d)
{
    this->amount -= d.amount;
}

bool ILISI_Bank::Devise::operator<=(const Devise& d) const
{
    return this->amount<=d.amount;
}

bool ILISI_Bank::Devise::operator>=(const Devise& d) const
{
    return this->amount>=d.amount;
}

Devise* ILISI_Bank::Devise::operator/(double m)
{
    if (m > 0) {
        this->amount = this->amount / m;
    }
    return this;
}

Devise* ILISI_Bank::Devise::operator*(double m)
{
    this->amount = this->amount * m;
    return this;
}

std::string ILISI_Bank::Devise::to_string() const
{
    return std::to_string(this->amount)+" "+ this->code;
}

ILISI_Bank::Devise::~Devise()
{

}
