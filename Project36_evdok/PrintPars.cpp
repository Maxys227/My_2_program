#include "PrintPars.h"

void printPersonFIO(Person p)
{
	cout << "ФИО; " << p.name << " " << p.secondname << "." << endl;
}

void printPersonAge(Person p)
{
	cout << "возрост: " << p.age << endl;
}

void printPersonWeight(Person p)
{
	cout << "Вес: " << p.weight << endl;
}