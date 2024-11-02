#pragma once
#include "Customer.h"
#include "Devise.h"
#include "HistoryTransaction.h"
#include <iostream>

class Account
{
protected:
	Customer* m_client;
	HistoryTransaction* m_histrory;
	std::string m_dateCreation;
	Devise* m_sold;
public:
	Account(Customer* client, Devise* sold, std::string dateCreation);
	bool depos(Devise* devise);
	virtual void afficher() const=0;
	~Account();
};

