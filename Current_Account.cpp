#include "Current_Account.h"

ILISI_Bank::Current_Account::Current_Account(Customer* o, Devise* d, std::string date)
    : Account(o,d,date)
{
}

bool ILISI_Bank::Current_Account::debiter(Devise * d)
{
    if (*this->balance == *d && *this->balance >= *d) {
        *this->balance -= *d; 
        Transaction* T = new Transaction("-", d, "25102024");
        this->history->addtransaction(T);
        return true;
    }
    return false;
}

bool ILISI_Bank::Current_Account::transfer(Account& a, Devise* d)
{
    if (this->debiter(d)) {
     return  a.crediter(d, "25102024");
    }
    return false;
}

ILISI_Bank::Current_Account::~Current_Account()
{

}
