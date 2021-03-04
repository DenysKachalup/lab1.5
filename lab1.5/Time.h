/////////////////////////////////
////  Time.h
#pragma once
#include<sstream>
#include<string> 

using namespace std;

#include "Triad.h"
class Time
{
private:
	Triad triad;
public:
	int getF() const { return triad.getF(); }
	int getS() const { return triad.getS(); }
	int getT() const { return triad.getT(); }
	void setTriad1(Triad tri);

	string toString1() const;
	bool Equal();
	void Init1(Triad tri);
	void Read();
	void Display() const;
};


