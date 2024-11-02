#pragma once
#include "Devise.h"
class Mad :
    public Devise
{
private:
	static float m_taux_Dollar;
	static float m_taux_Euro;
public:
	Mad(double amount);
	Devise* converto(std::string code) override;
};

