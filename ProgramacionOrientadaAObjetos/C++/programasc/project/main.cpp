#include <iostream>
#include "Fraccion.h"
#include "Fraccion.cpp"

using namespace std;

Fraccion suma(Fraccion X, Fraccion Y);
Fraccion resta(Fraccion X, Fraccion Y);
Fraccion multiplica(Fraccion X, Fraccion Y);
Fraccion divide(Fraccion X, Fraccion Y);

int main(int argc, char** argv) {
	Fraccion A,B,C;
	
	cout << "A:" << endl;
	A.pideleAlUsuarioTusDatos();
	cout << endl << "B:" << endl;
	B.pideleAlUsuarioTusDatos();
	
	C = suma(A,B);
	cout << endl; A.muestraTusDatos(); cout << " + "; B.muestraTusDatos(); cout << " = "; C.muestraTusDatos();
	
	C = resta(A,B);
	cout << endl; A.muestraTusDatos(); cout << " - "; B.muestraTusDatos(); cout << " = "; C.muestraTusDatos();
	
	C = multiplica(A,B);
	cout << endl; A.muestraTusDatos(); cout << " * "; B.muestraTusDatos(); cout << " = "; C.muestraTusDatos();
	
	C = divide(A,B);
	cout << endl; A.muestraTusDatos(); cout << " / "; B.muestraTusDatos(); cout << " = "; C.muestraTusDatos();
	
	return 0;
}

Fraccion multiplica(Fraccion X, Fraccion Y){
	Fraccion R;
	R.modificaTuNum( X.dameTuNum() * Y.dameTuNum() );
	R.modificaTuDen( X.dameTuDen() * Y.dameTuDen() );
	return R;
}

Fraccion divide(Fraccion X, Fraccion Y){
	Fraccion R;
	R.modificaTuNum( X.dameTuNum() * Y.dameTuDen() );
	R.modificaTuDen( X.dameTuDen() * Y.dameTuNum() );
	return R;
}

Fraccion suma(Fraccion X, Fraccion Y){
	Fraccion R;
	R.modificaTuNum( Y.dameTuDen() * X.dameTuNum() + X.dameTuDen() * Y.dameTuNum() );
	R.modificaTuDen( X.dameTuDen() * Y.dameTuDen() );
	return R;
}

Fraccion resta(Fraccion X, Fraccion Y){
	Fraccion R;
	R.modificaTuNum( Y.dameTuDen() * X.dameTuNum() - X.dameTuDen() * Y.dameTuNum() );
	R.modificaTuDen( X.dameTuDen() * Y.dameTuDen() );
	return R;
}
