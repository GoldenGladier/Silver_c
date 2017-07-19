#include<iostream>
//Funciones|| Numero mayor
//Omar Aguirre Álvarez
using namespace std;

int n1,n2,n3,r;
bool i;

int igual(int a, int b)
{
    if(a==b)
    {
    return true;
    }
    else
    {
    return false; 
    }
}

int mayor(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
cout<<"\t\t\tNumero mayor"<<endl;
cout<<"\nEscribe n1: ";
cin>>n1;
cout<<"\nEscribe n2: ";
cin>>n2;
cout<<"\nEscribe n3: ";
cin>>n3;

if(igual(n1,n2)==true)
{
    if(igual(n1,n3)==true)
    {
        cout<<"\n\nLos 3 numeros son iguales"<<endl;
    }
    else
    {
        cout<<"\nn1 y n2 son iguales";
    }
}
else
{
    if(igual(n2,n3)==true)
    {
       cout<<"\nn2 y n3 son iguales";
    }
    else
    {
        if(igual(n1,n3)==true)
        {
            cout<<"\nn1 y n3 son iguales"<<endl;
        }
        
    }
}
r = mayor (mayor(n1,n2), mayor (n2,n3));
cout<<"\nEl mayor es: "<<r<<endl;
return 0;
}



