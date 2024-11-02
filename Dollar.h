#pragma once
#include "Devise.h"
class Dollar :
    public Devise
{
private:
	static float m_taux_Mad;
	static float m_taux_Euro;
public:
	Dollar(double amount);
	Devise* converto(std::string code) override;
};

