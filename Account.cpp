#include "Account.h"
using namespace std;
Account::Account(Customer* client, Devise* sold, std::string dateCreation)
    :m_client(client),m_sold(sold),m_dateCreation(dateCreation)
{
    m_histrory = new HistoryTransaction;
}

bool Account::depos(Devise* devise)
{
    if (*devise != *m_sold)
    {
        cout << "**********DepoFalse";
        return false;
    }
    cout << "**********Depo";
    *m_sold += *devise;
    return true;
}

Account::~Account()
{
    delete m_histrory;
}

