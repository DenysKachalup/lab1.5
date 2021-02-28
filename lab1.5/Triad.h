#pragma once
class Triad
{
private: 
	int first, second, third;
public:
	void setF(int value);
	void setS(int value);
	void setT(int value);
	int getF() const { return first; }
	int getS() const { return second; }
	int getT() const { return third; }

	bool Poriv(Triad t1, Triad t2);

	void Init(int value1, int value2, int value3);
	void Read();
	void Display();

};

