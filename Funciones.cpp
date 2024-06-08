//Serie figonashi
#include <iostream>

using namespace std;

int main()
{
    //variables
    long N0=0;
    long N1=1;
    long N;
    int P;
    //Pedir
    cout<<"Dame la serie que quieres de figonashi: ";
    cin>>P;
    //Bucle y ejer
    if(P>=1)
    {
        cout<<"Numero 0 Serie 0"<<endl;
        for(int i=1; i<=P; i++)
        {
        N=N0+N1;
        cout<<"Numero "<<i<<" Serie "<<N<<endl;
        N1=N0;
        N0=N;
        }   
    }else{
        cout<<"Numero 0 Serie 0"<<endl;
    }
    return 0;
}