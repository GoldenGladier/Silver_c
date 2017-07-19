#include<iostream>
#include <sstream>
using namespace std;
int number;//Declaring the variable important 
std::string factorial(int a) {//The funccion master
   std::stringstream FacStream; //Declaring string for save result
    
    int r = number;
    for (int f = number;  f > 1; f--) {
        FacStream << f << " x "; //cicle for multiply and get result
        r = r * (f -1);
    }
    FacStream <<"1 = " << r;
    return FacStream.str();
}

int main()
{
std::cout<<"\t\t\t\tFactoriales"<<endl<<"\t\t\t\tBy: Omar Aguirre"<<endl<<"Please enter the number of the one you want to know the factorial: ";
std::cin>>number;
std::cout<<"\n"<<number<< ": "<<std::endl;
std::cout<< factorial(number)<<std::endl;

}
