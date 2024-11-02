#include "Euro.h"
#include "Mad.h"
#include "Dollar.h"
float Euro::m_taux_Mad=0.093;
float Euro::m_taux_Dollar=0.926;

Euro::Euro(double amount):Devise("Euro",amount){}

Devise* Euro::converto(std::string autre)
{
	Devise* d=nullptr;
	if (m_code != autre)
	{
		if (autre == "Mad")
			d = new Mad(m_amount * m_taux_Dollar);
		else
			d = new Dollar(m_amount * m_taux_Dollar);
	}
	else
		return this;
	return d;
}


