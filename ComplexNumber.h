#pragma once
#include "Abstract.h"

class ComplexNumber :public Abstract
{
private:
	int a, b;
public:
	void SetA(int);
	void SetB(int);

	int GetA() const;
	int GetB() const;

	ComplexNumber();
	ComplexNumber(int, int);
	ComplexNumber(ComplexNumber&);

	virtual void Print();
	virtual double Norma();
};

