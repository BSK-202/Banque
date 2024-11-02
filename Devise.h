#pragma once
#include<string>

class Devise
{
protected:
	std::string m_code;
	double m_amount;
public:
	Devise(std::string code,double amount);
	virtual Devise* converto(std::string code)=0;
 	bool operator==(const Devise& devise) const;
	bool operator!=(const Devise& devise) const;
	bool operator>=(const Devise& devise) const;
	Devise* operator+=(const Devise& devise);
	Devise* operator-=(const Devise& devise);
	void afficher() const;
};

