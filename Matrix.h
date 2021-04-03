#pragma once
#include "Abstract.h"
class Matrix : public Abstract
{
private:
	int matrix[2][2];
public:
	Matrix();
	Matrix(int, int, int, int);

	virtual void Print();
	virtual double Norma();
};

