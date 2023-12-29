#include <iostream>

using namespace std;

union tipo1{
    float f;
    char c[4];
};

int main()
{
    tipo1 A;
    A.f = 13.5;

    for(int i=0;i<=3;i++)
        cout << "A.c[" << i << "]= " << A.c[i] << endl;

    return 0;
}
