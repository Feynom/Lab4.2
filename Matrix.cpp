#include "Matrix.h"

Matrix::Matrix() {
	matrix[0][0] = 0, matrix[0][1] = 0,
		matrix[1][0] = 0, matrix[1][1] = 0;
}
Matrix::Matrix(int ob1 = 0, int ob2 = 0, int ob3 = 0, int ob4 = 0) {
	matrix[0][0] = ob1, matrix[0][1] = ob2,
		matrix[1][0] = ob3, matrix[1][1] = ob4;
}

void Matrix::Print() {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
}
double Matrix::Norma() {
	int max_value = matrix[0][0];
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			if (max_value < matrix[i][j])
				max_value = matrix[i][j];
	return abs(max_value);
}