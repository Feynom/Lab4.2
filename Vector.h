#pragma once
#include "Abstract.h"

class Vector : public Abstract
{
private:
	int arr[10];
public:
	Vector();
	Vector(int, int, int, int, int, int, int, int, int, int);
	Vector(Vector&);

	int& operator [] (int);

	virtual void Print();
	virtual double Norma();
};

