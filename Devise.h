#pragma once
#include <iostream>
#include<string>
namespace ILISI_Bank {
class Devise
{
	private:
		
        std::string code;
protected : 
	double amount;
	public:
		Devise(std::string, double);
    virtual	Devise* ConvertTo(std::string code)=0;
		bool operator!=(const Devise&)const;
		bool operator==(const Devise&)const;
		bool operator==(std::string)const;
		void operator+=(const Devise&);
		void operator-=(const Devise&);
		bool operator<=(const Devise&)const;
		bool operator>=(const Devise&)const;
		Devise* operator/(double m);
		Devise* operator*(double m);
		std::string to_string()const;
		~Devise();
	};

}