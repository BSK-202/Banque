// Preparer.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include "Account.h"
#include "Current.h"
#include "Save.h"
#include "Customer.h"
#include "Devise.h"
#include "Mad.h"
#include "Euro.h"
#include "Dollar.h"

int main()
{
    Customer* c1 = new Customer("C1","C1");
    Customer* c2 = new Customer("C2","C2");
    Devise* b1 = new Mad(1000);
    Devise* b2 = new Mad(3000);
    Current* A1 = new Current(c1, b1, "25102024");
    Account* A2 = new Current(c2, b2, "25102024");

    Devise* d2 = new Euro( 20000);
    Devise* d3 = new Mad( 3000);

    A1->afficher();
    A2->afficher();
    //d2=d2->converto("Mad");
    A1->depos(d2);
    A1->afficher();
    A1->retrait(d3);
    A1->afficher();
    A1->transfert(d3,A2);
    //A3->transfer(*A2, d3);
    A1->afficher();
    A2->afficher();

    delete c1, b1, b2, A1, A2, c2, d2, d3;
}

