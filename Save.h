#pragma once
#include "Account.h"
class Save :
    public Account
{
private:
    static int tauxInteret;
public:
    Save(Customer* client, Devise* sold, std::string dateCreation);
    void afficher() const override;
};

