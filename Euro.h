#pragma once
#include "Devise.h"
class Euro :public Devise
{
private:
	static float m_taux_Mad;
	static float m_taux_Dollar;
public:
	Euro(double amount);
	Devise* converto(std::string code) override;
};

