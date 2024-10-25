#pragma once
#include "Devise.h"
namespace ILISI_Bank {
    class Dollar :
        public Devise
    {

    public : 
        Dollar(double m);
        Devise* ConvertTo(std::string code) override;
    };
};
