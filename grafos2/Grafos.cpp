#include "Grafos.hpp"

void Grafos::genraMarizQ0()
{
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            
            if(w[i][j] == 0)
                Q[i][j]=infinito;
            else
                Q[i][j]=w[i][j];
        }
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            T[i][j] =c;
            c++;
        }
        c ='A';
    }
    c='A';
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(Q[i][j] == infinito)
                T[i][j] = "}";
            else
            {
            if(i==j)
            T[i][j] = T[j][i] +T[i][j] ;
            else
                T[i][j] = c+T[i][j] ;
            }
        }
        c++;
    }
}
void Grafos::encuntraElCaminoMasCorto(void)
{
    for(k=0;k<=n;k++)
    {
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=n;j++)
            {
                
                if( Q[i][j]<Q[i][k]+Q[k][j])
                {
                    T[i][j] =T[i][j];
                }
                else
                   T[i][j] = T[i][k]+T[k][j];
                Q[i][j] = min(Q[i][j],Q[i][k]+Q[k][j]);
            }
        }
    }
}
void Grafos::pideleAlUsuarioTusDatos(void)
{
    cout<<"Dame el numero de variables : ";
    cin>>b;
    n = b-1;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            cout<<"Dame el valor de W ["<<i<<"]["<<j<<"] : ";
            cin>>b;
            w[i][j] = b;
        }
    }
    this->genraMarizQ0();
    this->encuntraElCaminoMasCorto();
}
void Grafos::muestraTuDatos()
{
    cout<<"W"<<endl;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            cout<<w[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Q"<<endl;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(Q[i][j] >= infinito)
                cout<<"inf"<<" ";
            else
                cout<<Q[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"T"<<endl;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
           if(Q[i][j] >= infinito)
                cout<<"-"<<" ";
            else
                cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }
}
