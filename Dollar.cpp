#include "Dollar.h"
#include "Euro.h"
#include "Mad.h"
float Dollar::m_taux_Mad = 0.1;
float Dollar::m_taux_Euro = 0.093;

Dollar::Dollar(double amount):Devise("Dollar", amount)
{
}

Devise* Dollar::converto(std::string autre)
{
	Devise* d = nullptr;
	if (m_code != autre)
	{
		if (autre == "Mad")
			d = new Mad(m_amount * m_taux_Mad);
		else
			d = new Euro(m_amount * m_taux_Euro);
	}
	else
		return this;
	return d;
}
