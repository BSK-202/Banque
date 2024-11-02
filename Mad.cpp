#include "Mad.h"
#include "Euro.h"
#include "Dollar.h"
float Mad::m_taux_Euro = 10;
float Mad::m_taux_Dollar = 10;

Mad::Mad(double amount):Devise("Mad", amount)
{
}

Devise* Mad::converto(std::string code)
{
	Devise* d = nullptr;
	if (m_code != code)
	{
		if (code == "Euro")
			d = new Euro(m_amount * m_taux_Euro);
		else
			d = new Dollar(m_amount * m_taux_Dollar);
	}
	else
		return this;
	return d;
}
