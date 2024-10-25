#pragma once
#include <iostream>
namespace ILISI_Bank {
	class Customer
	{
	private:
		static int count;
		int id;
		std::string First_name;
		std::string Last_name;

	public:
		Customer(std::string, std::string);
		void print_Customer() const;
		~Customer();
	};
}