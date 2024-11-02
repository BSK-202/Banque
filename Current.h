#pragma once
#include "Account.h"
class Current :
    public Account
{
public:
    Current(Customer* client, Devise* sold, std::string dateCreation);
    bool retrait(Devise* devise);
    bool transfert(Devise* devise,Account* autre);
    void afficher() const override;
};

