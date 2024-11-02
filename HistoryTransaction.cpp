#include "HistoryTransaction.h"
#include <iostream>

using namespace std;

HistoryTransaction::HistoryTransaction():m_max(2), m_nbElemCourant(0)
{
	m_history = new Transaction *[m_max];
	for (int i = 0; i < m_max; i++)
		m_history[i] = nullptr;
}

void HistoryTransaction::addTransaction(Transaction* transaction)
{
	if (m_nbElemCourant == m_max)
		resize();
	m_history[m_nbElemCourant++] = transaction;
}

void HistoryTransaction::resize()
{
	m_max *= 2;
	Transaction** tab= new Transaction * [m_max];
	for (int i = 0; i < m_nbElemCourant; i++)
		tab[i] = m_history[i];
	for (int i = m_nbElemCourant; i < m_max; i++)
		tab[i] = nullptr;
	delete[] m_history;
	m_history = tab;
	tab = nullptr;
}

void HistoryTransaction::afficher() const
{
	for (int i = 0; i < m_nbElemCourant; i++)
		m_history[i]->afficher();
}

HistoryTransaction::~HistoryTransaction()
{
	for (int i = 0; i < m_nbElemCourant; i++)
	{
		delete m_history[i];
		m_history[i] = nullptr;
	}
	delete[] m_history;
}
