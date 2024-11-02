#pragma once
#include <string>
#include "Devise.h"
class Transaction
{
private:
	std::string m_type;
	Devise* m_amount;
	std::string m_date;
public:
	Transaction(std::string type, Devise* amount, std::string date);
	void afficher() const;
};

