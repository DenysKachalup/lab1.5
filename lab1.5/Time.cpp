/////////////////////////////////
////  Time.cpp
#include<sstream>
#include<string>
#include "Time.h"
#include<iostream>	
#include "Triad.h"

using namespace std;

void Time::setTriad1(Triad tri)
{
	triad = tri;
}
void Time:: Init1(Triad tri)
{
	setTriad1(tri);
}
void Time::Read()
{
	do
	{
		Triad g, f;
		cout << "Triad 1 : " << endl << endl;
		g.Read();
		cout << "Triad 2 : " << endl << endl;
		f.Read();
		Init1(triad.Equals(g, f));
	} while (!Equal());
}
string Time::toString1() const
{
	stringstream sout;
	sout << getF() << "god " << getS() << "hv " << getT() <<"s \t\t"<< getF() << " : " 
		<< getS() << " : " << getT() << endl;
	return sout.str();
}
void Time::Display() const
{
	cout << endl;
	triad.Display();
	cout << triad.toString() << endl;
}

bool Time::Equal()
{
	if ((triad.getF() >= 0 && triad.getF() <= 23) &&
		(triad.getS() >= 0 && triad.getS() <= 59) &&
		(triad.getT() >= 0 && triad.getT() <= 59))
	{
		return true;
	}
	else
		return false;
}
