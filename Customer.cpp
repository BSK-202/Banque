#include "Customer.h"
#include <iostream>
using namespace std;

int Customer::cmp = 0;

Customer::Customer(std::string f, std::string l)
:m_id(++cmp),m_firstName(f), m_lastName(l){}

void Customer::afficher() const
{
	cout << "Client avec id:" << m_id << endl;
	cout << "First Name: " << m_firstName <<endl;
	cout << "Lst Name: " << m_lastName << endl;
}

Customer::~Customer(){}
