#pragma once
#include <string>
class Customer
{
private:
	static int cmp;
	int m_id;
	std::string m_firstName;
	std::string m_lastName;
public:
	Customer(std::string f, std::string l);
	void afficher() const;
	~Customer();
};

