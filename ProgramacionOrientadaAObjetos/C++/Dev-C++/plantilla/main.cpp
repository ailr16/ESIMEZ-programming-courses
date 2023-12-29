#include <iostream>

using namespace std;

template<typename T>
T suma(T x, T y);

int main(int argc, char** argv) {
	float a, b, c;
	cout << "Da un numero:";
	cin >> a;
	cout << "Da otro numero:";
	cin >> b;
	
	c = suma(a,b);
	
	cout << a << " + " << b << " = " << c;
	return 0;
}

template<typename T>
T suma(T x, T y){
	T z;
	z = x + y;
	return z;
}
