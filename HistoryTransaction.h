#pragma once
#include "Transaction.h"

class HistoryTransaction
{
private:
	Transaction** m_history;
	int m_max;
	int m_nbElemCourant;
public:
	HistoryTransaction();
	void addTransaction( Transaction* transaction) ;
	void resize();
	void afficher() const;
	~HistoryTransaction();
};

