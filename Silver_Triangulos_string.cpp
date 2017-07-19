#include<iostream>
using namespace std;
std::string cadena;
std::string Triangulos;
char c;
int n,i,opc,x;
int line(char a, int b)//Cuadrados
{
for(x=0; x<n; x++)
{
    for(i=0;i<n;i++)
    {
        cadena = cadena + " " + c;
    }
    cadena = cadena + "\n";
}
}
int TDN(char a, int b)//TRIANGULO Derecho Normal
{
    Triangulos = c; 
    for(i=0;i<n;i++)
    {
        Triangulos = Triangulos + "\n";
        Triangulos = c + " " + Triangulos + "\n";
    }
}
int TDI(char a, int b)//TRIANGULO Derecho INVERTIDO
{
   for(x=0;x<n;x++)
   {
       for(i=x;i<n;i++)
    {
        cadena = cadena + c + " ";
    }
    cout<<cadena<<endl;
     cadena = c + " ";
    }
    cout<<cadena<<endl;
}
int TIN(char a, int b)//TRIANGULO Izquierdo Normal
{
    cadena = c + " ";
 for(x=0;x<=n;x++)
 {
    for(i=x;i<n;i++)
    {
     Triangulos = " " + Triangulos + " ";
    }
    Triangulos = Triangulos + cadena;
    cout<<Triangulos<<endl;
    cadena = cadena + c + " "; 
    Triangulos = " ";
    Triangulos = Triangulos + " ";
 }
 }
 int TII(char a, int b)//TRIANGULO Izquierdo INVERTIDO
{
    Triangulos = " ";
for(x=0; x<=n; x++)
    {
    cadena = " ";
     for(i=x; i<n; i++)
    {
        cadena = cadena + " " + c;
    }
    cout<< Triangulos + " " + cadena<<endl;
    cadena = " ";
    Triangulos = " " + Triangulos + " ";
    }
}
int TEN(char a, int b)//TRIAN Equilatero Normal
{
cadena = c + " ";
 for(x=0;x<=n;x++)
 {
    for(i=x;i<n;i++)
    {
     Triangulos = Triangulos + " ";
    }
    Triangulos = Triangulos + cadena;
    cout<<Triangulos<<endl;
    cadena = cadena + c + " "; 
    Triangulos = " ";
}
}
int TEI(char a, int b)//TRIANGULO Equilatero INVERTIDO
{
    Triangulos = " ";
for(x=1; x<=n; x++)
{
    cadena = c;
   for(i=x;i<n;i++)
    {
       cadena = cadena + " " + c;
    }
    cout<<Triangulos + cadena<<endl;
    
   Triangulos = Triangulos + " ";
}
}
int ROMBO(char a, int b)//ROMBO
{
 cadena = c + " ";
 for(x=0;x<=n;x++)
 {
    for(i=x;i<n;i++)
    {
     Triangulos = Triangulos + " ";
    }
    Triangulos = Triangulos + cadena;
    cout<<Triangulos<<endl;
    cadena = cadena + c + " "; 
    Triangulos = " ";
}   
 Triangulos = " ";
 Triangulos = Triangulos + " ";
for(x=2; x<=n; x++)
{
    cadena = c;
   for(i=x;i<n;i++)
    {
       cadena = cadena + " " + c;
    }
    cout<<Triangulos + cadena<<endl;
    
   Triangulos = Triangulos + " ";
}
}
int main()
{
cout<<"1. Cuadrados"<<endl;
cout<<"2. Triangulo Derecho Normal"<<endl;
cout<<"3. Triangulo Derecho Invertido"<<endl;
cout<<"4. Triangulo Izquierdo Normal"<<endl;
cout<<"5. Triangulo Izquierdo Invertido"<<endl;
cout<<"6. Triangulo Equilatero Normal"<<endl;
cout<<"7. Triangulo Equilatero Invertido"<<endl;
cout<<"8. Rombos(Parte extra del programa)"<<endl;
cout<<"\nElige una opcion: ";
cin>>opc;
cout<<"\n";
    switch(opc)
    {
        case 1:
        {
//Cuadrados
cout<<"\t\t\t\t\t-Cuadrados-";
cout<<"\nQue caracter deseas usar? ";
cin>>c;
cout<<"Cuantas lineas? ";
cin>>n;

line(c,n);
cout<<cadena;
            break;
        }
        case 2:
        {
//Triangules
cout<<"\t\t\t-Triangulos-";
cout<<"\nQue caracter deseas usar? ";
cin>>c;
cout<<"Cuantas lineas? ";
cin>>n;

TDN(c,n);
cout<<Triangulos;
        break;
        }
        case 3:
        {
cout<<"\t\t\t-Triangulos-";
cout<<"\nQue caracter deseas usar? ";
cin>>c;
cout<<"Cuantas lineas? ";
cin>>n;
TDI(c,n); 
        break;
       }
        case 4:
        {
cout<<"\t\t\t-Triangulos-";
cout<<"\nQue caracter deseas usar? ";
cin>>c;
cout<<"Cuantas lineas? ";
cin>>n;
TIN(c,n);
        break;
        }
        case 5:
        {
cout<<"\t\t\t-Triangulos-";
cout<<"\nQue caracter deseas usar? ";
cin>>c;
cout<<"Cuantas lineas? ";
cin>>n;
TII(c,n);
        break;
        }
        case 6:
        {
cout<<"\t\t\t-Triangulos-";
cout<<"\nQue caracter deseas usar? ";
cin>>c;
cout<<"Cuantas lineas? ";
cin>>n;
TEN(c,n);
        break;
        }
        case 7:
        {
cout<<"\t\t\t-Triangulos-";
cout<<"\nQue caracter deseas usar? ";
cin>>c;
cout<<"Cuantas lineas? ";
cin>>n;
TEI(c,n);
        break;
        }
        case 8:
        {
cout<<"\t\t\t-Rombos-";
cout<<"\nQue caracter deseas usar? ";
cin>>c;
cout<<"Cuantas lineas? ";
cin>>n;
ROMBO(c,n);   
        break;
        }
        default:
        {
            cout<<"opcion invalida intenta de nuevo porfavor...";
        }
    }
return 0;
}

