#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	ofstream aSal("fstream.txt");
	int a = 1;
	double b = 2.1234;
	char c = '#';
	string d = "String";
	
	aSal << a << endl
		 << b << endl
		 << c << endl
		 << d << endl;
		 
	return 0;
}
