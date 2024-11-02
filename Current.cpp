#include "Current.h"
#include <iostream>
using namespace std;
Current::Current(Customer* client, Devise* sold, std::string dateCreation)
    :Account(client, sold, dateCreation){}

bool Current::retrait(Devise* devise)
{
    if (*devise == *m_sold)
    {
        if (*m_sold >= *devise)
        {
            *m_sold -= *devise;
            return true;
        } 
    }
    return false;
}

bool Current::transfert(Devise* devise, Account* autre)
{
    if (retrait(devise))
    {
        return autre->depos(devise);
    }
    return false;
}

void Current::afficher() const
{
    cout << "Le compte est un compte courant" << endl;
    cout << "Date creation de compte: " << m_dateCreation << endl;
    m_client->afficher();
    cout << "le montant actuel :";
    m_sold->afficher();
    cout << "L historie de transactions:" << endl;
    m_histrory->afficher();
}
