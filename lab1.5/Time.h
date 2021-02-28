#pragma once
#include "Triad.h"
class Time
{
private:
	Triad t1,t2;
public:
	int getTriadF1() const { return t1.getF(); }
	int getTriadS1() const { return t1.getS(); }
	int getTriadT1() const { return t1.getT(); }

	int getTriadF2() const { return t2.getF(); }
	int getTriadS2() const { return t2.getS(); }
	int getTriadT2() const { return t2.getT(); }

	void setTriad1(Triad tri);
	void setTriad2(Triad tri);

	bool Poriv1();
	void Init(Triad tri);
	void Init2(Triad tri);
	void Read();
	void Display();
};


