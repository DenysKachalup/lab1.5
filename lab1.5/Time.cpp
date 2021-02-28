#include "Time.h"
#include<iostream>	
#include "Triad.h"
using namespace std;

void Time::setTriad1(Triad tri)
{
	t1 = tri;
}
void Time::setTriad2(Triad tri)
{
	t2 = tri;
}
void Time:: Init(Triad tri)
{
	setTriad1(tri);
}
void Time::Init2(Triad tri)
{
	setTriad2(tri);
}
void Time::Read()
{
	Triad g,f;
	do {
		do
		{
			cout << "Triad 1 : " << endl << endl;
			g.Read();
			Init(g);
			cout << "Triad 2 : " << endl << endl;
			f.Read();
			Init2(f);
		} while (!t1.Poriv(g, f));
	} while (!Poriv1());
	
}
void Time::Display()
{
	cout << endl;
	t1.Display();
	t2.Display();
	t1.Poriv(t1, t2);
}
bool Time::Poriv1()
{
	int t1first = t1.getF();
	int t1second = t1.getS();
	int t1third = t1.getT();
	int t2first = t2.getF();
	int t2second = t2.getS();
	int t2third = t2.getT();

	if ((t1first == t2first || t1first > t2first) && t1second == t2second && 
		t1third > t2third && (t1second > t2second || t1first == t2first ))
		return true;
	else
		return false;
}