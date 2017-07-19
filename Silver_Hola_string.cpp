#include<iostream>
using namespace std;
std::string name;
std::string cadena;
char c;
int n,i;
int line(char a, int b)
{
    for(i=0;i<n;i++)
    {
        cadena = c + cadena;
        
    }
}
int main()
{
cout<<"Ingresa tu nombre: ";
cin>>name;
cout<<"\nHola "<<name;
//Exercise two
cout<<"\nQue caracter deseas repetir? ";
cin>>c;
cout<<"Cuantas veces? ";
cin>>n;

line(c,n);
cout<<cadena;


}
