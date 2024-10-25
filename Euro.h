#pragma once
#include "Devise.h"
namespace ILISI_Bank {
	class Euro : public Devise
	{
	public: 
		Euro(double);
		Devise* ConvertTo(std::string code) override;
	};
};
