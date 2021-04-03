#include "Vector.h"

Vector::Vector() { for (int i = 0; i < 10; i++) arr[i] = 0; }
Vector::Vector(int el1 = 0, int el2 = 0, int el3 = 0,
	int el4 = 0, int el5 = 0, int el6 = 0,
	int el7 = 0, int el8 = 0, int el9 = 0, int el10 = 0) {
	arr[0] = el1; arr[1] = el2; arr[2] = el3;
	arr[3] = el4; arr[4] = el5; arr[5] = el6;
	arr[6] = el7; arr[7] = el8; arr[8] = el9;
	arr[9] = el10;
}
Vector::Vector(Vector& A) {
	arr[0] = A[0]; arr[1] = A[1]; arr[2] = A[2];
	arr[3] = A[3]; arr[4] = A[4]; arr[5] = A[5];
	arr[6] = A[6]; arr[7] = A[7]; arr[8] = A[8];
	arr[9] = A[9];
}

int& Vector::operator[] (int j) { return arr[j]; }

void Vector::Print() {
	for (int i = 0; i < 10; i++)
		cout << this->arr[i] << " ";
	cout << endl;
}

double Vector::Norma() {
	int sum_square = 0;
	for (int i = 0; i < 10; i++)
		sum_square += arr[i] * arr[i];
	return sqrt(sum_square);
}