#include <iostream>
#include <stdlib.h>
using namespace std;

void leeMatriz(float** X, int m, int n);
void muestraMatriz(float** X, int m, int n);
float** generaMatriz(int m, int n);
void liberaMatriz(float** X, int m);
void inicializaMatriz(float** X, int m, int n);
void sumaDeMatrices(float** X, float** Y, float** Z, int m, int n);
void restaDeMatrices(float** X, float** Y, float** Z, int m, int n);
void multiplicacionDeMatrices(float** X, float** Y, float** Z, int m, int n, int ele);

int main(void){
	float **A, **B, **E;
	int m1, n1, m2, n2, m5, n5, i;
	cout << "Dame m1 y n1 ";
	cin >> m1 >> n1;
	cout << "Dame m2 y n2 ";
	cin >> m2 >> n2;

	system("cls");

	if (m1 <= 0 || n1 <= 0 || m2 <= 0 || n2 <= 0) {
		if(m1 <= 0 || n1 <= 0)
			cout << "Orden de A invalido..." << endl;
		if (m2 <= 0 || n2 <= 0)
			cout << "Orden de B invalido..." << endl;
	}
	else if (n1 != m2)
			cout << "No pueden multiplicarse..." << endl;
	else {
		m5 = m1;
		n5 = n2;
		A = generaMatriz(m1, n1);
		B = generaMatriz(m2, n2);
		E = generaMatriz(m5, n5);
		system("cls");
		cout << "A" << endl;
		leeMatriz(A, m1, n1);
		system("cls");
		cout << "B" << endl;
		leeMatriz(B, m2, n2);

		system("cls");

		multiplicacionDeMatrices(A, B, E, m5, n5, n1);

		cout << "A" << endl;
		muestraMatriz(A, m1, n1);
		cout << endl << "B" << endl;
		muestraMatriz(B, m2, n2);
		cout << endl << "E" << endl;
		muestraMatriz(E, m5, n5);

		liberaMatriz(A, m1);
		liberaMatriz(B, m2);
		liberaMatriz(E, m5);
	}

	system("pause");
    return 0;
}

void leeMatriz(float** X, int m, int n) {
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cout << "Ingresa [" << i << "][" << j << "] ";
			cin >> X[i][j];
		}
	}
}
void muestraMatriz(float** X, int m, int n) {
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cout << X[i][j] << "\t";
		}
		cout << endl;
	}
}
float** generaMatriz(int m, int n) {
	float** X;
	int i;

	X = new float*[m];
	for (i = 0; i < m; i++)
		X[i] = new float[n];

	inicializaMatriz(X, m, n);

	return X;
}
void liberaMatriz(float** X, int m) {
	int i;
	for (i = 0; i < m; i++)
		delete X[i];
	delete[] X;
}
void inicializaMatriz(float** X, int m, int n) {
	int i, j;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			X[i][j] = 0;
}
void sumaDeMatrices(float** X, float** Y, float** Z, int m, int n) {
	int i, j;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			Z[i][j] = X[i][j] + Y[i][j];
}
void restaDeMatrices(float** X, float** Y, float** Z, int m, int n) {
	int i, j;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			Z[i][j] = X[i][j] - Y[i][j];
}
void multiplicacionDeMatrices(float** X, float** Y, float** Z, int m, int n, int ele) {
	int i, j, k;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			for (k = 0; k < ele; k++)
				Z[i][j] += X[i][k] * Y[k][j];
}

