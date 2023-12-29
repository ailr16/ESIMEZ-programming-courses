#include <iostream>

using namespace std;

//unsigned int factorial(int n);                //Forma iterativa
//int factorial(int x);                           //Forma Recursiva
int fibonacci(int x);

int main()
{
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;

    for(int i=0;i<=n;i++){
        cout << fibonacci(i) << " ";
    }

    return 0;
}

/*unsigned int factorial(int n){                //Forma iterativa
    unsigned int fact = 1;
    for(int i=1;i<=n;i++){
        fact = i * fact;
    }
    return fact;
}


int factorial(int x){                           //Forma recursiva
    if(x == 0 || x ==1 )
        return 1;
    else
        return x*factorial(x-1);
}
*/

int fibonacci(int x){                           //Forma recursiva
    int res;
    if(x == 0)
        return 0;
    if(x == 1)
        return 1;
    res = fibonacci(x-1) + fibonacci(x-2);
    return res;
}
