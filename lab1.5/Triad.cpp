#include "Triad.h"
#include<iostream>

using namespace std;

void Triad::setF(int value)
{
	first = value;
}
void Triad::setS(int value)
{
	second = value;
}
void Triad::setT(int value)
{
	third = value;
}
void Triad::Init(int value1, int value2, int value3)
{
	setF(value1);
	setS(value2);
	setT(value3);
}
void Triad::Read()
{
	int value1, value2, value3;
	cout << "Vvedit first: "; cin >> value1;
	cout << "Vvedit second: "; cin >> value2;
	cout << "Vvedit third: "; cin >> value3;
	cout << endl;
	Init(value1, value2, value3);
	cout<<endl;
}
void Triad::Display()
{
	cout << "first = " << getF() << "\tsecond = " << getS() << "\tthird = " << getT() << endl;
}
bool Triad::Poriv(Triad t1,Triad t2)
{
	if (t1.first == t2.first && t1.second == t2.second && t1.third > t2.third)
		return true;

	else
		return false;
}