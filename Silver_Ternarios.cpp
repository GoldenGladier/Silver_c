#include<iostream>
#include<sstream>
#include <algorithm>
#include<math.h>
using namespace std;
int opc,n;

double toDecimal(char charTrinary, int position) {
    int trinary = charTrinary - 48;
    if (trinary < 0 || trinary > 2)
    {
        trinary = 0;
    }
    return trinary * pow(3, position);
}
int residuo(int a, int b)//Creating function for calcule residui
{
    int rduo;
    rduo = a % b;
    return rduo;
}
std::string translateToTernary()
{
std::stringstream result;//Creating string for save resultstd::cin>>res[x++] 
///////////////////////Collider of cervello////////////////////////////
while(n > 2)
{
   result<<residuo(n,3)<<" - ";
   n = n/3;  
}
result<<residuo(n,3);
return result.str();
}
int main()
{
std::cout<<"\t\t\twelcome user"<<endl<<"1. Translate to trinary"<<endl<<"2. Translate to Decimal"<<endl<<"\t\tChoose an option Please: "<<endl;
std::cin>>opc;
std::string number;
switch (opc)
{
    case 1:
    {
std::cout<<"Please digitare to number decimale for translate: ";
std::cin>>n;
std::cout<<"\nThanks..."<<endl;
std::string finish;
finish = translateToTernary();
std::reverse(finish.begin(), finish.end());
std::cout<<finish<<endl;
break;
    }
    case 2:
    {
std::cout<<"Please Enter the number Ternary for translate: ";
std::cin>>number;
std::reverse(number.begin(), number.end());
double Decimal;
for(int i = 0; i<number.size(); i++)
{
Decimal +=  toDecimal(number [i],i);
}
std::cout<<"\nThanks..."<<endl<< Decimal <<endl;
break;
    }
}
return 0;
}
