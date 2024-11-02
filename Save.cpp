#include "Save.h"
#include <iostream>
using namespace std;
int Save::tauxInteret = 2;
Save::Save(Customer* client, Devise* sold, std::string dateCreation)
	:Account(client, sold, dateCreation)

{
}

void Save::afficher() const
{
    cout << "Le compte est un compte Epargne avec un taux d interet:" << tauxInteret << endl;
    cout << "Date creation de compte: " << m_dateCreation << endl;
    m_client->afficher();
    cout << "le montant actuel :";
    m_sold->afficher();
    cout << "L historie de transactions:" << endl;
    m_histrory->afficher();
}
