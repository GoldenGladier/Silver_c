#include<iostream>
//Funciones
//Omar Aguirre Álvarez
using namespace std;

int n1,n2,s,r,d,m,p;
int sumar(int a, int b)
{
   return (a)+(b);
}
int restar(int a, int b)
{
    return a - b;
}
int multiplicar(int a, int b)
{
    return a * b;
}
int dividir(int a, int b)
{
    return a / b;
}
int potenciar(int a, int b)
{
return n1^n2;
}
int main()
{ 
    cout<<"\t\t\tPrograma de funciones"<<endl;
    
    cout<<"\nDame primer numero: ";
    cin>>n1;
    cout<<"\nDame segundo numero: ";
    cin>>n2;
    s = sumar(n1,n2);
    r = restar(n1,n2);
    m = multiplicar(n1,n2);
    d = dividir(n1,n2);
    p = potenciar(n1,n2);
    cout<<"\nEl resultado de la suma es: "<<s<<endl;
    cout<<"El resultado de la resta es: "<<r<<endl;
    cout<<"El resultado de la multiplicacion es: "<<m<<endl;
    cout<<"El resultado de la divicion es: "<<d<<endl;
    cout<<"Potencias"<<p<<endl;
    return 0;
}