#include "Devise.h"
#include <iostream>
using namespace std;
Devise::Devise(std::string code,double amount):m_code(code),m_amount(amount){}

bool Devise::operator==(const Devise& devise) const
{
	cout << devise.m_code << " " << m_code << endl;
	return devise.m_code == m_code;
}

bool Devise::operator!=(const Devise& devise) const
{
	return (devise.m_code != m_code);
}

bool Devise::operator>=(const Devise& devise) const
{
	return m_amount>=devise.m_amount;
}

Devise* Devise::operator+=(const Devise& devise)
{
	m_amount += devise.m_amount;
	return this;
}

Devise* Devise::operator-=(const Devise& devise)
{
	m_amount -= devise.m_amount;
	return this;
}

void Devise::afficher() const
{
	cout << m_amount << " " << m_code << endl;
}
