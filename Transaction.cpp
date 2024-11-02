#include "Transaction.h"
#include <iostream>
using namespace std;
Transaction::Transaction(std::string type, Devise* amount, std::string date)
:m_type(type),m_date(date),m_amount(amount)
{
}

void Transaction::afficher() const
{
	cout << m_type;
	m_amount->afficher();
	cout << "on " << m_date<<endl;
}
